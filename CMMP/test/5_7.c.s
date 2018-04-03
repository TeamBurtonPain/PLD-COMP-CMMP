	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$56, %rsp
.Lbb_0:
	movq	$97,	-16(%rbp)		#var_-16
	movq	-16(%rbp),	%rax		#var_-16
	movq	%rax,	-8(%rbp)		#alpha
	jmp	.Lbb_1
.Lbb_1:
	movq	$122,	-24(%rbp)		#var_-24
	movq	-8(%rbp),	%rax		#alpha
	cmpq	-24(%rbp),	%rax		#var_-24
	setle	%al
	movq	%rax,	-32(%rbp)
	cmpq	$0,	-32(%rbp)
	jz	.Lbb_3
.Lbb_2:
	movq	-8(%rbp),	%rax		#alpha
	movq	%rax,	-40(%rbp)		#var_-40
	movq	-8(%rbp),	%rax		#alpha
	addq	$1,	%rax		#$1
	movq	%rax,	-8(%rbp)
	movq	-40(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_1
.Lbb_3:
	movq	$10,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
