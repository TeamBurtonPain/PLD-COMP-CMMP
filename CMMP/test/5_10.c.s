	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$336, %rsp
.Lmainbb_0:
	movq	$2,	-40(%rbp)		#var_-40
	movq	$1,	-48(%rbp)		#var_-48
	movq	$1,	-56(%rbp)		#var_-56
	movq	$8,	%rax		#$8
	imulq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	%rbp,	%rax		#%rbp
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax		#var_-56
	movq	-40(%rbp),	%rbx		#var_-40
	movq	%rbx,	(%rax)
	movq	$1,	-80(%rbp)		#var_-80
	movq	$1,	-88(%rbp)		#var_-88
	movq	$8,	%rax		#$8
	imulq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-88(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-88(%rbp)
	movq	-88(%rbp),	%rax		#var_-88
	movq	%rax,	-96(%rbp)		#var_-96
	movq	%rbp,	%rax		#%rbp
	addq	-96(%rbp),	%rax		#var_-96
	movq	%rax,	-96(%rbp)
	movq	-96(%rbp),	%rbx		#var_-96
	movq	(%rbx),	%rax
	movq	%rax,	-104(%rbp)		#var_-104
	movq	-104(%rbp),	%rdi
	call	putint
	movq	$8,	-112(%rbp)		#var_-112
	movq	$-8,	-120(%rbp)		#var_-120
	movq	%rbp,	%rax		#%rbp
	addq	-120(%rbp),	%rax		#var_-120
	movq	%rax,	-120(%rbp)
	movq	-120(%rbp),	%rax		#var_-120
	movq	-112(%rbp),	%rbx		#var_-112
	movq	%rbx,	(%rax)
	movq	-8(%rbp),	%rdi
	call	putint
	movq	$1,	-128(%rbp)		#var_-128
	movq	$1,	-136(%rbp)		#var_-136
	movq	$8,	%rax		#$8
	imulq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-136(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-136(%rbp)
	movq	-136(%rbp),	%rax		#var_-136
	movq	%rax,	-144(%rbp)		#var_-144
	movq	%rbp,	%rax		#%rbp
	addq	-144(%rbp),	%rax		#var_-144
	movq	%rax,	-144(%rbp)
	movq	-144(%rbp),	%rbx		#var_-144
	movq	(%rbx),	%rax
	movq	%rax,	-152(%rbp)		#var_-152
	movq	-152(%rbp),	%rdi
	call	putint
	movq	$1,	-160(%rbp)		#var_-160
	movq	$2,	-168(%rbp)		#var_-168
	movq	$2,	-176(%rbp)		#var_-176
	movq	$8,	%rax		#$8
	imulq	-176(%rbp),	%rax		#var_-176
	movq	%rax,	-176(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-176(%rbp),	%rax		#var_-176
	movq	%rax,	-176(%rbp)
	movq	%rbp,	%rax		#%rbp
	addq	-176(%rbp),	%rax		#var_-176
	movq	%rax,	-176(%rbp)
	movq	-176(%rbp),	%rax		#var_-176
	movq	-160(%rbp),	%rbx		#var_-160
	movq	%rbx,	(%rax)
	movq	$3,	-200(%rbp)		#var_-200
	movq	$0,	-208(%rbp)		#var_-208
	movq	$0,	-216(%rbp)		#var_-216
	movq	$8,	%rax		#$8
	imulq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-216(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-216(%rbp)
	movq	%rbp,	%rax		#%rbp
	addq	-216(%rbp),	%rax		#var_-216
	movq	%rax,	-216(%rbp)
	movq	-216(%rbp),	%rax		#var_-216
	movq	-200(%rbp),	%rbx		#var_-200
	movq	%rbx,	(%rax)
	movq	$0,	-240(%rbp)		#var_-240
	movq	$0,	-248(%rbp)		#var_-248
	movq	$8,	%rax		#$8
	imulq	-248(%rbp),	%rax		#var_-248
	movq	%rax,	-248(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-248(%rbp),	%rax		#var_-248
	movq	%rax,	-248(%rbp)
	movq	-248(%rbp),	%rax		#var_-248
	movq	%rax,	-256(%rbp)		#var_-256
	movq	%rbp,	%rax		#%rbp
	addq	-256(%rbp),	%rax		#var_-256
	movq	%rax,	-256(%rbp)
	movq	-256(%rbp),	%rbx		#var_-256
	movq	(%rbx),	%rax
	movq	%rax,	-264(%rbp)		#var_-264
	movq	-264(%rbp),	%rdi
	call	putint
	movq	$2,	-272(%rbp)		#var_-272
	movq	$2,	-280(%rbp)		#var_-280
	movq	$8,	%rax		#$8
	imulq	-280(%rbp),	%rax		#var_-280
	movq	%rax,	-280(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-280(%rbp),	%rax		#var_-280
	movq	%rax,	-280(%rbp)
	movq	-280(%rbp),	%rax		#var_-280
	movq	%rax,	-288(%rbp)		#var_-288
	movq	%rbp,	%rax		#%rbp
	addq	-288(%rbp),	%rax		#var_-288
	movq	%rax,	-288(%rbp)
	movq	-288(%rbp),	%rbx		#var_-288
	movq	(%rbx),	%rax
	movq	%rax,	-296(%rbp)		#var_-296
	movq	-296(%rbp),	%rdi
	call	putint
	movq	$1,	-304(%rbp)		#var_-304
	movq	$1,	-312(%rbp)		#var_-312
	movq	$8,	%rax		#$8
	imulq	-312(%rbp),	%rax		#var_-312
	movq	%rax,	-312(%rbp)
	movq	$-16,	%rax		#$-16
	subq	-312(%rbp),	%rax		#var_-312
	movq	%rax,	-312(%rbp)
	movq	-312(%rbp),	%rax		#var_-312
	movq	%rax,	-320(%rbp)		#var_-320
	movq	%rbp,	%rax		#%rbp
	addq	-320(%rbp),	%rax		#var_-320
	movq	%rax,	-320(%rbp)
	movq	-320(%rbp),	%rbx		#var_-320
	movq	(%rbx),	%rax
	movq	%rax,	-328(%rbp)		#var_-328
	movq	-328(%rbp),	%rdi
	call	putint
	jmp	.Lmainendmain
.Lmainendmain:
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
