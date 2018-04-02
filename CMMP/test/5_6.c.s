	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$72, %rsp
.Lbb_0:
	movq	$3,	-24(%rbp)
	movq	-24(%rbp),	%rax
	movq	%rax,	-16(%rbp)
	movq	$2,	-32(%rbp)
	movq	-32(%rbp),	%rax
	movq	%rax,	-8(%rbp)
	movq	-16(%rbp),	%rax
	cmpq	-8(%rbp),	%rax
	sete	%al
	movq	%rax,	-40(%rbp)
	movq	$1,	%rax
	subq	-40(%rbp),	%rax
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lbb_2
.Lbb_1:
	movq	$86,	-56(%rbp)
	movq	-56(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_2
.Lbb_2:
	movq	$10,	-64(%rbp)
	movq	-64(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
