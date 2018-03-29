	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$104, %rsp
.Lbb_0:
	movq	$53,	-40(%rbp)
	movq	-40(%rbp),	%rax
	movq	%rax,	-32(%rbp)
	movq	$50,	-48(%rbp)
	movq	-48(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	-32(%rbp),	%rax
	addq	-8(%rbp),	%rax
	movq	%rax,	-56(%rbp)
	movq	$49,	-64(%rbp)
	movq	-56(%rbp),	%rax
	subq	-64(%rbp),	%rax
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rax
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax
	imulq	-32(%rbp),	%rax
	movq	%rax,	-80(%rbp)
	movq	$50,	-88(%rbp)
	movq	-80(%rbp),	%rax
	cqto
	idivq	-88(%rbp)
	movq	%rax,	-96(%rbp)
	movq	-96(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	-16(%rbp),	%rax
	movq	%rax,	-32(%rbp)
	movq	%rbp, %rsp
	popq	%rbp
	ret
