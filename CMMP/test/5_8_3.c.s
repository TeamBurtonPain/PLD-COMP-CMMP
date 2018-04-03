	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
.Lmainbb_0:
	movq	$97,	-16(%rbp)		#var_-16
	movq	-16(%rbp),	%rax		#var_-16
	movq	%rax,	-8(%rbp)		#a
	movq	-8(%rbp),	%rdi
	call	alpha
	movq	%rax,	-24(%rbp)
	movq	$10,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	alpha
	.type	alpha, @function
alpha:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
.Lalphabb_0:
	movq	%rdi,	%rax		#param0
	movq	%rax,	-8(%rbp)		#i
	movq	$122,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	cmpq	-8(%rbp),	%rax		#i
	setl	%al
	movq	%rax,	-32(%rbp)
	cmpq	$0,	-32(%rbp)
	jz	.Lalphabb_3
.Lalphabb_1:
	movq	$10,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rdi
	call	putchar
	movq	$0,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rax		#return
	jmp	.Lalphaendalpha
	jmp	.Lalphabb_2
.Lalphabb_3:
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	$1,	-64(%rbp)		#var_-64
	movq	-8(%rbp),	%rax		#i
	addq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rdi
	call	alpha
	movq	%rax,	-56(%rbp)
	movq	$33,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rax		#return
	jmp	.Lalphaendalpha
	jmp	.Lalphabb_2
.Lalphabb_2:
	jmp	.Lalphaendalpha
.Lalphaendalpha:
	movq	%rbp, %rsp
	popq	%rbp
	ret
