	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
.Lbb_0:
	movq	$3,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-16(%rbp)		#a
	movq	$4,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-8(%rbp)		#b
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	setl	%al
	movq	%rax,	-40(%rbp)
	cmpq	$0,	-40(%rbp)
	jz	.Lbb_3
.Lbb_1:
	movq	$73,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_2
.Lbb_3:
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movq	%rax,	-56(%rbp)
	cmpq	$0,	-56(%rbp)
	jz	.Lbb_6
.Lbb_4:
	movq	$69,	-64(%rbp)		#var_-64
	movq	-64(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_6:
	movq	$83,	-72(%rbp)		#var_-72
	movq	-72(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_5:
	jmp	.Lendmain
.Lbb_2:
	movq	$10,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
