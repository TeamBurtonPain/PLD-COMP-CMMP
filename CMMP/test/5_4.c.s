	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$56, %rsp
.Lbb_0:
	movq	$111,	-32(%rbp)
	movq	-32(%rbp),	%rax
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	$107,	-40(%rbp)
	movq	-40(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	-24(%rbp),	%rdi
	call	putchar
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$10,	-48(%rbp)
	movq	-48(%rbp),	%rdi
	call	putchar
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	%rbp, %rsp
	popq	%rbp
	ret
