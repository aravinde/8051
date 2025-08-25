                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module counter
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _timer1
                                     13 	.globl _timer0
                                     14 	.globl _sprintf
                                     15 	.globl _strlen
                                     16 	.globl _CY
                                     17 	.globl _AC
                                     18 	.globl _F0
                                     19 	.globl _RS1
                                     20 	.globl _RS0
                                     21 	.globl _OV
                                     22 	.globl _F1
                                     23 	.globl _P
                                     24 	.globl _PS
                                     25 	.globl _PT1
                                     26 	.globl _PX1
                                     27 	.globl _PT0
                                     28 	.globl _PX0
                                     29 	.globl _RD
                                     30 	.globl _WR
                                     31 	.globl _T1
                                     32 	.globl _T0
                                     33 	.globl _INT1
                                     34 	.globl _INT0
                                     35 	.globl _TXD
                                     36 	.globl _RXD
                                     37 	.globl _P3_7
                                     38 	.globl _P3_6
                                     39 	.globl _P3_5
                                     40 	.globl _P3_4
                                     41 	.globl _P3_3
                                     42 	.globl _P3_2
                                     43 	.globl _P3_1
                                     44 	.globl _P3_0
                                     45 	.globl _EA
                                     46 	.globl _ES
                                     47 	.globl _ET1
                                     48 	.globl _EX1
                                     49 	.globl _ET0
                                     50 	.globl _EX0
                                     51 	.globl _P2_7
                                     52 	.globl _P2_6
                                     53 	.globl _P2_5
                                     54 	.globl _P2_4
                                     55 	.globl _P2_3
                                     56 	.globl _P2_2
                                     57 	.globl _P2_1
                                     58 	.globl _P2_0
                                     59 	.globl _SM0
                                     60 	.globl _SM1
                                     61 	.globl _SM2
                                     62 	.globl _REN
                                     63 	.globl _TB8
                                     64 	.globl _RB8
                                     65 	.globl _TI
                                     66 	.globl _RI
                                     67 	.globl _P1_7
                                     68 	.globl _P1_6
                                     69 	.globl _P1_5
                                     70 	.globl _P1_4
                                     71 	.globl _P1_3
                                     72 	.globl _P1_2
                                     73 	.globl _P1_1
                                     74 	.globl _P1_0
                                     75 	.globl _TF1
                                     76 	.globl _TR1
                                     77 	.globl _TF0
                                     78 	.globl _TR0
                                     79 	.globl _IE1
                                     80 	.globl _IT1
                                     81 	.globl _IE0
                                     82 	.globl _IT0
                                     83 	.globl _P0_7
                                     84 	.globl _P0_6
                                     85 	.globl _P0_5
                                     86 	.globl _P0_4
                                     87 	.globl _P0_3
                                     88 	.globl _P0_2
                                     89 	.globl _P0_1
                                     90 	.globl _P0_0
                                     91 	.globl _B
                                     92 	.globl _ACC
                                     93 	.globl _PSW
                                     94 	.globl _IP
                                     95 	.globl _P3
                                     96 	.globl _IE
                                     97 	.globl _P2
                                     98 	.globl _SBUF
                                     99 	.globl _SCON
                                    100 	.globl _P1
                                    101 	.globl _TH1
                                    102 	.globl _TH0
                                    103 	.globl _TL1
                                    104 	.globl _TL0
                                    105 	.globl _TMOD
                                    106 	.globl _TCON
                                    107 	.globl _PCON
                                    108 	.globl _DPH
                                    109 	.globl _DPL
                                    110 	.globl _SP
                                    111 	.globl _P0
                                    112 	.globl _count
                                    113 	.globl _lcd_data
                                    114 	.globl _lcd_cmd
                                    115 	.globl _delay
                                    116 	.globl _lcd_number
                                    117 	.globl _lcdstring
                                    118 ;--------------------------------------------------------
                                    119 ; special function registers
                                    120 ;--------------------------------------------------------
                                    121 	.area RSEG    (ABS,DATA)
      000000                        122 	.org 0x0000
                           000080   123 _P0	=	0x0080
                           000081   124 _SP	=	0x0081
                           000082   125 _DPL	=	0x0082
                           000083   126 _DPH	=	0x0083
                           000087   127 _PCON	=	0x0087
                           000088   128 _TCON	=	0x0088
                           000089   129 _TMOD	=	0x0089
                           00008A   130 _TL0	=	0x008a
                           00008B   131 _TL1	=	0x008b
                           00008C   132 _TH0	=	0x008c
                           00008D   133 _TH1	=	0x008d
                           000090   134 _P1	=	0x0090
                           000098   135 _SCON	=	0x0098
                           000099   136 _SBUF	=	0x0099
                           0000A0   137 _P2	=	0x00a0
                           0000A8   138 _IE	=	0x00a8
                           0000B0   139 _P3	=	0x00b0
                           0000B8   140 _IP	=	0x00b8
                           0000D0   141 _PSW	=	0x00d0
                           0000E0   142 _ACC	=	0x00e0
                           0000F0   143 _B	=	0x00f0
                                    144 ;--------------------------------------------------------
                                    145 ; special function bits
                                    146 ;--------------------------------------------------------
                                    147 	.area RSEG    (ABS,DATA)
      000000                        148 	.org 0x0000
                           000080   149 _P0_0	=	0x0080
                           000081   150 _P0_1	=	0x0081
                           000082   151 _P0_2	=	0x0082
                           000083   152 _P0_3	=	0x0083
                           000084   153 _P0_4	=	0x0084
                           000085   154 _P0_5	=	0x0085
                           000086   155 _P0_6	=	0x0086
                           000087   156 _P0_7	=	0x0087
                           000088   157 _IT0	=	0x0088
                           000089   158 _IE0	=	0x0089
                           00008A   159 _IT1	=	0x008a
                           00008B   160 _IE1	=	0x008b
                           00008C   161 _TR0	=	0x008c
                           00008D   162 _TF0	=	0x008d
                           00008E   163 _TR1	=	0x008e
                           00008F   164 _TF1	=	0x008f
                           000090   165 _P1_0	=	0x0090
                           000091   166 _P1_1	=	0x0091
                           000092   167 _P1_2	=	0x0092
                           000093   168 _P1_3	=	0x0093
                           000094   169 _P1_4	=	0x0094
                           000095   170 _P1_5	=	0x0095
                           000096   171 _P1_6	=	0x0096
                           000097   172 _P1_7	=	0x0097
                           000098   173 _RI	=	0x0098
                           000099   174 _TI	=	0x0099
                           00009A   175 _RB8	=	0x009a
                           00009B   176 _TB8	=	0x009b
                           00009C   177 _REN	=	0x009c
                           00009D   178 _SM2	=	0x009d
                           00009E   179 _SM1	=	0x009e
                           00009F   180 _SM0	=	0x009f
                           0000A0   181 _P2_0	=	0x00a0
                           0000A1   182 _P2_1	=	0x00a1
                           0000A2   183 _P2_2	=	0x00a2
                           0000A3   184 _P2_3	=	0x00a3
                           0000A4   185 _P2_4	=	0x00a4
                           0000A5   186 _P2_5	=	0x00a5
                           0000A6   187 _P2_6	=	0x00a6
                           0000A7   188 _P2_7	=	0x00a7
                           0000A8   189 _EX0	=	0x00a8
                           0000A9   190 _ET0	=	0x00a9
                           0000AA   191 _EX1	=	0x00aa
                           0000AB   192 _ET1	=	0x00ab
                           0000AC   193 _ES	=	0x00ac
                           0000AF   194 _EA	=	0x00af
                           0000B0   195 _P3_0	=	0x00b0
                           0000B1   196 _P3_1	=	0x00b1
                           0000B2   197 _P3_2	=	0x00b2
                           0000B3   198 _P3_3	=	0x00b3
                           0000B4   199 _P3_4	=	0x00b4
                           0000B5   200 _P3_5	=	0x00b5
                           0000B6   201 _P3_6	=	0x00b6
                           0000B7   202 _P3_7	=	0x00b7
                           0000B0   203 _RXD	=	0x00b0
                           0000B1   204 _TXD	=	0x00b1
                           0000B2   205 _INT0	=	0x00b2
                           0000B3   206 _INT1	=	0x00b3
                           0000B4   207 _T0	=	0x00b4
                           0000B5   208 _T1	=	0x00b5
                           0000B6   209 _WR	=	0x00b6
                           0000B7   210 _RD	=	0x00b7
                           0000B8   211 _PX0	=	0x00b8
                           0000B9   212 _PT0	=	0x00b9
                           0000BA   213 _PX1	=	0x00ba
                           0000BB   214 _PT1	=	0x00bb
                           0000BC   215 _PS	=	0x00bc
                           0000D0   216 _P	=	0x00d0
                           0000D1   217 _F1	=	0x00d1
                           0000D2   218 _OV	=	0x00d2
                           0000D3   219 _RS0	=	0x00d3
                           0000D4   220 _RS1	=	0x00d4
                           0000D5   221 _F0	=	0x00d5
                           0000D6   222 _AC	=	0x00d6
                           0000D7   223 _CY	=	0x00d7
                                    224 ;--------------------------------------------------------
                                    225 ; overlayable register banks
                                    226 ;--------------------------------------------------------
                                    227 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        228 	.ds 8
                                    229 ;--------------------------------------------------------
                                    230 ; overlayable bit register bank
                                    231 ;--------------------------------------------------------
                                    232 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        233 bits:
      000020                        234 	.ds 1
                           008000   235 	b0 = bits[0]
                           008100   236 	b1 = bits[1]
                           008200   237 	b2 = bits[2]
                           008300   238 	b3 = bits[3]
                           008400   239 	b4 = bits[4]
                           008500   240 	b5 = bits[5]
                           008600   241 	b6 = bits[6]
                           008700   242 	b7 = bits[7]
                                    243 ;--------------------------------------------------------
                                    244 ; internal ram data
                                    245 ;--------------------------------------------------------
                                    246 	.area DSEG    (DATA)
      000008                        247 _count::
      000008                        248 	.ds 1
      000009                        249 _main_dat_65537_50:
      000009                        250 	.ds 7
      000010                        251 _lcd_number_buffer_65536_64:
      000010                        252 	.ds 10
                                    253 ;--------------------------------------------------------
                                    254 ; overlayable items in internal ram
                                    255 ;--------------------------------------------------------
                                    256 	.area	OSEG    (OVR,DATA)
                                    257 ;--------------------------------------------------------
                                    258 ; Stack segment in internal ram
                                    259 ;--------------------------------------------------------
                                    260 	.area	SSEG
      00005C                        261 __start__stack:
      00005C                        262 	.ds	1
                                    263 
                                    264 ;--------------------------------------------------------
                                    265 ; indirectly addressable internal ram data
                                    266 ;--------------------------------------------------------
                                    267 	.area ISEG    (DATA)
                                    268 ;--------------------------------------------------------
                                    269 ; absolute internal ram data
                                    270 ;--------------------------------------------------------
                                    271 	.area IABS    (ABS,DATA)
                                    272 	.area IABS    (ABS,DATA)
                                    273 ;--------------------------------------------------------
                                    274 ; bit data
                                    275 ;--------------------------------------------------------
                                    276 	.area BSEG    (BIT)
                                    277 ;--------------------------------------------------------
                                    278 ; paged external ram data
                                    279 ;--------------------------------------------------------
                                    280 	.area PSEG    (PAG,XDATA)
                                    281 ;--------------------------------------------------------
                                    282 ; external ram data
                                    283 ;--------------------------------------------------------
                                    284 	.area XSEG    (XDATA)
                                    285 ;--------------------------------------------------------
                                    286 ; absolute external ram data
                                    287 ;--------------------------------------------------------
                                    288 	.area XABS    (ABS,XDATA)
                                    289 ;--------------------------------------------------------
                                    290 ; external initialized ram data
                                    291 ;--------------------------------------------------------
                                    292 	.area XISEG   (XDATA)
                                    293 	.area HOME    (CODE)
                                    294 	.area GSINIT0 (CODE)
                                    295 	.area GSINIT1 (CODE)
                                    296 	.area GSINIT2 (CODE)
                                    297 	.area GSINIT3 (CODE)
                                    298 	.area GSINIT4 (CODE)
                                    299 	.area GSINIT5 (CODE)
                                    300 	.area GSINIT  (CODE)
                                    301 	.area GSFINAL (CODE)
                                    302 	.area CSEG    (CODE)
                                    303 ;--------------------------------------------------------
                                    304 ; interrupt vector
                                    305 ;--------------------------------------------------------
                                    306 	.area HOME    (CODE)
      000000                        307 __interrupt_vect:
      000000 02 00 21         [24]  308 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  309 	reti
      000004                        310 	.ds	7
      00000B 02 00 80         [24]  311 	ljmp	_timer0
      00000E                        312 	.ds	5
      000013 32               [24]  313 	reti
      000014                        314 	.ds	7
      00001B 02 00 CA         [24]  315 	ljmp	_timer1
                                    316 ;--------------------------------------------------------
                                    317 ; global & static initialisations
                                    318 ;--------------------------------------------------------
                                    319 	.area HOME    (CODE)
                                    320 	.area GSINIT  (CODE)
                                    321 	.area GSFINAL (CODE)
                                    322 	.area GSINIT  (CODE)
                                    323 	.globl __sdcc_gsinit_startup
                                    324 	.globl __sdcc_program_startup
                                    325 	.globl __start__stack
                                    326 	.globl __mcs51_genXINIT
                                    327 	.globl __mcs51_genXRAMCLEAR
                                    328 	.globl __mcs51_genRAMCLEAR
                                    329 ;	counter.c:10: unsigned char count=0;
      00007A 75 08 00         [24]  330 	mov	_count,#0x00
                                    331 	.area GSFINAL (CODE)
      00007D 02 00 1E         [24]  332 	ljmp	__sdcc_program_startup
                                    333 ;--------------------------------------------------------
                                    334 ; Home
                                    335 ;--------------------------------------------------------
                                    336 	.area HOME    (CODE)
                                    337 	.area HOME    (CODE)
      00001E                        338 __sdcc_program_startup:
      00001E 02 01 14         [24]  339 	ljmp	_main
                                    340 ;	return from main will return to caller
                                    341 ;--------------------------------------------------------
                                    342 ; code
                                    343 ;--------------------------------------------------------
                                    344 	.area CSEG    (CODE)
                                    345 ;------------------------------------------------------------
                                    346 ;Allocation info for local variables in function 'timer0'
                                    347 ;------------------------------------------------------------
                                    348 ;	counter.c:16: void timer0()__interrupt(1){
                                    349 ;	-----------------------------------------
                                    350 ;	 function timer0
                                    351 ;	-----------------------------------------
      000080                        352 _timer0:
                           000007   353 	ar7 = 0x07
                           000006   354 	ar6 = 0x06
                           000005   355 	ar5 = 0x05
                           000004   356 	ar4 = 0x04
                           000003   357 	ar3 = 0x03
                           000002   358 	ar2 = 0x02
                           000001   359 	ar1 = 0x01
                           000000   360 	ar0 = 0x00
      000080 C0 20            [24]  361 	push	bits
      000082 C0 E0            [24]  362 	push	acc
      000084 C0 F0            [24]  363 	push	b
      000086 C0 82            [24]  364 	push	dpl
      000088 C0 83            [24]  365 	push	dph
      00008A C0 07            [24]  366 	push	(0+7)
      00008C C0 06            [24]  367 	push	(0+6)
      00008E C0 05            [24]  368 	push	(0+5)
      000090 C0 04            [24]  369 	push	(0+4)
      000092 C0 03            [24]  370 	push	(0+3)
      000094 C0 02            [24]  371 	push	(0+2)
      000096 C0 01            [24]  372 	push	(0+1)
      000098 C0 00            [24]  373 	push	(0+0)
      00009A C0 D0            [24]  374 	push	psw
      00009C 75 D0 00         [24]  375 	mov	psw,#0x00
                                    376 ;	counter.c:17: if(sw1==0){
      00009F 20 A0 0B         [24]  377 	jb	_P2_0,00103$
                                    378 ;	counter.c:18: count=count+1;
      0000A2 E5 08            [12]  379 	mov	a,_count
      0000A4 04               [12]  380 	inc	a
      0000A5 F5 08            [12]  381 	mov	_count,a
                                    382 ;	counter.c:19: delay(1000);
      0000A7 75 82 E8         [24]  383 	mov	dpl,#0xe8
      0000AA 12 01 CD         [24]  384 	lcall	_delay
      0000AD                        385 00103$:
                                    386 ;	counter.c:21: }
      0000AD D0 D0            [24]  387 	pop	psw
      0000AF D0 00            [24]  388 	pop	(0+0)
      0000B1 D0 01            [24]  389 	pop	(0+1)
      0000B3 D0 02            [24]  390 	pop	(0+2)
      0000B5 D0 03            [24]  391 	pop	(0+3)
      0000B7 D0 04            [24]  392 	pop	(0+4)
      0000B9 D0 05            [24]  393 	pop	(0+5)
      0000BB D0 06            [24]  394 	pop	(0+6)
      0000BD D0 07            [24]  395 	pop	(0+7)
      0000BF D0 83            [24]  396 	pop	dph
      0000C1 D0 82            [24]  397 	pop	dpl
      0000C3 D0 F0            [24]  398 	pop	b
      0000C5 D0 E0            [24]  399 	pop	acc
      0000C7 D0 20            [24]  400 	pop	bits
      0000C9 32               [24]  401 	reti
                                    402 ;------------------------------------------------------------
                                    403 ;Allocation info for local variables in function 'timer1'
                                    404 ;------------------------------------------------------------
                                    405 ;	counter.c:22: void timer1()__interrupt(3){
                                    406 ;	-----------------------------------------
                                    407 ;	 function timer1
                                    408 ;	-----------------------------------------
      0000CA                        409 _timer1:
      0000CA C0 20            [24]  410 	push	bits
      0000CC C0 E0            [24]  411 	push	acc
      0000CE C0 F0            [24]  412 	push	b
      0000D0 C0 82            [24]  413 	push	dpl
      0000D2 C0 83            [24]  414 	push	dph
      0000D4 C0 07            [24]  415 	push	(0+7)
      0000D6 C0 06            [24]  416 	push	(0+6)
      0000D8 C0 05            [24]  417 	push	(0+5)
      0000DA C0 04            [24]  418 	push	(0+4)
      0000DC C0 03            [24]  419 	push	(0+3)
      0000DE C0 02            [24]  420 	push	(0+2)
      0000E0 C0 01            [24]  421 	push	(0+1)
      0000E2 C0 00            [24]  422 	push	(0+0)
      0000E4 C0 D0            [24]  423 	push	psw
      0000E6 75 D0 00         [24]  424 	mov	psw,#0x00
                                    425 ;	counter.c:23: if(sw2==0){
      0000E9 20 A2 0B         [24]  426 	jb	_P2_2,00103$
                                    427 ;	counter.c:24: count=count-1;
      0000EC E5 08            [12]  428 	mov	a,_count
      0000EE 14               [12]  429 	dec	a
      0000EF F5 08            [12]  430 	mov	_count,a
                                    431 ;	counter.c:25: delay(1000);
      0000F1 75 82 E8         [24]  432 	mov	dpl,#0xe8
      0000F4 12 01 CD         [24]  433 	lcall	_delay
      0000F7                        434 00103$:
                                    435 ;	counter.c:27: }
      0000F7 D0 D0            [24]  436 	pop	psw
      0000F9 D0 00            [24]  437 	pop	(0+0)
      0000FB D0 01            [24]  438 	pop	(0+1)
      0000FD D0 02            [24]  439 	pop	(0+2)
      0000FF D0 03            [24]  440 	pop	(0+3)
      000101 D0 04            [24]  441 	pop	(0+4)
      000103 D0 05            [24]  442 	pop	(0+5)
      000105 D0 06            [24]  443 	pop	(0+6)
      000107 D0 07            [24]  444 	pop	(0+7)
      000109 D0 83            [24]  445 	pop	dph
      00010B D0 82            [24]  446 	pop	dpl
      00010D D0 F0            [24]  447 	pop	b
      00010F D0 E0            [24]  448 	pop	acc
      000111 D0 20            [24]  449 	pop	bits
      000113 32               [24]  450 	reti
                                    451 ;------------------------------------------------------------
                                    452 ;Allocation info for local variables in function 'main'
                                    453 ;------------------------------------------------------------
                                    454 ;dat                       Allocated with name '_main_dat_65537_50'
                                    455 ;j                         Allocated to registers 
                                    456 ;j                         Allocated to registers r6 r7 
                                    457 ;------------------------------------------------------------
                                    458 ;	counter.c:28: int main(void){
                                    459 ;	-----------------------------------------
                                    460 ;	 function main
                                    461 ;	-----------------------------------------
      000114                        462 _main:
                                    463 ;	counter.c:29: TMOD=0x11; 
      000114 75 89 11         [24]  464 	mov	_TMOD,#0x11
                                    465 ;	counter.c:30: TH0=0x00;
      000117 75 8C 00         [24]  466 	mov	_TH0,#0x00
                                    467 ;	counter.c:31: TL0=0X00;
      00011A 75 8A 00         [24]  468 	mov	_TL0,#0x00
                                    469 ;	counter.c:32: TH1=0x00;
      00011D 75 8D 00         [24]  470 	mov	_TH1,#0x00
                                    471 ;	counter.c:33: TL1=0X00;
      000120 75 8B 00         [24]  472 	mov	_TL1,#0x00
                                    473 ;	counter.c:34: IE=0X8A;
      000123 75 A8 8A         [24]  474 	mov	_IE,#0x8a
                                    475 ;	counter.c:35: TR0=1;
                                    476 ;	assignBit
      000126 D2 8C            [12]  477 	setb	_TR0
                                    478 ;	counter.c:36: TR1=1;
                                    479 ;	assignBit
      000128 D2 8E            [12]  480 	setb	_TR1
                                    481 ;	counter.c:37: unsigned char dat[]="TOTAL:";
      00012A 75 09 54         [24]  482 	mov	_main_dat_65537_50,#0x54
      00012D 75 0A 4F         [24]  483 	mov	(_main_dat_65537_50 + 0x0001),#0x4f
      000130 75 0B 54         [24]  484 	mov	(_main_dat_65537_50 + 0x0002),#0x54
      000133 75 0C 41         [24]  485 	mov	(_main_dat_65537_50 + 0x0003),#0x41
      000136 75 0D 4C         [24]  486 	mov	(_main_dat_65537_50 + 0x0004),#0x4c
      000139 75 0E 3A         [24]  487 	mov	(_main_dat_65537_50 + 0x0005),#0x3a
      00013C 75 0F 00         [24]  488 	mov	(_main_dat_65537_50 + 0x0006),#0x00
                                    489 ;	counter.c:38: lcd_cmd(0x38);//2 lines and 5x7 matrix
      00013F 75 82 38         [24]  490 	mov	dpl,#0x38
      000142 12 01 BD         [24]  491 	lcall	_lcd_cmd
                                    492 ;	counter.c:39: lcd_cmd(0x01);//clear display
      000145 75 82 01         [24]  493 	mov	dpl,#0x01
      000148 12 01 BD         [24]  494 	lcall	_lcd_cmd
                                    495 ;	counter.c:40: lcd_cmd(0x06);// increment cursor
      00014B 75 82 06         [24]  496 	mov	dpl,#0x06
      00014E 12 01 BD         [24]  497 	lcall	_lcd_cmd
                                    498 ;	counter.c:41: lcd_cmd(0x0E);//display on curor blinking
      000151 75 82 0E         [24]  499 	mov	dpl,#0x0e
      000154 12 01 BD         [24]  500 	lcall	_lcd_cmd
                                    501 ;	counter.c:42: lcd_cmd(0x80);//force cursor to begining to 1st line
      000157 75 82 80         [24]  502 	mov	dpl,#0x80
      00015A 12 01 BD         [24]  503 	lcall	_lcd_cmd
                                    504 ;	counter.c:44: for(int j=0;j<strlen(dat);j++)
      00015D 7E 00            [12]  505 	mov	r6,#0x00
      00015F 7F 00            [12]  506 	mov	r7,#0x00
      000161                        507 00106$:
      000161 90 00 09         [24]  508 	mov	dptr,#_main_dat_65537_50
      000164 75 F0 40         [24]  509 	mov	b,#0x40
      000167 C0 07            [24]  510 	push	ar7
      000169 C0 06            [24]  511 	push	ar6
      00016B 12 0A 3F         [24]  512 	lcall	_strlen
      00016E AC 82            [24]  513 	mov	r4,dpl
      000170 AD 83            [24]  514 	mov	r5,dph
      000172 D0 06            [24]  515 	pop	ar6
      000174 D0 07            [24]  516 	pop	ar7
      000176 8E 02            [24]  517 	mov	ar2,r6
      000178 8F 03            [24]  518 	mov	ar3,r7
      00017A C3               [12]  519 	clr	c
      00017B EA               [12]  520 	mov	a,r2
      00017C 9C               [12]  521 	subb	a,r4
      00017D EB               [12]  522 	mov	a,r3
      00017E 9D               [12]  523 	subb	a,r5
      00017F 50 18            [24]  524 	jnc	00103$
                                    525 ;	counter.c:46: lcd_data(dat[j]);
      000181 EE               [12]  526 	mov	a,r6
      000182 24 09            [12]  527 	add	a,#_main_dat_65537_50
      000184 F9               [12]  528 	mov	r1,a
      000185 87 82            [24]  529 	mov	dpl,@r1
      000187 C0 07            [24]  530 	push	ar7
      000189 C0 06            [24]  531 	push	ar6
      00018B 12 01 AD         [24]  532 	lcall	_lcd_data
      00018E D0 06            [24]  533 	pop	ar6
      000190 D0 07            [24]  534 	pop	ar7
                                    535 ;	counter.c:44: for(int j=0;j<strlen(dat);j++)
      000192 0E               [12]  536 	inc	r6
                                    537 ;	counter.c:48: while(1){
      000193 BE 00 CB         [24]  538 	cjne	r6,#0x00,00106$
      000196 0F               [12]  539 	inc	r7
      000197 80 C8            [24]  540 	sjmp	00106$
      000199                        541 00103$:
                                    542 ;	counter.c:49: lcd_cmd(0x87);
      000199 75 82 87         [24]  543 	mov	dpl,#0x87
      00019C 12 01 BD         [24]  544 	lcall	_lcd_cmd
                                    545 ;	counter.c:50: lcd_number(count);
      00019F 85 08 82         [24]  546 	mov	dpl,_count
      0001A2 12 01 E4         [24]  547 	lcall	_lcd_number
                                    548 ;	counter.c:51: delay(1200);
      0001A5 75 82 B0         [24]  549 	mov	dpl,#0xb0
      0001A8 12 01 CD         [24]  550 	lcall	_delay
                                    551 ;	counter.c:53: }
      0001AB 80 EC            [24]  552 	sjmp	00103$
                                    553 ;------------------------------------------------------------
                                    554 ;Allocation info for local variables in function 'lcd_data'
                                    555 ;------------------------------------------------------------
                                    556 ;datas                     Allocated to registers 
                                    557 ;------------------------------------------------------------
                                    558 ;	counter.c:55: void lcd_data(unsigned char datas){
                                    559 ;	-----------------------------------------
                                    560 ;	 function lcd_data
                                    561 ;	-----------------------------------------
      0001AD                        562 _lcd_data:
      0001AD 85 82 90         [24]  563 	mov	_P1,dpl
                                    564 ;	counter.c:57: rs=1;
                                    565 ;	assignBit
      0001B0 D2 B0            [12]  566 	setb	_P3_0
                                    567 ;	counter.c:58: en=0;
                                    568 ;	assignBit
      0001B2 C2 B2            [12]  569 	clr	_P3_2
                                    570 ;	counter.c:59: delay(10);
      0001B4 75 82 0A         [24]  571 	mov	dpl,#0x0a
      0001B7 12 01 CD         [24]  572 	lcall	_delay
                                    573 ;	counter.c:60: en=1;
                                    574 ;	assignBit
      0001BA D2 B2            [12]  575 	setb	_P3_2
                                    576 ;	counter.c:61: }
      0001BC 22               [24]  577 	ret
                                    578 ;------------------------------------------------------------
                                    579 ;Allocation info for local variables in function 'lcd_cmd'
                                    580 ;------------------------------------------------------------
                                    581 ;cmd                       Allocated to registers 
                                    582 ;------------------------------------------------------------
                                    583 ;	counter.c:62: void lcd_cmd(unsigned char cmd){
                                    584 ;	-----------------------------------------
                                    585 ;	 function lcd_cmd
                                    586 ;	-----------------------------------------
      0001BD                        587 _lcd_cmd:
      0001BD 85 82 90         [24]  588 	mov	_P1,dpl
                                    589 ;	counter.c:64: rs=0;
                                    590 ;	assignBit
      0001C0 C2 B0            [12]  591 	clr	_P3_0
                                    592 ;	counter.c:65: en=0;
                                    593 ;	assignBit
      0001C2 C2 B2            [12]  594 	clr	_P3_2
                                    595 ;	counter.c:66: delay(10);
      0001C4 75 82 0A         [24]  596 	mov	dpl,#0x0a
      0001C7 12 01 CD         [24]  597 	lcall	_delay
                                    598 ;	counter.c:67: en=1;
                                    599 ;	assignBit
      0001CA D2 B2            [12]  600 	setb	_P3_2
                                    601 ;	counter.c:68: }
      0001CC 22               [24]  602 	ret
                                    603 ;------------------------------------------------------------
                                    604 ;Allocation info for local variables in function 'delay'
                                    605 ;------------------------------------------------------------
                                    606 ;ms                        Allocated to registers r7 
                                    607 ;i                         Allocated to registers r6 
                                    608 ;j                         Allocated to registers r5 
                                    609 ;------------------------------------------------------------
                                    610 ;	counter.c:69: void delay(unsigned char ms){
                                    611 ;	-----------------------------------------
                                    612 ;	 function delay
                                    613 ;	-----------------------------------------
      0001CD                        614 _delay:
      0001CD AF 82            [24]  615 	mov	r7,dpl
                                    616 ;	counter.c:71: for(i=0;i<ms;i++)
      0001CF 7E 00            [12]  617 	mov	r6,#0x00
      0001D1                        618 00107$:
      0001D1 C3               [12]  619 	clr	c
      0001D2 EE               [12]  620 	mov	a,r6
      0001D3 9F               [12]  621 	subb	a,r7
      0001D4 50 0D            [24]  622 	jnc	00109$
                                    623 ;	counter.c:72: for(j=0;j<ms;j++);
      0001D6 7D 00            [12]  624 	mov	r5,#0x00
      0001D8                        625 00104$:
      0001D8 C3               [12]  626 	clr	c
      0001D9 ED               [12]  627 	mov	a,r5
      0001DA 9F               [12]  628 	subb	a,r7
      0001DB 50 03            [24]  629 	jnc	00108$
      0001DD 0D               [12]  630 	inc	r5
      0001DE 80 F8            [24]  631 	sjmp	00104$
      0001E0                        632 00108$:
                                    633 ;	counter.c:71: for(i=0;i<ms;i++)
      0001E0 0E               [12]  634 	inc	r6
      0001E1 80 EE            [24]  635 	sjmp	00107$
      0001E3                        636 00109$:
                                    637 ;	counter.c:73: }
      0001E3 22               [24]  638 	ret
                                    639 ;------------------------------------------------------------
                                    640 ;Allocation info for local variables in function 'lcd_number'
                                    641 ;------------------------------------------------------------
                                    642 ;num                       Allocated to registers r7 
                                    643 ;buffer                    Allocated with name '_lcd_number_buffer_65536_64'
                                    644 ;------------------------------------------------------------
                                    645 ;	counter.c:74: void lcd_number(unsigned char num) {
                                    646 ;	-----------------------------------------
                                    647 ;	 function lcd_number
                                    648 ;	-----------------------------------------
      0001E4                        649 _lcd_number:
      0001E4 AF 82            [24]  650 	mov	r7,dpl
                                    651 ;	counter.c:76: sprintf(buffer, "%02u", num);
      0001E6 7E 00            [12]  652 	mov	r6,#0x00
      0001E8 C0 07            [24]  653 	push	ar7
      0001EA C0 06            [24]  654 	push	ar6
      0001EC 74 92            [12]  655 	mov	a,#___str_1
      0001EE C0 E0            [24]  656 	push	acc
      0001F0 74 0A            [12]  657 	mov	a,#(___str_1 >> 8)
      0001F2 C0 E0            [24]  658 	push	acc
      0001F4 74 80            [12]  659 	mov	a,#0x80
      0001F6 C0 E0            [24]  660 	push	acc
      0001F8 74 10            [12]  661 	mov	a,#_lcd_number_buffer_65536_64
      0001FA C0 E0            [24]  662 	push	acc
      0001FC 74 00            [12]  663 	mov	a,#(_lcd_number_buffer_65536_64 >> 8)
      0001FE C0 E0            [24]  664 	push	acc
      000200 74 40            [12]  665 	mov	a,#0x40
      000202 C0 E0            [24]  666 	push	acc
      000204 12 02 EE         [24]  667 	lcall	_sprintf
      000207 E5 81            [12]  668 	mov	a,sp
      000209 24 F8            [12]  669 	add	a,#0xf8
      00020B F5 81            [12]  670 	mov	sp,a
                                    671 ;	counter.c:77: lcdstring(buffer);
      00020D 90 00 10         [24]  672 	mov	dptr,#_lcd_number_buffer_65536_64
      000210 75 F0 40         [24]  673 	mov	b,#0x40
                                    674 ;	counter.c:78: }
      000213 02 02 16         [24]  675 	ljmp	_lcdstring
                                    676 ;------------------------------------------------------------
                                    677 ;Allocation info for local variables in function 'lcdstring'
                                    678 ;------------------------------------------------------------
                                    679 ;str                       Allocated to registers 
                                    680 ;------------------------------------------------------------
                                    681 ;	counter.c:79: void lcdstring(unsigned char *str){
                                    682 ;	-----------------------------------------
                                    683 ;	 function lcdstring
                                    684 ;	-----------------------------------------
      000216                        685 _lcdstring:
      000216 AD 82            [24]  686 	mov	r5,dpl
      000218 AE 83            [24]  687 	mov	r6,dph
      00021A AF F0            [24]  688 	mov	r7,b
                                    689 ;	counter.c:80: while(*str){
      00021C                        690 00101$:
      00021C 8D 82            [24]  691 	mov	dpl,r5
      00021E 8E 83            [24]  692 	mov	dph,r6
      000220 8F F0            [24]  693 	mov	b,r7
      000222 12 0A 57         [24]  694 	lcall	__gptrget
      000225 FC               [12]  695 	mov	r4,a
      000226 60 18            [24]  696 	jz	00104$
                                    697 ;	counter.c:81: lcd_data(*str++);
      000228 8C 82            [24]  698 	mov	dpl,r4
      00022A 0D               [12]  699 	inc	r5
      00022B BD 00 01         [24]  700 	cjne	r5,#0x00,00116$
      00022E 0E               [12]  701 	inc	r6
      00022F                        702 00116$:
      00022F C0 07            [24]  703 	push	ar7
      000231 C0 06            [24]  704 	push	ar6
      000233 C0 05            [24]  705 	push	ar5
      000235 12 01 AD         [24]  706 	lcall	_lcd_data
      000238 D0 05            [24]  707 	pop	ar5
      00023A D0 06            [24]  708 	pop	ar6
      00023C D0 07            [24]  709 	pop	ar7
      00023E 80 DC            [24]  710 	sjmp	00101$
      000240                        711 00104$:
                                    712 ;	counter.c:84: }
      000240 22               [24]  713 	ret
                                    714 	.area CSEG    (CODE)
                                    715 	.area CONST   (CODE)
                                    716 	.area CONST   (CODE)
      000A92                        717 ___str_1:
      000A92 25 30 32 75            718 	.ascii "%02u"
      000A96 00                     719 	.db 0x00
                                    720 	.area CSEG    (CODE)
                                    721 	.area XINIT   (CODE)
                                    722 	.area CABS    (ABS,CODE)
