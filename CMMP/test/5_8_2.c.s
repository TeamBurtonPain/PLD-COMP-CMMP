	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	movq	$10,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-8(%rbp)		#n
	movq	-8(%rbp),	%rdi
	call	fib
	movq	%rax,	-32(%rbp)
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-16(%rbp)		#a
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$10,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	fib
	.type	fib, @function
fib:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$104, %rsp
.Lfibbb_0:
	movq	%rdi,	%rax		#param0
	movq	%rax,	-8(%rbp)		#i
	movq	$2,	-24(%rbp)		#var_-24
	movq	-8(%rbp),	%rax		#i
	cmpq	-24(%rbp),	%rax		#var_-24
	setl	%al
	movq	%rax,	-32(%rbp)
	cmpq	$0,	-32(%rbp)
	jz	.Lfibbb_3
.Lfibbb_1:
	movq	$1,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rax		#return
	jmp	.Lfibendfib
	jmp	.Lfibbb_2
.Lfibbb_3:
	movq	$1,	-56(%rbp)		#var_-56
	movq	-8(%rbp),	%rax		#i
	subq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-64(%rbp)
	movq	-64(%rbp),	%rdi
	call	fib
	movq	%rax,	-48(%rbp)
	movq	$2,	-80(%rbp)		#var_-80
	movq	-8(%rbp),	%rax		#i
	subq	-80(%rbp),	%rax		#var_-80
	movq	%rax,	-88(%rbp)
	movq	-88(%rbp),	%rdi
	call	fib
	movq	%rax,	-72(%rbp)
	movq	-48(%rbp),	%rax		#var_-48
	addq	-72(%rbp),	%rax		#var_-72
	movq	%rax,	-96(%rbp)
	movq	-96(%rbp),	%rax		#return
	jmp	.Lfibendfib
	jmp	.Lfibbb_2
.Lfibbb_2:
	jmp	.Lfibendfib
.Lfibendfib:
	movq	%rbp, %rsp
	popq	%rbp
	ret
