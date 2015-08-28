name two_digit_mul
.model small
.stack 100h
.code
start:

mov ah, 1h      ;input mode

xor bx, bx      ;clear BL
int 21h         ;get 1st digit into AL
sub al, '0'     ;convert ascii to int
mov cx, 10
_digit1:        ;make BL = BL*10
    add bl, al
    loop _digit1
    
int 21h         ;get 2nd digit
sub al, '0'     ;convert ascii to int
add bl, al      ;add digit to BL*10
;now BL has 1st number

mov ah, 2h      ;output mode
mov dl, 0dh     ;print CR
int 21h
mov dl, 0ah     ;print LF
int 21h

mov ah, 1h      ;input mode again
xor dx, dx      ;clear DX
int 21h         ;get 1st digit into AL
sub al, '0'     ;convert ascii to int
mov cx, 10
_digit2:        ;make DL = DL*10
    add dl, al
    loop _digit2
    
int 21h         ;get 2nd digit
sub al, '0'     ;convert ascii to int
add dl, al      ;add digit to DL*10
;now DL has 2nd number

xor ax, ax
xor bh, bh
xor cx, cx
mov cl, bl      ;CL contains 1st number
xor dh, dh

_mul:
    add ax, dx  ;multiply DX by CX times
    loop _mul

mov bx, ax      ;send result to BX

;mov bx, 1234 ; test code, runs ok
mov ah, 2h
mov dl, 0dh
int 21h
mov dl, 0ah
int 21h

mov cl, 0h
_mod1000:
    cmp bx, 1000
    jl _next1000
    inc cl
    sub bx, 1000
    jmp _mod1000
_next1000:
    mov dl, cl
    add dl, '0'
    int 21h
    mov cl, 0h
_mod100:
    cmp bx, 100
    jl _next100
    inc cl
    sub bx, 100
    jmp _mod100
_next100:
    mov dl, cl
    add dl, '0'
    int 21h
    mov cl, 0h
_mod10:
    cmp bx, 10
    jl _next10
    inc cl
    sub bx, 10
    jmp _mod10
_next10:
    mov dl, cl
    add dl, '0'
    int 21h
    mov dl, bl
    add dl, '0'
    int 21h
    
_exit:
    mov ah, 4ch
    int 21h

end start




; multiply a number by 10, shift technique
; mov dl, al      ;backup original to DL
; mov cl, 3
; shl al, cl      ;left shift AL
; mov dh, al      ;backup result to DH
; 
; mov bl, dl      ;restore original from DL
; mov cl, 1
; shl bl, cl
; add bl, dh      ;BL = AL*10
