	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
.Lmainbb_0:
	movq	$32,	-8(%rbp)		#var_-8
	movq	-8(%rbp),	%rdi
	call	putint
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.text
	.globl	putint
	.type	putint, @function
putint:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$320, %rsp
.Lputintbb_0:
	movq	%rdi,	%rax		#param0
	movq	%rax,	-8(%rbp)		#n
	movq	$1,	-24(%rbp)		#var_-24
	movq	$-16,	-32(%rbp)		#var_-32
	movq	%rbp,	%rax		#%rbp
	addq	-32(%rbp),	%rax		#var_-32
	movq	%rax,	-32(%rbp)
	movq	-32(%rbp),	%rax		#var_-32
	movq	-24(%rbp),	%rbx		#var_-24
	movq	%rbx,	(%rax)
	movq	$1,	-48(%rbp)		#var_-48
	movq	$-40,	-56(%rbp)		#var_-56
	movq	%rbp,	%rax		#%rbp
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax		#var_-56
	movq	-48(%rbp),	%rbx		#var_-48
	movq	%rbx,	(%rax)
	movq	$0,	-64(%rbp)		#var_-64
	movq	-8(%rbp),	%rax		#n
	cmpq	-64(%rbp),	%rax		#var_-64
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lputintbb_2
	jmp	.Lputintbb_1
.Lputintbb_1:
	movq	$48,	-80(%rbp)		#var_-80
	movq	-80(%rbp),	%rdi
	call	putchar
	jmp	.Lputintbb_2
.Lputintbb_2:
	jmp	.Lputintbb_3
.Lputintbb_3:
	movq	-40(%rbp),	%rax		#pow
	cmpq	-8(%rbp),	%rax		#n
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-88(%rbp)
	cmpq	$0,	-88(%rbp)
	jz	.Lputintbb_5
	jmp	.Lputintbb_4
.Lputintbb_4:
	movq	$10,	-96(%rbp)		#var_-96
	movq	-40(%rbp),	%rax		#pow
	imulq	-96(%rbp),	%rax		#var_-96
	movq	%rax,	-104(%rbp)
	movq	$-40,	-112(%rbp)		#var_-112
	movq	%rbp,	%rax		#%rbp
	addq	-112(%rbp),	%rax		#var_-112
	movq	%rax,	-112(%rbp)
	movq	-112(%rbp),	%rax		#var_-112
	movq	-104(%rbp),	%rbx		#var_-104
	movq	%rbx,	(%rax)
	jmp	.Lputintbb_3
.Lputintbb_5:
	movq	$10,	-120(%rbp)		#var_-120
	movq	-40(%rbp),	%rax		#pow
	cqto
	idivq	-120(%rbp)		#var_-120
	movq	%rax,	-128(%rbp)
	movq	$-40,	-136(%rbp)		#var_-136
	movq	%rbp,	%rax		#%rbp
	addq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-136(%rbp)
	movq	-136(%rbp),	%rax		#var_-136
	movq	-128(%rbp),	%rbx		#var_-128
	movq	%rbx,	(%rax)
	jmp	.Lputintbb_6
.Lputintbb_6:
	movq	$0,	-144(%rbp)		#var_-144
	movq	-40(%rbp),	%rax		#pow
	cmpq	-144(%rbp),	%rax		#var_-144
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-152(%rbp)
	movq	$0,	%rax		#$0
	cmpq	-152(%rbp),	%rax		#var_-152
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-160(%rbp)
	cmpq	$0,	-160(%rbp)
	jz	.Lputintbb_8
	jmp	.Lputintbb_7
.Lputintbb_7:
	movq	$1,	-168(%rbp)		#var_-168
	movq	$-16,	-176(%rbp)		#var_-176
	movq	%rbp,	%rax		#%rbp
	addq	-176(%rbp),	%rax		#var_-176
	movq	%rax,	-176(%rbp)
	movq	-176(%rbp),	%rax		#var_-176
	movq	-168(%rbp),	%rbx		#var_-168
	movq	%rbx,	(%rax)
	jmp	.Lputintbb_9
.Lputintbb_9:
	movq	-16(%rbp),	%rax		#digit
	imulq	-40(%rbp),	%rax		#pow
	movq	%rax,	-184(%rbp)
	movq	-184(%rbp),	%rax		#var_-184
	cmpq	-8(%rbp),	%rax		#n
	setle	%al
	movzbq	%al,	%rax
	movq	%rax,	-192(%rbp)
	cmpq	$0,	-192(%rbp)
	jz	.Lputintbb_11
	jmp	.Lputintbb_10
.Lputintbb_10:
	movq	-16(%rbp),	%rax		#digit
	movq	%rax,	-208(%rbp)		#var_-208
	movq	-16(%rbp),	%rax		#digit
	addq	$1,	%rax		#$1
	movq	%rax,	-200(%rbp)
	movq	$-16,	-216(%rbp)		#var_-216
	movq	%rbp,	%rax		#%rbp
	addq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-216(%rbp)
	movq	-216(%rbp),	%rax		#var_-216
	movq	-200(%rbp),	%rbx		#var_-200
	movq	%rbx,	(%rax)
	jmp	.Lputintbb_9
.Lputintbb_11:
	movq	-16(%rbp),	%rax		#digit
	movq	%rax,	-232(%rbp)		#var_-232
	movq	-16(%rbp),	%rax		#digit
	subq	$1,	%rax		#$1
	movq	%rax,	-224(%rbp)
	movq	$-16,	-240(%rbp)		#var_-240
	movq	%rbp,	%rax		#%rbp
	addq	-240(%rbp),	%rax		#var_-240
	movq	%rax,	-240(%rbp)
	movq	-240(%rbp),	%rax		#var_-240
	movq	-224(%rbp),	%rbx		#var_-224
	movq	%rbx,	(%rax)
	movq	$48,	-248(%rbp)		#var_-248
	movq	-248(%rbp),	%rax		#var_-248
	addq	-16(%rbp),	%rax		#digit
	movq	%rax,	-256(%rbp)
	movq	-256(%rbp),	%rdi
	call	putchar
	movq	-16(%rbp),	%rax		#digit
	imulq	-40(%rbp),	%rax		#pow
	movq	%rax,	-264(%rbp)
	movq	-8(%rbp),	%rax		#n
	subq	-264(%rbp),	%rax		#var_-264
	movq	%rax,	-272(%rbp)
	movq	$-8,	-280(%rbp)		#var_-280
	movq	%rbp,	%rax		#%rbp
	addq	-280(%rbp),	%rax		#var_-280
	movq	%rax,	-280(%rbp)
	movq	-280(%rbp),	%rax		#var_-280
	movq	-272(%rbp),	%rbx		#var_-272
	movq	%rbx,	(%rax)
	movq	$10,	-288(%rbp)		#var_-288
	movq	-40(%rbp),	%rax		#pow
	cqto
	idivq	-288(%rbp)		#var_-288
	movq	%rax,	-296(%rbp)
	movq	$-40,	-304(%rbp)		#var_-304
	movq	%rbp,	%rax		#%rbp
	addq	-304(%rbp),	%rax		#var_-304
	movq	%rax,	-304(%rbp)
	movq	-304(%rbp),	%rax		#var_-304
	movq	-296(%rbp),	%rbx		#var_-296
	movq	%rbx,	(%rax)
	jmp	.Lputintbb_6
.Lputintbb_8:
	movq	$10,	-312(%rbp)		#var_-312
	movq	-312(%rbp),	%rdi
	call	putchar
	jmp	.Lputintendputint
.Lputintendputint:
	movq	%rbp, %rsp
	popq	%rbp
	ret
