	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144, %rsp
.Lmainbb_0:
	movq	$0,	-32(%rbp)		#var_-32
	movq	-8(%rbp),	%rax		#b
	movq	-32(%rbp),	%rbx		#b
	movq	%rbx,	(%rax)
	movq	$1,	-40(%rbp)		#var_-40
	movq	-16(%rbp),	%rax		#c
	movq	-40(%rbp),	%rbx		#c
	movq	%rbx,	(%rax)
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lmainbb_3
	jmp	.Lmainbb_1
.Lmainbb_1:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-48(%rbp)
	cmpq	$0,	-48(%rbp)
	jz	.Lmainbb_3
	jmp	.Lmainbb_2
.Lmainbb_2:
	movq	$0,	-48(%rbp)		#var_-48
	jmp	.Lmainbb_4
.Lmainbb_3:
	movq	$1,	-48(%rbp)		#var_-48
	jmp	.Lmainbb_4
.Lmainbb_4:
	movq	-24(%rbp),	%rax		#a
	movq	-48(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-56(%rbp)
	cmpq	$0,	-56(%rbp)
	jz	.Lmainbb_5
	jmp	.Lmainbb_6
.Lmainbb_5:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-56(%rbp)
	cmpq	$0,	-56(%rbp)
	jz	.Lmainbb_7
	jmp	.Lmainbb_6
.Lmainbb_6:
	movq	$0,	-56(%rbp)		#var_-56
	jmp	.Lmainbb_8
.Lmainbb_7:
	movq	$1,	-56(%rbp)		#var_-56
	jmp	.Lmainbb_8
.Lmainbb_8:
	movq	-24(%rbp),	%rax		#a
	movq	-56(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	-64(%rbp)		#var_-64
	movq	-16(%rbp),	%rax		#c
	movq	-64(%rbp),	%rbx		#c
	movq	%rbx,	(%rax)
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lmainbb_11
	jmp	.Lmainbb_9
.Lmainbb_9:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-72(%rbp)
	cmpq	$0,	-72(%rbp)
	jz	.Lmainbb_11
	jmp	.Lmainbb_10
.Lmainbb_10:
	movq	$0,	-72(%rbp)		#var_-72
	jmp	.Lmainbb_12
.Lmainbb_11:
	movq	$1,	-72(%rbp)		#var_-72
	jmp	.Lmainbb_12
.Lmainbb_12:
	movq	-24(%rbp),	%rax		#a
	movq	-72(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-80(%rbp)
	cmpq	$0,	-80(%rbp)
	jz	.Lmainbb_13
	jmp	.Lmainbb_14
.Lmainbb_13:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-80(%rbp)
	cmpq	$0,	-80(%rbp)
	jz	.Lmainbb_15
	jmp	.Lmainbb_14
.Lmainbb_14:
	movq	$0,	-80(%rbp)		#var_-80
	jmp	.Lmainbb_16
.Lmainbb_15:
	movq	$1,	-80(%rbp)		#var_-80
	jmp	.Lmainbb_16
.Lmainbb_16:
	movq	-24(%rbp),	%rax		#a
	movq	-80(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$1,	-88(%rbp)		#var_-88
	movq	-16(%rbp),	%rax		#c
	movq	-88(%rbp),	%rbx		#c
	movq	%rbx,	(%rax)
	movq	$1,	-96(%rbp)		#var_-96
	movq	-8(%rbp),	%rax		#b
	movq	-96(%rbp),	%rbx		#b
	movq	%rbx,	(%rax)
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-104(%rbp)
	cmpq	$0,	-104(%rbp)
	jz	.Lmainbb_19
	jmp	.Lmainbb_17
.Lmainbb_17:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-104(%rbp)
	cmpq	$0,	-104(%rbp)
	jz	.Lmainbb_19
	jmp	.Lmainbb_18
.Lmainbb_18:
	movq	$0,	-104(%rbp)		#var_-104
	jmp	.Lmainbb_20
.Lmainbb_19:
	movq	$1,	-104(%rbp)		#var_-104
	jmp	.Lmainbb_20
.Lmainbb_20:
	movq	-24(%rbp),	%rax		#a
	movq	-104(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-112(%rbp)
	cmpq	$0,	-112(%rbp)
	jz	.Lmainbb_21
	jmp	.Lmainbb_22
.Lmainbb_21:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-112(%rbp)
	cmpq	$0,	-112(%rbp)
	jz	.Lmainbb_23
	jmp	.Lmainbb_22
.Lmainbb_22:
	movq	$0,	-112(%rbp)		#var_-112
	jmp	.Lmainbb_24
.Lmainbb_23:
	movq	$1,	-112(%rbp)		#var_-112
	jmp	.Lmainbb_24
.Lmainbb_24:
	movq	-24(%rbp),	%rax		#a
	movq	-112(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	-120(%rbp)		#var_-120
	movq	-8(%rbp),	%rax		#b
	movq	-120(%rbp),	%rbx		#b
	movq	%rbx,	(%rax)
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-128(%rbp)
	cmpq	$0,	-128(%rbp)
	jz	.Lmainbb_27
	jmp	.Lmainbb_25
.Lmainbb_25:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-128(%rbp)
	cmpq	$0,	-128(%rbp)
	jz	.Lmainbb_27
	jmp	.Lmainbb_26
.Lmainbb_26:
	movq	$0,	-128(%rbp)		#var_-128
	jmp	.Lmainbb_28
.Lmainbb_27:
	movq	$1,	-128(%rbp)		#var_-128
	jmp	.Lmainbb_28
.Lmainbb_28:
	movq	-24(%rbp),	%rax		#a
	movq	-128(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
	call	putint
	movq	$0,	%rax		#$0
	cmpq	-8(%rbp),	%rax		#b
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-136(%rbp)
	cmpq	$0,	-136(%rbp)
	jz	.Lmainbb_29
	jmp	.Lmainbb_30
.Lmainbb_29:
	movq	$0,	%rax		#$0
	cmpq	-16(%rbp),	%rax		#c
	sete	%al
	movzbq	%al,	%rax
	movq	%rax,	-136(%rbp)
	cmpq	$0,	-136(%rbp)
	jz	.Lmainbb_31
	jmp	.Lmainbb_30
.Lmainbb_30:
	movq	$0,	-136(%rbp)		#var_-136
	jmp	.Lmainbb_32
.Lmainbb_31:
	movq	$1,	-136(%rbp)		#var_-136
	jmp	.Lmainbb_32
.Lmainbb_32:
	movq	-24(%rbp),	%rax		#a
	movq	-136(%rbp),	%rbx		#a
	movq	%rbx,	(%rax)
	movq	-24(%rbp),	%rdi
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
