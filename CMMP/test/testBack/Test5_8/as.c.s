	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$40, %rsp
.Lmainbb_0:
	call	getChar
	movq	%rax,	-16(%rbp)
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	$10,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	getChar
	.type	getChar, @function
getChar:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$24, %rsp
.LgetCharbb_0:
	movq	$111,	-16(%rbp)		#var_-16
	movq	-16(%rbp),	%rax		#return
	jmp	.LgetCharendgetChar
	jmp	.LgetCharendgetChar
.LgetCharendgetChar:
	movq	%rbp, %rsp
	popq	%rbp
	ret
