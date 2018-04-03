	.file	"5_8_4.c"
	.text
	.globl	putint
	.type	putint, @function
putint:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	movl	$48, %edi
	call	putchar
.L2:
	movq	$1, -8(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L3
.L4:
	movq	-8(%rbp), %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, -8(%rbp)
.L3:
	movq	-8(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jle	.L4
	movq	-8(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -8(%rbp)
	jmp	.L5
.L8:
	movl	$1, -12(%rbp)
	jmp	.L6
.L7:
	addl	$1, -12(%rbp)
.L6:
	movl	-12(%rbp), %eax
	cltq
	imulq	-8(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jle	.L7
	subl	$1, -12(%rbp)
	movl	-12(%rbp), %eax
	addl	$48, %eax
	movl	%eax, %edi
	call	putchar
	movl	-12(%rbp), %eax
	cltq
	imulq	-8(%rbp), %rax
	subq	%rax, -24(%rbp)
	movq	-8(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -8(%rbp)
.L5:
	cmpq	$0, -8(%rbp)
	jne	.L8
	movl	$10, %edi
	call	putchar
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	putint, .-putint
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$90, %edi
	call	putchar
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
