section .data
    message db "Hello, Holberton",10
global main
section .text
	main:
    	mov eax, 4
    	mov ebx, 1
    	mov ecx, message
    	mov edx, 18
    	int 0x80
    	mov eax, 1
    	xor ebx, ebx
    	int 0x80
