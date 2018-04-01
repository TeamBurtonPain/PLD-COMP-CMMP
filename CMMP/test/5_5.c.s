	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
.Lbb_0:
	movq	$57,	-32(%rbp)
	movq	-32(%rbp),	%rax
	movq	%rax,	-24(%rbp)
	movq	$1,	-40(%rbp)
	movq	-24(%rbp),	%rax
	addq	-40(%rbp),	%rax
	movq	%rax,	-48(%rbp)
	movq	-48(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	-8(%rbp),	%rax
	addq	-24(%rbp),	%rax
	movq	%rax,	-56(%rbp)
	movq	$1,	-64(%rbp)
	movq	-56(%rbp),	%rax
	addq	-64(%rbp),	%rax
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	-24(%rbp),	%rdi
	call	putchar
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$10,	-80(%rbp)
	movq	-80(%rbp),	%rdi
	call	putchar
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	%rbp, %rsp
	popq	%rbp
	ret
