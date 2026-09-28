/* 0x82647578 | size 0x10
 *   eieio
 *   li    r11, 0
 *   stw   r11, 0x2a88(r3)
 *   blr
 *
 * The leading eieio is the XDK read/write barrier that guards the store
 * (EnforceInOrderExecutionIO()/_ReadWriteBarrier() in the original source).
 * It cannot be reproduced with this cl build: the barrier intrinsics are
 * recognised but encode to nothing here, and the inline assembler rejects the
 * opcode ("C2759: in-line assembler reports: Opcode not supported by
 * backend"), so the store below is the closest obtainable code.
 */
void fn_82647578(int object)
{
	_ReadWriteBarrier();
	*(int *)(object + 0x2A88) = 0;
}
