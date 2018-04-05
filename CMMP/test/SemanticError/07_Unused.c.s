	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
.Lmainbb_0:
	movq	$2,	-16(%rbp)		#var_-16
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	movq	$2,	-48(%rbp)		#var_-48
	movq	$-40,	-56(%rbp)		#var_-56
	movq	%rbp,	%rax		#%rbp
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax		#var_-56
	movq	-48(%rbp),	%rbx		#var_-48
	movq	%rbx,	(%rax)
	movq	-8(%rbp),	%rax		#b
	addq	-40(%rbp),	%rax		#a
	movq	%rax,	-64(%rbp)
	movq	$-8,	-72(%rbp)		#var_-72
	movq	%rbp,	%rax		#%rbp
	addq	-72(%rbp),	%rax		#var_-72
	movq	%rax,	-72(%rbp)
	movq	-72(%rbp),	%rax		#var_-72
	movq	-64(%rbp),	%rbx		#var_-64
	movq	%rbx,	(%rax)
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
