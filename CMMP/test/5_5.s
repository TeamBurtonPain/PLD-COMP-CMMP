	.file	"5_5.c"
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
	movb	$57, -3(%rbp)
	movzbl	-3(%rbp), %eax
	addl	$1, %eax
	movb	%al, -2(%rbp)
	movzbl	-2(%rbp), %edx
	movzbl	-3(%rbp), %eax
	addl	%edx, %eax
	addl	$1, %eax
	movb	%al, -1(%rbp)
	movsbl	-3(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	movsbl	-1(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	movl	$10, %edi
	call	putchar
	movsbl	-2(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	cmpb	$57, -3(%rbp)
	jne	.L2
	movsbl	-3(%rbp), %eax
	movl	%eax, %edi
	call	putchar
	jmp	.L4
.L2:
	movl	$10, %edi
	call	putchar
.L4:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.9) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
