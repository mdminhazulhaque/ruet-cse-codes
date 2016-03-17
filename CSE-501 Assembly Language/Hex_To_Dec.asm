.MODEL SMALL
.STACK 100H

.DATA
    MSG_1  EQU  'Enter the Hex digit (A-F) : $'
    MSG_2  EQU  0DH,0AH,'The corresponding Decimal dgit is : $'

    PROMPT_1  DB  MSG_1
    PROMPT_2  DB  MSG_2

.CODE
   MAIN PROC
     MOV AX, @DATA                ; initialize DS
     MOV DS, AX

     LEA DX, PROMPT_1             ; load and display PROMPT_1 
     MOV AH, 9
     INT 21H

     MOV AH, 1                    ; read the hex digit
     INT 21H

     MOV BL, AL                   ; save the hex digit into BL

     LEA DX, PROMPT_2             ; load and display PROMPT_2
     MOV AH, 9
     INT 21H

     MOV AH, 2                    ; display the first decimal digit i.e. 1
     MOV DL, 31H
     INT 21H

     SUB BL, 11H                  ; convert the character into second digit

     MOV DL, BL                   ; display the second digit
     INT 21H

     MOV AH, 4CH                  ; return control to DOS
     INT 21H
   MAIN ENDP
 END MAIN