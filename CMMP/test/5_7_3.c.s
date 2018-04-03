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
	subq	$112, %rsp
.Lsquarephabetbb_0:
	movq	$97,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-8(%rbp)		#b
	movq	$97,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-16(%rbp)		#a
	jmp	.Lsquarephabetbb_1
.Lsquarephabetbb_1:
	movq	$122,	-40(%rbp)		#var_-40
	movq	-8(%rbp),	%rax		#b
	cmpq	-40(%rbp),	%rax		#var_-40
	setle	%al
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lsquarephabetbb_3
.Lsquarephabetbb_2:
	movq	$97,	-56(%rbp)		#var_-56
	movq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-16(%rbp)		#a
	jmp	.Lsquarephabetbb_4
.Lsquarephabetbb_4:
	movq	$122,	-64(%rbp)		#var_-64
	movq	-16(%rbp),	%rax		#a
	cmpq	-64(%rbp),	%rax		#var_-64
	setle	%al
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lsquarephabetbb_6
.Lsquarephabetbb_5:
	movq	-16(%rbp),	%rax		#a
	movq	%rax,	-80(%rbp)		#var_-80
	movq	-16(%rbp),	%rax		#a
	addq	$1,	%rax		#$1
	movq	%rax,	-16(%rbp)
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lsquarephabetbb_4
.Lsquarephabetbb_6:
	movq	$1,	-88(%rbp)		#var_-88
	movq	-8(%rbp),	%rax		#b
	addq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-96(%rbp)
	movq	-96(%rbp),	%rax		#var_-96
	movq	%rax,	-8(%rbp)		#b
	movq	$10,	-104(%rbp)		#var_-104
	movq	-104(%rbp),	%rdi
	call	putchar
	jmp	.Lsquarephabetbb_1
.Lsquarephabetbb_3:
	jmp	.Lsquarephabetendsquarephabet
.Lsquarephabetendsquarephabet:
	movq	%rbp, %rsp
	popq	%rbp
	ret
