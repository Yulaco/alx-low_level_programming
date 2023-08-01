; A 64-bit program in assembly that prints a string.
; Printf function allowed.
; Interrupts not allowed.

SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

SECTION .text
global_start
extern printf
global main

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
