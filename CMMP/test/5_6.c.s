	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
.Lbb_0:
	movq	$1,	-32(%rbp)
	movq	-32(%rbp),	%rax
	movq	%rax,	-24(%rbp)
	movq	$2,	-40(%rbp)
	movq	-40(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	$90,	-48(%rbp)
	movq	-24(%rbp),	%rax
	cmpq	-8(%rbp),	%rax
	sete	%al
	movq	%rax,	-56(%rbp)
	movq	$1,	%rax
	subq	-56(%rbp),	%rax
	movq	%rax,	-64(%rbp)
	movq	-48(%rbp),	%rax
	addq	-64(%rbp),	%rax
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	-16(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
