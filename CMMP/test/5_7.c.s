	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
.Lbb_0:
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
