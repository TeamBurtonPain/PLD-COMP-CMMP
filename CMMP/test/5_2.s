	.file	"5_2.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	pushq	%rbp

	movq	%rsp, %rbp
	movl	$111, %edi
	call	putchar
	movl	$107, %edi
	call	putchar
	movl	$32, %edi
	call	putchar
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
