	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$120, %rsp
.Lbb_0:
	movq	$2,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-16(%rbp)		#a
	movq	$2,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-8(%rbp)		#b
	movq	$2,	-40(%rbp)		#var_-40
	movq	-16(%rbp),	%rax		#a
	addq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-48(%rbp)
	movq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-16(%rbp)		#a
	movq	$1,	-56(%rbp)		#var_-56
	movq	-8(%rbp),	%rax		#b
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-64(%rbp)
	movq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-8(%rbp)		#b
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	setl	%al
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lbb_3
.Lbb_1:
	movq	$73,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_2
.Lbb_3:
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movq	%rax,	-88(%rbp)
	cmpq	$0,	-88(%rbp)
	jz	.Lbb_6
.Lbb_4:
	movq	$69,	-96(%rbp)		#var_-96
	movq	-96(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_6:
	movq	$83,	-104(%rbp)		#var_-104
	movq	-104(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_5:
	jmp	.Lendmain
.Lbb_2:
	movq	$10,	-112(%rbp)		#var_-112
	movq	-112(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
