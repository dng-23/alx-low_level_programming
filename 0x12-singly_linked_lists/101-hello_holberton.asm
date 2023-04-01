section .data
    message db "Hello, Holberton",10
global main
section .text
	main:
    	mov eax, 1
    	mov edi, 1
    	mov esi, message
    	mov edx, 18
    	syscall
    	mov eax, 60
    	xor edi, edi
    	syscall
