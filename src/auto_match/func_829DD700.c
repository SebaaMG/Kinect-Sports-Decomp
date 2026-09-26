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
extern unsigned int lbl_832179FC;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;


undefined8 fn_829DD700(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int in_r0;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_00010020;
  float in_register_00010024;
  float in_register_00010028;
  float in_vr2;
  float in_stack_0000001c;
  float in_stack_0000002c;
  float afStack_10 [4];
  
  iVar4 = lbl_832179FC;
  fVar2 = in_register_00010010 * in_register_00010020 + in_register_00010014 * in_register_00010024
          + in_register_00010018 * in_register_00010028;
  pfVar3 = (float *)((uint)(&stack0x00000010 + in_r0) & 0xfffffff0);
  *pfVar3 = in_register_00010010;
  pfVar3[1] = in_register_00010014;
  pfVar3[2] = in_register_00010018;
  pfVar3[3] = in_vr1;
  fVar1 = *(float *)(iVar4 + 0x8f0cc);
  pfVar3 = (float *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *pfVar3 = in_register_00010020;
  pfVar3[1] = in_register_00010024;
  pfVar3[2] = in_register_00010028;
  pfVar3[3] = in_vr2;
  pfVar3 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar2;
  pfVar3[1] = fVar2;
  pfVar3[2] = fVar2;
  pfVar3[3] = fVar2;
  if (afStack_10[0] < fVar1) {
    return 0;
  }
  if (*(float *)(iVar4 + 0x8f0d0) < ABS(in_stack_0000001c - in_stack_0000002c)) {
    return 0;
  }
  return 1;
}

