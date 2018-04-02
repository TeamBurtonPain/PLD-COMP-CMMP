	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
.Lbb_0:
	jmp	.Lbb_1
.Lbb_1:
	movq	$5,	-16(%rbp)		#var_-16
	movq	-8(%rbp),	%rax		#i
	cmpq	-16(%rbp),	%rax		#var_-16
	setl	%al
	movq	%rax,	-24(%rbp)
	cmpq	$0,	-24(%rbp)
	jz	.Lbb_3
.Lbb_2:
	movq	$86,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rdi
	call	putchar
	movq	$1,	-40(%rbp)		#var_-40
	movq	-8(%rbp),	%rax		#i
	addq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-48(%rbp)
	movq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-8(%rbp)		#i
	jmp	.Lbb_1
.Lbb_3:
	movq	$10,	-56(%rbp)		#var_-56
	movq	-56(%rbp),	%rdi
	call	putchar
	jmp	.Lendmain
.Lendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
