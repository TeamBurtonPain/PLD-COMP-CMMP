	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
.Lmainbb_0:
	movq	$1,	-8(%rbp)		#var_-8
	movq	$2,	-16(%rbp)		#var_-16
	movq	-8(%rbp),	%rax		#var_-8
	imulq	-16(%rbp),	%rax		#var_-16
	movq	%rax,	-24(%rbp)
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
