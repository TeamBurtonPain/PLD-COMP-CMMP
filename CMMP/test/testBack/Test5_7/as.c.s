	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$200, %rsp
.Lmainbb_0:
	movq	$1,	-16(%rbp)		#var_-16
	movq	$-8,	-24(%rbp)		#var_-24
	movq	%rbp,	%rax		#%rbp
	addq	-24(%rbp),	%rax		#var_-24
	movq	%rax,	-24(%rbp)
	movq	-24(%rbp),	%rax		#var_-24
	movq	-16(%rbp),	%rbx		#var_-16
	movq	%rbx,	(%rax)
	movq	$1,	-48(%rbp)		#var_-48
	movq	$-40,	-56(%rbp)		#var_-56
	movq	%rbp,	%rax		#%rbp
	addq	-56(%rbp),	%rax		#var_-56
	movq	%rax,	-56(%rbp)
	movq	-56(%rbp),	%rax		#var_-56
	movq	-48(%rbp),	%rbx		#var_-48
	movq	%rbx,	(%rax)
	movq	$2,	-72(%rbp)		#var_-72
	movq	$-64,	-80(%rbp)		#var_-80
	movq	%rbp,	%rax		#%rbp
	addq	-80(%rbp),	%rax		#var_-80
	movq	%rax,	-80(%rbp)
	movq	-80(%rbp),	%rax		#var_-80
	movq	-72(%rbp),	%rbx		#var_-72
	movq	%rbx,	(%rax)
	movq	$11,	-88(%rbp)		#var_-88
	movq	$-32,	-96(%rbp)		#var_-96
	movq	%rbp,	%rax		#%rbp
	addq	-96(%rbp),	%rax		#var_-96
	movq	%rax,	-96(%rbp)
	movq	-96(%rbp),	%rax		#var_-96
	movq	-88(%rbp),	%rbx		#var_-88
	movq	%rbx,	(%rax)
	movq	$2,	-104(%rbp)		#var_-104
	movq	-32(%rbp),	%rax		#n_wanted
	cmpq	-104(%rbp),	%rax		#var_-104
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-112(%rbp)
	cmpq	$0,	-112(%rbp)
	jz	.Lmainbb_3
	jmp	.Lmainbb_1
.Lmainbb_1:
	movq	$111,	-120(%rbp)		#var_-120
	movq	-120(%rbp),	%rdi
	call	putchar
	jmp	.Lmainbb_2
.Lmainbb_3:
	jmp	.Lmainbb_4
.Lmainbb_4:
	movq	-64(%rbp),	%rax		#i
	cmpq	-32(%rbp),	%rax		#n_wanted
	setl	%al
	movzbq	%al,	%rax
	movq	%rax,	-128(%rbp)
	cmpq	$0,	-128(%rbp)
	jz	.Lmainbb_6
	jmp	.Lmainbb_5
.Lmainbb_5:
	movq	-40(%rbp),	%rax		#a
	addq	-8(%rbp),	%rax		#b
	movq	%rax,	-136(%rbp)
	movq	$-8,	-144(%rbp)		#var_-144
	movq	%rbp,	%rax		#%rbp
	addq	-144(%rbp),	%rax		#var_-144
	movq	%rax,	-144(%rbp)
	movq	-144(%rbp),	%rax		#var_-144
	movq	-136(%rbp),	%rbx		#var_-136
	movq	%rbx,	(%rax)
	movq	-8(%rbp),	%rax		#b
	subq	-40(%rbp),	%rax		#a
	movq	%rax,	-152(%rbp)
	movq	$-40,	-160(%rbp)		#var_-160
	movq	%rbp,	%rax		#%rbp
	addq	-160(%rbp),	%rax		#var_-160
	movq	%rax,	-160(%rbp)
	movq	-160(%rbp),	%rax		#var_-160
	movq	-152(%rbp),	%rbx		#var_-152
	movq	%rbx,	(%rax)
	movq	$1,	-168(%rbp)		#var_-168
	movq	-64(%rbp),	%rax		#i
	addq	-168(%rbp),	%rax		#var_-168
	movq	%rax,	-176(%rbp)
	movq	$-64,	-184(%rbp)		#var_-184
	movq	%rbp,	%rax		#%rbp
	addq	-184(%rbp),	%rax		#var_-184
	movq	%rax,	-184(%rbp)
	movq	-184(%rbp),	%rax		#var_-184
	movq	-176(%rbp),	%rbx		#var_-176
	movq	%rbx,	(%rax)
	jmp	.Lmainbb_4
.Lmainbb_6:
	movq	-8(%rbp),	%rdi
	call	putwchar
	jmp	.Lmainbb_2
.Lmainbb_2:
	movq	$10,	-192(%rbp)		#var_-192
	movq	-192(%rbp),	%rdi
	call	putchar
	jmp	.Lmainendmain
.Lmainendmain:
	movq	%rbp, %rsp
	popq	%rbp
	ret
