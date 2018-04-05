	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	movq	$111,	-16(%rbp)		#var_-16
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$107,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rdi
	call	putchar
	movq	$48,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rdi
	call	putchar
	movq	$33,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
