	.file	"ms_2010_1.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	": "
.LC1:
	.string	" times"
	.text
.globl main
	.type	main, @function
main:
.LFB957:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%edi
	pushl	%ebx
	subl	$248, %esp
	movl	$1835081833, 120(%esp)
	movl	$1746952480, 124(%esp)
	movl	$1701536609, 128(%esp)
	movl	$114, 132(%esp)
	leal	136(%esp), %ebx
	.cfi_escape 0x10,0x3,0x7,0x75,0x0,0x9,0xf0,0x1a,0x38,0x1c
	.cfi_escape 0x10,0x7,0x7,0x75,0x0,0x9,0xf0,0x1a,0x34,0x1c
	movl	$0, %eax
	movl	$21, %edx
	movl	%ebx, %edi
	movl	%edx, %ecx
	rep stosl
	leal	16(%esp), %ebx
	movl	$0, %eax
	movl	$26, %edx
	movl	%ebx, %edi
	movl	%edx, %ecx
	rep stosl
	movl	$0, 220(%esp)
	leal	120(%esp), %eax
	movl	%eax, (%esp)
	call	strlen
	movl	%eax, 224(%esp)
	movl	$0, 232(%esp)
	jmp	.L2
.L7:
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$96, %al
	jle	.L3
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$122, %al
	jle	.L4
.L3:
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$64, %al
	jle	.L5
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$90, %al
	jg	.L5
.L4:
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$64, %al
	jle	.L6
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	cmpb	$90, %al
	jg	.L6
	movl	232(%esp), %eax
	movl	232(%esp), %edx
	movzbl	120(%esp,%edx), %edx
	addl	$32, %edx
	movb	%dl, 120(%esp,%eax)
.L6:
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %edx
	movl	$79, %ecx
	movl	%edx, %eax
	imulb	%cl
	shrw	$8, %ax
	movl	%eax, %ecx
	sarb	$3, %cl
	movl	%edx, %eax
	sarb	$7, %al
	movl	%ecx, %ebx
	subb	%al, %bl
	movl	%ebx, %eax
	movl	$26, %ecx
	imull	%ecx, %eax
	movl	%edx, %ecx
	subb	%al, %cl
	movl	%ecx, %eax
	movsbl	%al, %eax
	movl	%eax, 236(%esp)
	movl	236(%esp), %eax
	movl	16(%esp,%eax,4), %edx
	addl	$1, %edx
	movl	%edx, 16(%esp,%eax,4)
	movl	236(%esp), %eax
	movl	16(%esp,%eax,4), %eax
	cmpl	220(%esp), %eax
	jle	.L5
	movl	236(%esp), %eax
	movl	16(%esp,%eax,4), %eax
	movl	%eax, 220(%esp)
	movl	232(%esp), %eax
	movzbl	120(%esp,%eax), %eax
	movb	%al, 231(%esp)
.L5:
	addl	$1, 232(%esp)
.L2:
	movl	232(%esp), %eax
	cmpl	224(%esp), %eax
	setl	%al
	testb	%al, %al
	jne	.L7
	movsbl	231(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	220(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEi
	movl	$.LC1, 4(%esp)
	movl	%eax, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	movl	$0, %eax
	addl	$248, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%edi
	.cfi_restore 7
	movl	%ebp, %esp
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
.LFE957:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB967:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	.L11
	cmpl	$65535, 12(%ebp)
	jne	.L11
	movl	$_ZStL8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$_ZNSt8ios_base4InitD1Ev, %eax
	movl	$__dso_handle, 8(%esp)
	movl	$_ZStL8__ioinit, 4(%esp)
	movl	%eax, (%esp)
	call	__cxa_atexit
.L11:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE967:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__I_main, @function
_GLOBAL__I_main:
.LFB968:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE968:
	.size	_GLOBAL__I_main, .-_GLOBAL__I_main
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__I_main
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.ident	"GCC: (GNU) 4.4.6 20120305 (Red Hat 4.4.6-4)"
	.section	.note.GNU-stack,"",@progbits
