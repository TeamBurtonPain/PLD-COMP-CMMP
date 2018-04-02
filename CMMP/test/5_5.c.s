	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$72, %rsp
.Lbb_0:
	movq	$57,	-24(%rbp)
	movq	-24(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	$90,	-32(%rbp)
	movq	$56,	-40(%rbp)
	movq	-40(%rbp),	%rax
	cmpq	-16(%rbp),	%rax
	setl	%al
	movq	%rax,	-48(%rbp)
	movq	-32(%rbp),	%rax
	addq	-48(%rbp),	%rax
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	$10,	-64(%rbp)
	movq	-64(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
