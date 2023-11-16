section .data
	hello db 'Hello, Holberton', 0
	format db '%s', 10, 0

section .text
	global _start

_start:
	; Prepare arguments to call printf
	mov rdi, format   ; Format string
	mov rsi, hello    ; Address of the string to print
	xor rax, rax      ; Clear RAX to indicate printf from the PLT
	call printf       ; Call printf function from the PLT

	; Exit
	mov eax, 60       ; Exit syscall number
	xor edi, edi      ; Exit status 0
	syscall           ; Invoke syscall
