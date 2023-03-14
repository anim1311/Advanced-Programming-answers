	.file	"Main.c"
	.text
	.globl	volumeOfShpere
	.def	volumeOfShpere;	.scl	2;	.type	32;	.endef
	.seh_proc	volumeOfShpere
volumeOfShpere:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movss	%xmm0, 16(%rbp)
	cvtss2sd	16(%rbp), %xmm1
	movsd	.LC0(%rip), %xmm0
	mulsd	%xmm0, %xmm1
	cvtss2sd	16(%rbp), %xmm0
	mulsd	%xmm0, %xmm1
	cvtss2sd	16(%rbp), %xmm0
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.globl	volumeOfShpere2
	.def	volumeOfShpere2;	.scl	2;	.type	32;	.endef
	.seh_proc	volumeOfShpere2
volumeOfShpere2:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movss	%xmm0, 16(%rbp)
	cvtss2sd	16(%rbp), %xmm1
	movsd	.LC1(%rip), %xmm0
	mulsd	%xmm0, %xmm1
	cvtss2sd	16(%rbp), %xmm0
	mulsd	%xmm0, %xmm1
	cvtss2sd	16(%rbp), %xmm0
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC8:
	.ascii "\12\12\11Balance remaining after first payment: $%0.2f\12\0"
	.align 8
.LC9:
	.ascii "\11Balance remaining after second payment: $%0.2f\12\0"
	.align 8
.LC10:
	.ascii "\11Balance remaining after third payment: $%0.2f\12\12\0"
	.text
	.globl	loan
	.def	loan;	.scl	2;	.type	32;	.endef
	.seh_proc	loan
loan:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movss	.LC2(%rip), %xmm0
	movss	%xmm0, -4(%rbp)
	movss	.LC3(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movss	.LC4(%rip), %xmm0
	movss	%xmm0, -12(%rbp)
	pxor	%xmm0, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-8(%rbp), %xmm0
	movss	.LC6(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	.LC7(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-4(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	subss	-12(%rbp), %xmm1
	movss	-4(%rbp), %xmm0
	mulss	-16(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	cvtss2sd	-4(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC8(%rip), %rcx
	call	printf
	movss	-4(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	subss	-12(%rbp), %xmm1
	movss	-4(%rbp), %xmm0
	mulss	-16(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	cvtss2sd	-4(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC9(%rip), %rcx
	call	printf
	movss	-4(%rbp), %xmm0
	movaps	%xmm0, %xmm1
	subss	-12(%rbp), %xmm1
	movss	-4(%rbp), %xmm0
	mulss	-16(%rbp), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	cvtss2sd	-4(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC10(%rip), %rcx
	call	printf
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC12:
	.ascii "%f\12\0"
.LC13:
	.ascii "%lf\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	loan
	movq	.LC11(%rip), %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC12(%rip), %rcx
	call	printf
	movq	.LC11(%rip), %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC13(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	1083055233
	.long	1074839890
	.align 8
.LC1:
	.long	1413754136
	.long	1074340347
	.align 4
.LC2:
	.long	1184645120
	.align 4
.LC3:
	.long	1086324736
	.align 4
.LC4:
	.long	1136743547
	.align 4
.LC6:
	.long	1120403456
	.align 4
.LC7:
	.long	1094713344
	.align 8
.LC11:
	.long	0
	.long	1074790400
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
