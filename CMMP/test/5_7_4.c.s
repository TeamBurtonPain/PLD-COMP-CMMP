	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	movq	$1000,	-8(%rbp)		#var_-8
	movq	$100,	-16(%rbp)		#var_-16
	movq	-8(%rbp),	%rax		#var_-8
	cmpq	-16(%rbp),	%rax		#var_-16
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-24(%rbp)
	cmpq	$0,	-24(%rbp)
	jz	.Lmainbb_2
.Lmainbb_1:
	movq	$111,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_2
.Lmainbb_2:
	movq	$10,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
