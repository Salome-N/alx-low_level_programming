/**
* 64-bit program in assembly that prints Hello, Holberton, followed by a new line
* @var: format of what to be printed
* txt: message to be printed
*/
	extern printf

	global text

	section .txtvar

	text:
		push rbp
		mov rdi,var
		mov rsi,txt
		mov rax,0
		call printf
		pop rbp
		mov rax,0
		ret

	section .txtprint
		txt: db "Hello, Holberton", 0
		var: db "%s", 10, 0
