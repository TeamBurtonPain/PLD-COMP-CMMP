	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	movq	$97,	-16(%rbp)		#var_-16
	movq	-16(%rbp),	%rax		#var_-16
	movq	%rax,	-8(%rbp)		#a
	jmp	.Lmainbb_1
.Lmainbb_1:
	movq	$122,	-24(%rbp)		#var_-24
	movq	-8(%rbp),	%rax		#a
	cmpq	-24(%rbp),	%rax		#var_-24
	setle	%al
	movq	%rax,	-32(%rbp)
	cmpq	$0,	-32(%rbp)
	jz	.Lmainbb_3
.Lmainbb_2:
	movq	-8(%rbp),	%rax		#a
	movq	%rax,	-40(%rbp)		#var_-40
	movq	-8(%rbp),	%rax		#a
	addq	$1,	%rax		#$1
	movq	%rax,	-8(%rbp)
	movq	-40(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_1
.Lmainbb_3:
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
