	.file	"t.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	$5, -48(%rbp)
	movq	$2, -40(%rbp)
	movq	-48(%rbp), %rax
	cqto
	idivq	-40(%rbp)
	movq	%rax, -32(%rbp)
	movq	-48(%rbp), %rax
	imulq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	cqto
	idivq	-40(%rbp)
	movq	%rdx, -16(%rbp)
	movq	-40(%rbp), %rax
	cqto
	idivq	-40(%rbp)
	movq	%rdx, -8(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
