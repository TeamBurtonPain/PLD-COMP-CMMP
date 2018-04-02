	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
.Lbb_0:
	movq	$2,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-16(%rbp)		#a
	movq	$2,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-8(%rbp)		#b
	movq	-8(%rbp),	%rax		#b
	addq	$1,	%rax		#$1
	movq	%rax,	-8(%rbp)
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	setl	%al
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lbb_3
.Lbb_1:
	movq	$73,	-56(%rbp)		#var_-56
	movq	-56(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_2
.Lbb_3:
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movq	%rax,	-64(%rbp)
	cmpq	$0,	-64(%rbp)
	jz	.Lbb_6
.Lbb_4:
	movq	$69,	-72(%rbp)		#var_-72
	movq	-72(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_6:
	movq	$83,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_5
.Lbb_5:
	jmp	.Lendmain
.Lbb_2:
	movq	$10,	-88(%rbp)		#var_-88
	movq	-88(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
