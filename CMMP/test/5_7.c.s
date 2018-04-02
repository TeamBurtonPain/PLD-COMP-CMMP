	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144, %rsp
.Lbb_0:
	movq	$1,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-8(%rbp)		#b
	movq	$1,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-24(%rbp)		#a
	movq	$2,	-56(%rbp)		#var_-56
	movq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-32(%rbp)		#i
	movq	$13,	-64(%rbp)		#var_-64
	movq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-16(%rbp)		#n_wanted
	movq	$2,	-72(%rbp)		#var_-72
	movq	-16(%rbp),	%rax		#n_wanted
	cmpq	-72(%rbp),	%rax		#var_-72
	setl	%al
	movq	%rax,	-80(%rbp)
	cmpq	$0,	-80(%rbp)
	jz	.Lbb_3
.Lbb_1:
	movq	$111,	-88(%rbp)		#var_-88
	movq	-88(%rbp),	%rdi
	call	putchar
	jmp	.Lbb_2
.Lbb_3:
	jmp	.Lbb_4
.Lbb_4:
	movq	-32(%rbp),	%rax		#i
	cmpq	-16(%rbp),	%rax		#n_wanted
	setl	%al
	movq	%rax,	-96(%rbp)
	cmpq	$0,	-96(%rbp)
	jz	.Lbb_6
.Lbb_5:
	movq	-24(%rbp),	%rax		#a
	addq	-8(%rbp),	%rax		#b
	movq	%rax,	-104(%rbp)
	movq	-104(%rbp),	%rax		#var_-104
	movq	%rax,	-8(%rbp)		#b
	movq	-8(%rbp),	%rax		#b
	subq	-24(%rbp),	%rax		#a
	movq	%rax,	-112(%rbp)
	movq	-112(%rbp),	%rax		#var_-112
	movq	%rax,	-24(%rbp)		#a
	movq	$1,	-120(%rbp)		#var_-120
	movq	-32(%rbp),	%rax		#i
	addq	-120(%rbp),	%rax		#var_-120
	movq	%rax,	-128(%rbp)
	movq	-128(%rbp),	%rax		#var_-128
	movq	%rax,	-32(%rbp)		#i
	jmp	.Lbb_4
.Lbb_6:
	movq	-8(%rbp),	%rdi
	call	putwchar
	jmp	.Lendmain
.Lbb_2:
	movq	$10,	-136(%rbp)		#var_-136
	movq	-136(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
