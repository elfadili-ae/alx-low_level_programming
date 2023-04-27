section .data
	alx:	db "Hello, Holberton",10
	alxLen:	equ $-alx

section .text
	global main
main:
	; Write the string to stdout
	mov eax,4
	mov ebx,1
	mov ecx,alx
	mov edx,alxLen
	int 0x80

	; Exit program
	mov eax, 1
	xor ebx, ebx
	int 0x80
