	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
.Lmainbb_0:
	call	getChar
	movq	%rax,	-16(%rbp)
	movq	-16(%rbp),	%rax		#var_-16
	movq	%rax,	-8(%rbp)		#a
	movq	-8(%rbp),	%rdi
	call	putchar
	movq	$10,	-24(%rbp)		#var_-24
	movq	-24(%rbp),	%rdi
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
	movq	-16(%rbp),	%rax#return
	jmp	.LgetCharendgetChar
	jmp	.LgetCharendgetChar
.LgetCharendgetChar:
	movq	%rbp, %rsp
	popq	%rbp
	ret
