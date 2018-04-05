	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
.Lmainbb_0:
	call	getint
	movq	%rax,	-16(%rbp)
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	movq	$1,	-32(%rbp)		#var_-32
	movq	-8(%rbp),	%rax		#a
	addq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-40(%rbp)
	movq	-40(%rbp),	%rdi
	call	putint
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	getint
	.type	getint, @function
getint:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$248, %rsp
.Lgetintbb_0:
	movq	$1,	-24(%rbp)		#var_-24
	movq	$-16,	-32(%rbp)		#var_-32
	movq	%rbp,	%rax		#%rbp
	addq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-32(%rbp)
	movq	-32(%rbp),	%rax		#var_-32
	movq	-24(%rbp),	%rbx		#var_-24
	movq	%rbx,	(%rax)
	movq	$0,	-48(%rbp)		#var_-48
	movq	$-40,	-56(%rbp)		#var_-56
	movq	%rbp,	%rax		#%rbp
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax		#var_-56
	movq	-48(%rbp),	%rbx		#var_-48
	movq	%rbx,	(%rax)
	movq	$10,	-80(%rbp)		#var_-80
	movq	$-72,	-88(%rbp)		#var_-88
	movq	%rbp,	%rax		#%rbp
	addq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-88(%rbp)
	movq	-88(%rbp),	%rax		#var_-88
	movq	-80(%rbp),	%rbx		#var_-80
	movq	%rbx,	(%rax)
	jmp	.Lgetintbb_1
.Lgetintbb_1:
	movq	$1,	-96(%rbp)		#var_-96
	movq	-16(%rbp),	%rax		#c
	cmpq	-96(%rbp),	%rax		#var_-96
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-104(%rbp)
	cmpq	$0,	-104(%rbp)
	jz	.Lgetintbb_3
	jmp	.Lgetintbb_2
.Lgetintbb_2:
	call	getchar
	movq	%rax,	-112(%rbp)
	movq	$-64,	-120(%rbp)		#var_-120
	movq	%rbp,	%rax		#%rbp
	addq	-120(%rbp),	%rax		#var_-120
	movq	%rax,	-120(%rbp)
	movq	-120(%rbp),	%rax		#var_-120
	movq	-112(%rbp),	%rbx		#var_-112
	movq	%rbx,	(%rax)
	movq	$48,	-128(%rbp)		#var_-128
	movq	-64(%rbp),	%rax		#read
	cmpq	-128(%rbp),	%rax		#var_-128
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-136(%rbp)
	cmpq	$0,	-136(%rbp)
	jz	.Lgetintbb_5
	jmp	.Lgetintbb_4
.Lgetintbb_4:
	movq	$0,	-144(%rbp)		#var_-144
	movq	$-16,	-152(%rbp)		#var_-152
	movq	%rbp,	%rax		#%rbp
	addq	-152(%rbp),	%rax		#var_-152
	movq	%rax,	-152(%rbp)
	movq	-152(%rbp),	%rax		#var_-152
	movq	-144(%rbp),	%rbx		#var_-144
	movq	%rbx,	(%rax)
	jmp	.Lgetintbb_5
.Lgetintbb_5:
	movq	$57,	-160(%rbp)		#var_-160
	movq	-160(%rbp),	%rax		#var_-160
	cmpq	-64(%rbp),	%rax		#read
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-168(%rbp)
	cmpq	$0,	-168(%rbp)
	jz	.Lgetintbb_7
	jmp	.Lgetintbb_6
.Lgetintbb_6:
	movq	$0,	-176(%rbp)		#var_-176
	movq	$-16,	-184(%rbp)		#var_-184
	movq	%rbp,	%rax		#%rbp
	addq	-184(%rbp),	%rax		#var_-184
	movq	%rax,	-184(%rbp)
	movq	-184(%rbp),	%rax		#var_-184
	movq	-176(%rbp),	%rbx		#var_-176
	movq	%rbx,	(%rax)
	jmp	.Lgetintbb_7
.Lgetintbb_7:
	movq	$1,	-192(%rbp)		#var_-192
	movq	-16(%rbp),	%rax		#c
	cmpq	-192(%rbp),	%rax		#var_-192
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-200(%rbp)
	cmpq	$0,	-200(%rbp)
	jz	.Lgetintbb_9
	jmp	.Lgetintbb_8
.Lgetintbb_8:
	movq	-40(%rbp),	%rax		#res
	imulq	-72(%rbp),	%rax		#base
	movq	%rax,	-208(%rbp)
	movq	$48,	-216(%rbp)		#var_-216
	movq	-64(%rbp),	%rax		#read
	subq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-224(%rbp)
	movq	-208(%rbp),	%rax		#var_-208
	addq	-224(%rbp),	%rax		#var_-224
	movq	%rax,	-232(%rbp)
	movq	$-40,	-240(%rbp)		#var_-240
	movq	%rbp,	%rax		#%rbp
	addq	-240(%rbp),	%rax		#var_-240
	movq	%rax,	-240(%rbp)
	movq	-240(%rbp),	%rax		#var_-240
	movq	-232(%rbp),	%rbx		#var_-232
	movq	%rbx,	(%rax)
	jmp	.Lgetintbb_9
.Lgetintbb_9:
	jmp	.Lgetintbb_1
.Lgetintbb_3:
	movq	-40(%rbp),	%rax		#return
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
