	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
.Lmainbb_0:
	call	squarephabet
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	squarephabet
	.type	squarephabet, @function
squarephabet:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144, %rsp
.Lsquarephabetbb_0:
	movq	$97,	-16(%rbp)		#var_-16
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	jmp	.Lsquarephabetbb_1
.Lsquarephabetbb_1:
	movq	$122,	-40(%rbp)		#var_-40
	movq	-8(%rbp),	%rax		#b
	cmpq	-40(%rbp),	%rax		#var_-40
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lsquarephabetbb_3
	jmp	.Lsquarephabetbb_2
.Lsquarephabetbb_2:
	movq	$97,	-56(%rbp)		#var_-56
	movq	$-32,	-64(%rbp)		#var_-64
	movq	%rbp,	%rax		#%rbp
	addq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-64(%rbp)
	movq	-64(%rbp),	%rax		#var_-64
	movq	-56(%rbp),	%rbx		#var_-56
	movq	%rbx,	(%rax)
	jmp	.Lsquarephabetbb_4
.Lsquarephabetbb_4:
	movq	$122,	-72(%rbp)		#var_-72
	movq	-32(%rbp),	%rax		#a
	cmpq	-72(%rbp),	%rax		#var_-72
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-80(%rbp)
	cmpq	$0,	-80(%rbp)
	jz	.Lsquarephabetbb_6
	jmp	.Lsquarephabetbb_5
.Lsquarephabetbb_5:
	movq	-32(%rbp),	%rax		#a
	movq	%rax,	-96(%rbp)		#var_-96
	movq	-32(%rbp),	%rax		#a
	addq	$1,	%rax		#$1
	movq	%rax,	-88(%rbp)
	movq	$-32,	-104(%rbp)		#var_-104
	movq	%rbp,	%rax		#%rbp
	addq	-104(%rbp),	%rax		#var_-104
	movq	%rax,	-104(%rbp)
	movq	-104(%rbp),	%rax		#var_-104
	movq	-88(%rbp),	%rbx		#var_-88
	movq	%rbx,	(%rax)
	movq	-96(%rbp),	%rdi
	call	putchar
	jmp	.Lsquarephabetbb_4
.Lsquarephabetbb_6:
	movq	$1,	-112(%rbp)		#var_-112
	movq	-8(%rbp),	%rax		#b
	addq	-112(%rbp),	%rax		#var_-112
	movq	%rax,	-120(%rbp)
	movq	$-8,	-128(%rbp)		#var_-128
	movq	%rbp,	%rax		#%rbp
	addq	-128(%rbp),	%rax		#var_-128
	movq	%rax,	-128(%rbp)
	movq	-128(%rbp),	%rax		#var_-128
	movq	-120(%rbp),	%rbx		#var_-120
	movq	%rbx,	(%rax)
	movq	$10,	-136(%rbp)		#var_-136
	movq	-136(%rbp),	%rdi
	call	putchar
	jmp	.Lsquarephabetbb_1
.Lsquarephabetbb_3:
	jmp	.Lsquarephabetendsquarephabet
.Lsquarephabetendsquarephabet:
	movq	%rbp, %rsp
	popq	%rbp
	ret
