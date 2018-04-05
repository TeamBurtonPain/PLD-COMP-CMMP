.text
	.globl	getint
	.type	getint, @function
getint:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192, %rsp
.Lgetintbb_0:
	movq	$1,	-48(%rbp)		#var_-48
	movq	-48(%rbp),	%rax		#var_-48
	movq	%rax,	-8(%rbp)		#c
	movq	$0,	-56(%rbp)		#var_-56
	movq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-16(%rbp)		#res
	movq	$10,	-64(%rbp)		#var_-64
	movq	-64(%rbp),	%rax		#var_-64
	movq	%rax,	-32(%rbp)		#base
	jmp	.Lgetintbb_1
.Lgetintbb_1:
	movq	$1,	-72(%rbp)		#var_-72
	movq	-8(%rbp),	%rax		#c
	cmpq	-72(%rbp),	%rax		#var_-72
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-80(%rbp)
	cmpq	$0,	-80(%rbp)
	jz	.Lgetintbb_3
.Lgetintbb_2:
	call	getchar
	movq	%rax,	-88(%rbp)
	movq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-24(%rbp)		#read
	movq	$48,	-96(%rbp)		#var_-96
	movq	-24(%rbp),	%rax		#read
	cmpq	-96(%rbp),	%rax		#var_-96
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-104(%rbp)
	cmpq	$0,	-104(%rbp)
	jz	.Lgetintbb_5
.Lgetintbb_4:
	movq	$0,	-112(%rbp)		#var_-112
	movq	-112(%rbp),	%rax		#var_-112
	movq	%rax,	-8(%rbp)		#c
	jmp	.Lgetintbb_5
.Lgetintbb_5:
	movq	$57,	-120(%rbp)		#var_-120
	movq	-120(%rbp),	%rax		#var_-120
	cmpq	-24(%rbp),	%rax		#read
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-128(%rbp)
	cmpq	$0,	-128(%rbp)
	jz	.Lgetintbb_7
.Lgetintbb_6:
	movq	$0,	-136(%rbp)		#var_-136
	movq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-8(%rbp)		#c
	jmp	.Lgetintbb_7
.Lgetintbb_7:
	movq	$1,	-144(%rbp)		#var_-144
	movq	-8(%rbp),	%rax		#c
	cmpq	-144(%rbp),	%rax		#var_-144
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-152(%rbp)
	cmpq	$0,	-152(%rbp)
	jz	.Lgetintbb_9
.Lgetintbb_8:
	movq	-16(%rbp),	%rax		#res
	imulq	-32(%rbp),	%rax		#base
	movq	%rax,	-160(%rbp)
	movq	$48,	-168(%rbp)		#var_-168
	movq	-24(%rbp),	%rax		#read
	subq	-168(%rbp),	%rax		#var_-168
	movq	%rax,	-176(%rbp)
	movq	-160(%rbp),	%rax		#var_-160
	addq	-176(%rbp),	%rax		#var_-176
	movq	%rax,	-184(%rbp)
	movq	-184(%rbp),	%rax		#var_-184
	movq	%rax,	-16(%rbp)		#res
	jmp	.Lgetintbb_9
.Lgetintbb_9:
	jmp	.Lgetintbb_1
.Lgetintbb_3:
	movq	-16(%rbp),	%rax		#return
	jmp	.Lgetintendgetint
	jmp	.Lgetintendgetint
.Lgetintendgetint:
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
