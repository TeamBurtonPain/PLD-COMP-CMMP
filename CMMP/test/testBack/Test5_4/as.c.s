	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
.Lmainbb_0:
	movq	$111,	-32(%rbp)		#var_-32
	movq	$-24,	-40(%rbp)		#var_-40
	movq	%rbp,	%rax		#%rbp
	addq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-40(%rbp)
	movq	-40(%rbp),	%rax		#var_-40
	movq	-32(%rbp),	%rbx		#var_-32
	movq	%rbx,	(%rax)
	movq	$-8,	-48(%rbp)		#var_-48
	movq	%rbp,	%rax		#%rbp
	addq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-48(%rbp)
	movq	-48(%rbp),	%rax		#var_-48
	movq	-24(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	$107,	-56(%rbp)		#var_-56
	movq	$-16,	-64(%rbp)		#var_-64
	movq	%rbp,	%rax		#%rbp
	addq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-64(%rbp)
	movq	-64(%rbp),	%rax		#var_-64
	movq	-56(%rbp),	%rbx		#var_-56
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putchar
	movq	-16(%rbp),	%rdi
	call	putchar
	movq	$10,	-72(%rbp)		#var_-72
	movq	-72(%rbp),	%rdi
	call	putchar
	movq	-8(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
