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
extern int fn_82672C20();
extern unsigned int lbl_821CC160;


void fn_82383B90(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  
  uVar3 = lbl_821CC160;
  iVar1 = *(int *)(param_9 + 0xec);
  *(float *)(param_9 + 0x10) = (float)param_1;
  *(float *)(param_9 + 0x14) = (float)param_2;
  *(undefined4 *)(param_9 + 0x60) = 0;
  *(undefined4 *)(param_9 + 0xc0) = uVar3;
  *(undefined4 *)(param_9 + 0x5c) = in_stack_00000084;
  *(undefined4 *)(param_9 + 0xc4) = uVar3;
  *(undefined4 *)(param_9 + 100) = in_stack_0000008c;
  *(float *)(param_9 + 0x40) = (float)param_3;
  *(undefined4 *)(param_9 + 0xe4) = in_stack_00000094;
  *(float *)(param_9 + 0x44) = (float)param_4;
  *(undefined4 *)(param_9 + 0xe0) = 1;
  *(float *)(param_9 + 0x48) = (float)param_5;
  *(undefined4 *)(param_9 + 0xe8) = 0;
  *(float *)(param_9 + 0x4c) = (float)param_6;
  *(undefined4 *)(param_9 + 0x18) = uVar3;
  *(float *)(param_9 + 0x50) = (float)param_7;
  *(float *)(param_9 + 0x54) = (float)param_7;
  *(float *)(param_9 + 0x58) = (float)param_8;
  puVar2 = (undefined4 *)(param_9 + 0xd0U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (undefined4 *)(param_9 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)(param_9 + 0x30U & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  if (iVar1 == 6) {
    *(uint *)(param_9 + 0x5c) = (uint)LZCOUNT(in_stack_00000084) >> 5;
  }
  if (param_2 < param_1) {
    if ((*(int *)(param_9 + 0xa4) != 0) && (*(int *)(param_9 + 0xa8) == 0)) {
      *(undefined4 *)(param_9 + 0xa8) = 1;
      fn_82672C20(*(undefined4 *)(param_9 + 0xac),0xffffffff821a8498,0,0);
    }
    *(undefined4 *)(param_9 + 0x60) = 0;
  }
  return;
}

