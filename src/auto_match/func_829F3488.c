typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82015B38;
extern unsigned int lbl_82079FB0;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_83218BEC;
extern unsigned int lbl_83218BF0;
extern unsigned int stack0x00000010;


void fn_829F3488(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  uVar3 = lbl_83218BF0;
  puVar1 = (undefined4 *)((int)&stack0x00000010 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  dVar5 = (double)lbl_820885C8;
  if ((uVar3 & 1) == 0) {
    lbl_83218BF0 = uVar3 | 1;
    dVar4 = (double)fn_82F67DE8(lbl_82079FB0);
    lbl_83218BEC = (float)(dVar5 / (double)(float)dVar4);
  }
  in_stack_00000010 = lbl_83218BEC * in_stack_00000010;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fVar2 = lbl_8200DFF4;
  in_stack_00000018 = lbl_82002AE0 / in_stack_00000018;
  dVar4 = (double)lbl_82015B38;
  *param_1 = (int)((double)in_stack_00000010 * (double)in_stack_00000018 + dVar5);
  param_1[1] = (int)-(float)((double)(lbl_83218BEC * in_stack_00000014) * (double)in_stack_00000018
                            - dVar4);
  param_1[2] = (int)(fStack_38 * fVar2);
  return;
}

