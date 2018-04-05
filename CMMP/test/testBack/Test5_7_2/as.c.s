	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
.Lmainbb_0:
	movq	$97,	-16(%rbp)		#var_-16
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	jmp	.Lmainbb_1
.Lmainbb_1:
	movq	$122,	-32(%rbp)		#var_-32
	movq	-8(%rbp),	%rax		#a
	cmpq	-32(%rbp),	%rax		#var_-32
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-40(%rbp)
	cmpq	$0,	-40(%rbp)
	jz	.Lmainbb_3
	jmp	.Lmainbb_2
.Lmainbb_2:
	movq	-8(%rbp),	%rax		#a
	movq	%rax,	-56(%rbp)		#var_-56
	movq	-8(%rbp),	%rax		#a
	addq	$1,	%rax		#$1
	movq	%rax,	-48(%rbp)
	movq	$-8,	-64(%rbp)		#var_-64
	movq	%rbp,	%rax		#%rbp
	addq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-64(%rbp)
	movq	-64(%rbp),	%rax		#var_-64
	movq	-48(%rbp),	%rbx		#var_-48
	movq	%rbx,	(%rax)
	movq	-56(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_1
.Lmainbb_3:
	movq	$10,	-72(%rbp)		#var_-72
	movq	-72(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
