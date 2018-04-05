	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
.Lmainbb_0:
	movq	$55,	-24(%rbp)		#var_-24
	movq	$-16,	-32(%rbp)		#var_-32
	movq	%rbp,	%rax		#%rbp
	addq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-32(%rbp)
	movq	-32(%rbp),	%rax		#var_-32
	movq	-24(%rbp),	%rbx		#var_-24
	movq	%rbx,	(%rax)
	movq	$90,	-40(%rbp)		#var_-40
	movq	$56,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rax		#var_-48
	cmpq	-16(%rbp),	%rax		#a
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-56(%rbp)
	movq	-40(%rbp),	%rax		#var_-40
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-64(%rbp)
	movq	$-8,	-72(%rbp)		#var_-72
	movq	%rbp,	%rax		#%rbp
	addq	-72(%rbp),	%rax		#var_-72
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rax		#var_-72
	movq	-64(%rbp),	%rbx		#var_-64
	movq	%rbx,	(%rax)
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	$10,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
