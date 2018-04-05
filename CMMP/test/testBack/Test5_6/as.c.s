	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$104, %rsp
.Lmainbb_0:
	movq	$5,	-24(%rbp)		#var_-24
	movq	$-16,	-32(%rbp)		#var_-32
	movq	%rbp,	%rax		#%rbp
	addq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-32(%rbp)
	movq	-32(%rbp),	%rax		#var_-32
	movq	-24(%rbp),	%rbx		#var_-24
	movq	%rbx,	(%rax)
	movq	$2,	-40(%rbp)		#var_-40
	movq	$-8,	-48(%rbp)		#var_-48
	movq	%rbp,	%rax		#%rbp
	addq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-48(%rbp)
	movq	-48(%rbp),	%rax		#var_-48
	movq	-40(%rbp),	%rbx		#var_-40
	movq	%rbx,	(%rax)
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-56(%rbp)
	cmpq	$0,	-56(%rbp)
	jz	.Lmainbb_3
	jmp	.Lmainbb_1
.Lmainbb_1:
	movq	$73,	-64(%rbp)		#var_-64
	movq	-64(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_2
.Lmainbb_3:
	movq	-16(%rbp),	%rax		#a
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lmainbb_6
	jmp	.Lmainbb_4
.Lmainbb_4:
	movq	$69,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_5
.Lmainbb_6:
	movq	$83,	-88(%rbp)		#var_-88
	movq	-88(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_5
.Lmainbb_5:
	jmp	.Lmainbb_2
.Lmainbb_2:
	movq	$10,	-96(%rbp)		#var_-96
	movq	-96(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
