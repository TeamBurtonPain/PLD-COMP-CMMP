	.file	"5_15.c"
	.text
	.globl	f
	.type	f, @function
f:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	%ecx, -16(%rbp)
	movl	%r8d, -20(%rbp)
	movl	%r9d, -24(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	-16(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	-24(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	16(%rbp), %edi
	movl	$0, %eax
	call	putint
	movl	24(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	movl	32(%rbp), %eax
	movl	%eax, %edi
	movl	$0, %eax
	call	putint
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	f, .-f
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
	subq	$8, %rsp
	pushq	$9
	pushq	$8
	pushq	$7
	movl	$6, %r9d
	movl	$5, %r8d
	movl	$4, %ecx
	movl	$3, %edx
	movl	$2, %esi
	movl	$1, %edi
	call	f
	addq	$32, %rsp
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
