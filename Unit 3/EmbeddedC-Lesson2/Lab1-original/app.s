
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <Uart_Send_string>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261654c 	rsbvc	r6, r1, #76, 10	; 0x13000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	593a6874 	ldmdbpl	sl!, {r2, r4, r5, r6, fp, sp, lr}
  10:	696e756f 	stmdbvs	lr!, {r0, r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}^
  14:	61542073 	cmpvs	r4, r3, ror r0
  18:	2072656d 	rsbscs	r6, r2, sp, ror #10
  1c:	6e736f48 	cdpvs	15, 7, cr6, cr3, cr8, {2}
  20:	00000079 	andeq	r0, r0, r9, ror r0
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	7261654c 	rsbvc	r6, r1, #76, 10	; 0x13000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   c:	593a6874 	ldmdbpl	sl!, {r2, r4, r5, r6, fp, sp, lr}
  10:	696e756f 	stmdbvs	lr!, {r0, r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}^
  14:	61542073 	cmpvs	r4, r3, ror r0
  18:	2072656d 	rsbscs	r6, r2, sp, ror #10
  1c:	6e736f48 	cdpvs	15, 7, cr6, cr3, cr8, {2}
  20:	00000079 	andeq	r0, r0, r9, ror r0
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	0000007f 	andeq	r0, r0, pc, ror r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000072 	andeq	r0, r0, r2, ror r0
  10:	00008701 	andeq	r8, r0, r1, lsl #14
  14:	00001d00 	andeq	r1, r0, r0, lsl #26
  18:	00000000 	andeq	r0, r0, r0
  1c:	00001800 	andeq	r1, r0, r0, lsl #16
  20:	00000000 	andeq	r0, r0, r0
  24:	9b010200 	blls	40808 <main+0x40808>
  28:	01000000 	mrseq	r0, (UNDEF: 0)
  2c:	00000105 	andeq	r0, r0, r5, lsl #2
  30:	00180000 	andseq	r0, r8, r0
  34:	00000000 	andeq	r0, r0, r0
  38:	03010000 	movweq	r0, #4096	; 0x1000
  3c:	00000052 	andeq	r0, r0, r2, asr r0
  40:	0000004b 	andeq	r0, r0, fp, asr #32
  44:	00004b04 	andeq	r4, r0, r4, lsl #22
  48:	05006300 	streq	r6, [r0, #-768]	; 0x300
  4c:	007e0704 	rsbseq	r0, lr, r4, lsl #14
  50:	01050000 	mrseq	r0, (UNDEF: 5)
  54:	00000f08 	andeq	r0, r0, r8, lsl #30
  58:	008d0600 	addeq	r0, sp, r0, lsl #12
  5c:	02010000 	andeq	r0, r1, #0
  60:	0000003b 	andeq	r0, r0, fp, lsr r0
  64:	00030501 	andeq	r0, r3, r1, lsl #10
  68:	06000000 	streq	r0, [r0], -r0
  6c:	00000000 	andeq	r0, r0, r0
  70:	007d0301 	rsbseq	r0, sp, r1, lsl #6
  74:	05010000 	streq	r0, [r1, #-0]
  78:	00000003 	andeq	r0, r0, r3
  7c:	003b0700 	eorseq	r0, fp, r0, lsl #14
  80:	Address 0x00000080 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; ffffff64 <main+0xffffff64>
  18:	0b3a0e03 	bleq	e8382c <main+0xe8382c>
  1c:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  20:	01120111 	tsteq	r2, r1, lsl r1
  24:	42960640 	addsmi	r0, r6, #64, 12	; 0x4000000
  28:	0300000c 	movweq	r0, #12
  2c:	13490101 	movtne	r0, #37121	; 0x9101
  30:	00001301 	andeq	r1, r0, r1, lsl #6
  34:	49002104 	stmdbmi	r0, {r2, r8, sp}
  38:	000b2f13 	andeq	r2, fp, r3, lsl pc
  3c:	00240500 	eoreq	r0, r4, r0, lsl #10
  40:	0b3e0b0b 	bleq	f82c74 <main+0xf82c74>
  44:	00000e03 	andeq	r0, r0, r3, lsl #28
  48:	03003406 	movweq	r3, #1030	; 0x406
  4c:	3b0b3a0e 	blcc	2ce88c <main+0x2ce88c>
  50:	3f13490b 	svccc	0x0013490b
  54:	000a020c 	andeq	r0, sl, ip, lsl #4
  58:	00260700 	eoreq	r0, r6, r0, lsl #14
  5c:	00001349 	andeq	r1, r0, r9, asr #6
	...

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000031 	andeq	r0, r0, r1, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0, #-0]
  28:	00000002 	andeq	r0, r0, r2
  2c:	4b4b1700 	blmi	12c5c34 <main+0x12c5c34>
  30:	01000402 	tsteq	r0, r2, lsl #8
  34:	Address 0x00000034 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69727473 	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
   4:	625f676e 	subsvs	r6, pc, #28835840	; 0x1b80000
   8:	65666675 	strbvs	r6, [r6, #-1653]!	; 0x675
   c:	75003272 	strvc	r3, [r0, #-626]	; 0x272
  10:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
  14:	2064656e 	rsbcs	r6, r4, lr, ror #10
  18:	72616863 	rsbvc	r6, r1, #6488064	; 0x630000
  1c:	5c3a4300 	ldcpl	3, cr4, [sl], #-0
  20:	72657355 	rsbvc	r7, r5, #1409286145	; 0x54000001
  24:	6f595c73 	svcvs	0x00595c73
  28:	73696e75 	cmnvc	r9, #1872	; 0x750
  2c:	7365445c 	cmnvc	r5, #92, 8	; 0x5c000000
  30:	706f746b 	rsbvc	r7, pc, fp, ror #8
  34:	626d455c 	rsbvs	r4, sp, #92, 10	; 0x17000000
  38:	65646465 	strbvs	r6, [r4, #-1125]!	; 0x465
  3c:	69642d64 	stmdbvs	r4!, {r2, r5, r6, r8, sl, fp, sp}^
  40:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; fffffe88 <main+0xfffffe88>
  44:	726f2d61 	rsbvc	r2, pc, #6208	; 0x1840
  48:	555c6769 	ldrbpl	r6, [ip, #-1897]	; 0x769
  4c:	2074696e 	rsbscs	r6, r4, lr, ror #18
  50:	6d455c33 	stclvs	12, cr5, [r5, #-204]	; 0xffffff34
  54:	64646562 	strbtvs	r6, [r4], #-1378	; 0x562
  58:	2d436465 	cfstrdcs	mvd6, [r3, #-404]	; 0xfffffe6c
  5c:	7373654c 	cmnvc	r3, #76, 10	; 0x13000000
  60:	5c326e6f 	ldcpl	14, cr6, [r2], #-444	; 0xfffffe44
  64:	3162614c 	cmncc	r2, ip, asr #2
  68:	69726f2d 	ldmdbvs	r2!, {r0, r2, r3, r5, r8, r9, sl, fp, sp, lr}^
  6c:	616e6967 	cmnvs	lr, r7, ror #18
  70:	4e47006c 	cdpmi	0, 4, cr0, cr7, cr12, {3}
  74:	20432055 	subcs	r2, r3, r5, asr r0
  78:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  7c:	69730032 	ldmdbvs	r3!, {r1, r4, r5}^
  80:	7974657a 	ldmdbvc	r4!, {r1, r3, r4, r5, r6, r8, sl, sp, lr}^
  84:	61006570 	tstvs	r0, r0, ror r5
  88:	632e7070 	teqvs	lr, #112	; 0x70
  8c:	72747300 	rsbsvc	r7, r4, #0, 6
  90:	5f676e69 	svcpl	0x00676e69
  94:	66667562 	strbtvs	r7, [r6], -r2, ror #10
  98:	6d007265 	sfmvs	f7, 4, [r0, #-404]	; 0xfffffe6c
  9c:	006e6961 	rsbeq	r6, lr, r1, ror #18

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	8b080e42 	blhi	203930 <main+0x203930>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
