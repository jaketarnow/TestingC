/* -- isortS.s --*/
.data
promptmsg:		.asciz "Enter number of elements: "
newlinemsg:		.asciz "> "
formatnum:		.asciz "%d"
formatprint:	.asciz "%d%s"

.balign 4
i:
	.word 0
j:
	.word 0

.text
insertion_sort:
	
promptloop:
	cmp r0, r1									/* compare n to 0 */
	blte end									/* branch end if n < 0 */

	ldr r0, addr_of_newlinemsg					/* loading r0 with > */
	bl printf									/* branch link to printf of > */
	b loop										/* loop back */

end:
	mov r0, r1									/* once done with loop, move 
	bx lr

.balign 4
.global main
main:
	str lr, [sp, #-4]!							/* allocating space on stack 4 bytes */
	ldr r0, addr_of_promptmsg					/* load r0 with prompt message */
	bl printf									/* branch link to printf -- enter num -- */

	ldr r0, addr_of_formatnum 					/* load r0 with %d to format input as int */   	 	
    mov r1, sp 									/* moves address of stack pointer into r1 */

    bl scanf									/* branch link to scanf -- for input -- */

    ldr r0, [sp]								/* load value of stack pointer address into r0 */
    mov r1, #0									/* move value of 0 into r1 */
   	
   	bl promptloop								/* branch link to promptloop */









addr_of_promptmsg		: .word promptmsg
addr_of_newlinemsg		: .word newlinemsg
addr_of_formatnum		: .word formatnum
addr_of_formatprint		: .word formatprint
addr_of_i 				: .word i
addr_of_j 				: .word j
.global printf
.global scanf