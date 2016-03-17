.MODEL SMALL
.STACK 100H

.DATA
    PROMPT     DB  0DH,0AH,'Enter three initials : $'
    ASTERISKS  DB  '***********',0DH,0AH,'$'
    NEXT_LINE  DB  0DH,0AH,"$"

.CODE
   MAIN PROC
     MOV AX, @DATA                ; initialize DS
     MOV DS, AX

     MOV AH, 2                    ; display "?"
     MOV DL, "?"
     INT 21H

     LEA DX, PROMPT               ; load and display the string PROMPT
     MOV AH, 9
     INT 21H

     MOV AH, 1                    ; read first initial
     INT 21H

     MOV BL, AL                   ; save first initial in BL

     INT 21H                      ; read second initial

     MOV BH, AL                   ; save second initial in BH

     INT 21H                      ; read third initial

     MOV CL, AL                   ; save third initial in CL

     LEA DX, NEXT_LINE            ; load and display the string NEXT_LINE
     MOV AH, 9
     INT 21H
     INT 21H

     LEA DX, ASTERISKS            ; load the string ASTERISKS
     MOV AH, 9                                           

     INT 21H                      ; display the string ASTERISKS 5 times
     INT 21H
     INT 21H
     INT 21H
     INT 21H

     MOV ASTERISKS+4, BL          ; place the three initials in the position
     MOV ASTERISKS+5, BH          ; of middle asterisks i.e. 4,5,6.
     MOV ASTERISKS+6, CL

     INT 21H                      ; display the modified string ASTERISKS

     MOV ASTERISKS+4, "*"         ; place the "*" back in their original 
     MOV ASTERISKS+5, "*"         ; position
     MOV ASTERISKS+6, "*"

     INT 21H                      ; print the string ASTERISKS 5 times
     INT 21H
     INT 21H
     INT 21H
     INT 21H

     MOV AH, 2                    ; Beep the computer 
     MOV DL, 7H
     INT 21H

     MOV AH, 4CH                  ; return control to DOS
     INT 21H
   MAIN ENDP
 END MAIN