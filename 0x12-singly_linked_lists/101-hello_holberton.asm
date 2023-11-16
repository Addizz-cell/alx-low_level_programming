section .data
	hello db 'Hello, Holberton', 10  ; The 10 is the newline character
	hello_len equ $ - hello

section .text
	global _start

_start:
	; Prepare syscall arguments: sys_write(int fd, const char *buf, size_t count)
	mov rax, 1             ; sys_write syscall number
	mov rdi, 1             ; File descriptor 1 (stdout)
	mov rsi, hello         ; Address of the string
	mov rdx, hello_len     ; Length of the string
	syscall                ; Invoke syscall

	; Exit syscall
	mov rax, 60            ; sys_exit syscall number
	xor rdi, rdi           ; Exit status 0
	syscall                ; Invoke syscall
