.model small
.stack 100h
.data
    str_kobul  equ  'kobul! ', 0dh, 0ah
.code
main:
lea dx, str_kobul
mov cx, 0x3
say:
     mov ah, 0x9
     int 21h
     loop say
    
mov ah, 4ch
int 21h
end main
