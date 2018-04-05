	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	movq	$1,	-24(%rbp)		#var_-24
	movq	-8(%rbp),	%rax		#a
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-32(%rbp)
	movq	$-16,	-40(%rbp)		#var_-40
	movq	%rbp,	%rax		#%rbp
	addq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-40(%rbp)
	movq	-40(%rbp),	%rax		#var_-40
	movq	-32(%rbp),	%rbx		#var_-32
	movq	%rbx,	(%rax)
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
