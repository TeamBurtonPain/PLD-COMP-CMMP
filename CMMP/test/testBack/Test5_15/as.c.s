	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$88, %rsp
.Lmainbb_0:
	movq	$1,	-8(%rbp)		#var_-8
	movq	$2,	-16(%rbp)		#var_-16
	movq	$3,	-24(%rbp)		#var_-24
	movq	$4,	-32(%rbp)		#var_-32
	movq	$5,	-40(%rbp)		#var_-40
	movq	$6,	-48(%rbp)		#var_-48
	movq	$7,	-56(%rbp)		#var_-56
	movq	$8,	-64(%rbp)		#var_-64
	movq	$8654,	-72(%rbp)		#var_-72
	movq	-8(%rbp),	%rdi
	movq	-16(%rbp),	%rsi
	movq	-24(%rbp),	%rdx
	movq	-32(%rbp),	%rcx
	movq	-40(%rbp),	%r8
	movq	-48(%rbp),	%r9
	movq	-72(%rbp),	%rax		#var_-72
	pushq	%rax		
	movq	-64(%rbp),	%rax		#var_-64
	pushq	%rax		
	movq	-56(%rbp),	%rax		#var_-56
	pushq	%rax		
	call	f
	movq	$10,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putint
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	f
	.type	f, @function
f:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80, %rsp
.Lfbb_0:
	movq	%rdi,	%rax		#param0
	movq	%rax,	-8(%rbp)		#a
	movq	%rsi,	%rax		#param1
	movq	%rax,	-16(%rbp)		#b
	movq	%rdx,	%rax		#param2
	movq	%rax,	-24(%rbp)		#c
	movq	%rcx,	%rax		#param3
	movq	%rax,	-32(%rbp)		#d
	movq	%r8,	%rax		#param4
	movq	%rax,	-40(%rbp)		#e
	movq	%r9,	%rax		#param5
	movq	%rax,	-48(%rbp)		#f
	movq	16(%rbp),	%rax
	movq	%rax,	-56(%rbp)		#g
	movq	24(%rbp),	%rax
	movq	%rax,	-64(%rbp)		#h
	movq	32(%rbp),	%rax
	movq	%rax,	-72(%rbp)		#i
	movq	-8(%rbp),	%rdi
	call	putint
	movq	-16(%rbp),	%rdi
	call	putint
	movq	-24(%rbp),	%rdi
	call	putint
	movq	-32(%rbp),	%rdi
	call	putint
	movq	-40(%rbp),	%rdi
	call	putint
	movq	-48(%rbp),	%rdi
	call	putint
	movq	-56(%rbp),	%rdi
	call	putint
	movq	-64(%rbp),	%rdi
	call	putint
	movq	-72(%rbp),	%rdi
	call	putint
	jmp	.Lfendf
.Lfendf:
	movq	%rbp, %rsp
	popq	%rbp
	ret
# Auto included function putint
.text
	.globl	putint
	.type	putint, @function
putint:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$232, %rsp
.Lputintbb_0:
	movq	%rdi,	%rax		#param0
	movq	%rax,	-8(%rbp)		#n
	movq	$1,	-32(%rbp)		#var_-32
	movq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-16(%rbp)		#digit
	movq	$1,	-40(%rbp)		#var_-40
	movq	-40(%rbp),	%rax		#var_-40
	movq	%rax,	-24(%rbp)		#pow
	movq	$0,	-48(%rbp)		#var_-48
	movq	-8(%rbp),	%rax		#n
	cmpq	-48(%rbp),	%rax		#var_-48
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-56(%rbp)
	cmpq	$0,	-56(%rbp)
	jz	.Lputintbb_2
.Lputintbb_1:
	movq	$48,	-64(%rbp)		#var_-64
	movq	-64(%rbp),	%rdi
	call	putchar
	jmp	.Lputintbb_2
.Lputintbb_2:
	jmp	.Lputintbb_3
.Lputintbb_3:
	movq	-24(%rbp),	%rax		#pow
	cmpq	-8(%rbp),	%rax		#n
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lputintbb_5
.Lputintbb_4:
	movq	$10,	-80(%rbp)		#var_-80
	movq	-24(%rbp),	%rax		#pow
	imulq	-80(%rbp),	%rax		#var_-80
	movq	%rax,	-88(%rbp)
	movq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-24(%rbp)		#pow
	jmp	.Lputintbb_3
.Lputintbb_5:
	movq	$10,	-96(%rbp)		#var_-96
	movq	-24(%rbp),	%rax		#pow
	cqto
	idivq	-96(%rbp)		#var_-96
	movq	%rax,	-104(%rbp)
	movq	-104(%rbp),	%rax		#var_-104
	movq	%rax,	-24(%rbp)		#pow
	jmp	.Lputintbb_6
.Lputintbb_6:
	movq	$0,	-112(%rbp)		#var_-112
	movq	-24(%rbp),	%rax		#pow
	cmpq	-112(%rbp),	%rax		#var_-112
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-120(%rbp)
	movq	$1,	%rax
	subq	-120(%rbp),	%rax		#var_-120
	movq	%rax,	-128(%rbp)
	cmpq	$0,	-128(%rbp)
	jz	.Lputintbb_8
.Lputintbb_7:
	movq	$1,	-136(%rbp)		#var_-136
	movq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-16(%rbp)		#digit
	jmp	.Lputintbb_9
.Lputintbb_9:
	movq	-16(%rbp),	%rax		#digit
	imulq	-24(%rbp),	%rax		#pow
	movq	%rax,	-144(%rbp)
	movq	-144(%rbp),	%rax		#var_-144
	cmpq	-8(%rbp),	%rax		#n
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-152(%rbp)
	cmpq	$0,	-152(%rbp)
	jz	.Lputintbb_11
.Lputintbb_10:
	movq	-16(%rbp),	%rax		#digit
	movq	%rax,	-160(%rbp)		#var_-160
	movq	-16(%rbp),	%rax		#digit
	addq	$1,	%rax		#$1
	movq	%rax,	-16(%rbp)
	jmp	.Lputintbb_9
.Lputintbb_11:
	movq	-16(%rbp),	%rax		#digit
	movq	%rax,	-168(%rbp)		#var_-168
	movq	-16(%rbp),	%rax		#digit
	subq	$1,	%rax		#$1
	movq	%rax,	-16(%rbp)
	movq	$48,	-176(%rbp)		#var_-176
	movq	-176(%rbp),	%rax		#var_-176
	addq	-16(%rbp),	%rax		#digit
	movq	%rax,	-184(%rbp)
	movq	-184(%rbp),	%rdi
	call	putchar
	movq	-16(%rbp),	%rax		#digit
	imulq	-24(%rbp),	%rax		#pow
	movq	%rax,	-192(%rbp)
	movq	-8(%rbp),	%rax		#n
	subq	-192(%rbp),	%rax		#var_-192
	movq	%rax,	-200(%rbp)
	movq	-200(%rbp),	%rax		#var_-200
	movq	%rax,	-8(%rbp)		#n
	movq	$10,	-208(%rbp)		#var_-208
	movq	-24(%rbp),	%rax		#pow
	cqto
	idivq	-208(%rbp)		#var_-208
	movq	%rax,	-216(%rbp)
	movq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-24(%rbp)		#pow
	jmp	.Lputintbb_6
.Lputintbb_8:
	movq	$10,	-224(%rbp)		#var_-224
	movq	-224(%rbp),	%rdi
	call	putchar
	jmp	.Lputintendputint
.Lputintendputint:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	ret
