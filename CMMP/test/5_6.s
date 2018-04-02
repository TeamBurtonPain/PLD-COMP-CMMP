	.file	"5_6.c"
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
	subq	$16, %rsp
	movq	$1, -16(%rbp)
	movq	$2, -8(%rbp)
	movq	-16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jge	.L2
	movl	$86, %edi
	call	putchar
	jmp	.L3
.L2:
	movl	$70, %edi
	call	putchar
.L3:
	movl	$10, %edi
	call	putchar
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
