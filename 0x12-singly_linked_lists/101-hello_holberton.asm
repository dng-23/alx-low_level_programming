section .data
    message db "Hello, Holberton",10
    msglen equ $-message

global main
section .text
	main:
    	mov eax, 1
    	mov edi, 1
    	mov esi, message
    	mov edx, msglen
    	syscall
    	mov eax, 60
    	xor edi, edi
    	syscall
