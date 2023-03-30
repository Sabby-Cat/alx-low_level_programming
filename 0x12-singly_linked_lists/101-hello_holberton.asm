	global main
	extern printf
main:
	mov rdi, format
	xor rax, rax
	call printf
	ret
format: db `Hello, Holberto\n`,0
