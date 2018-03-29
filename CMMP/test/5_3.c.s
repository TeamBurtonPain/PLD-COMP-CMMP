	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lbb_0:
	movq	$111,	-16(%rbp)
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$107,	-24(%rbp)
	movq	-24(%rbp),	%rdi
	call	putchar
	movq	$10,	-32(%rbp)
	movq	-32(%rbp),	%rdi
	call	putchar
	movq	$33,	-40(%rbp)
	movq	-40(%rbp),	%rdi
	call	putchar
	movq	%rbp, %rsp
	popq	%rbp
	ret
