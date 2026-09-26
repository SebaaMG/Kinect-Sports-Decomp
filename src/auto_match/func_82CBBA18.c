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


void fn_82CBBA18(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
                  int *param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  
  iVar7 = *(int *)(param_1 + 0x88) * 0x40 + -4;
  iVar6 = *(int *)(param_1 + 0x39f8) * *(int *)(param_1 + 0xd64);
  iVar8 = *(int *)(param_1 + 0x8c) * 0x40 + -4;
  iVar4 = (iVar6 + -0x100) * param_2;
  iVar5 = (iVar6 + -0x100) * param_3;
  if (param_4 == 0) {
    iVar3 = iVar6 * param_3 + 0x80 >> 8;
    *param_7 = iVar6 * param_2 + 0x80 >> 8;
    iVar4 = iVar4 + 0x80 >> 8;
    iVar5 = iVar5 + 0x80 >> 8;
  }
  else {
    *param_7 = (iVar6 * param_2 + 0xff >> 9) << 1;
    iVar3 = (iVar6 * param_3 + 0xff >> 9) << 1;
    iVar4 = (iVar4 + 0xff >> 9) << 1;
    iVar5 = (iVar5 + 0xff >> 9) << 1;
  }
  *param_8 = iVar3;
  *in_stack_00000054 = iVar4;
  *in_stack_0000005c = iVar5;
  if (*(int *)(param_1 + 0x50c8) != 0) {
    return;
  }
  uVar1 = param_5 & 0x3ffffff;
  uVar2 = param_6 & 0x3ffffff;
  iVar5 = *param_7 + param_5 * 0x40;
  iVar4 = *param_8 + param_6 * 0x40;
  if (iVar5 < -0x3c) {
    iVar5 = uVar1 * -0x40 + -0x3c;
LAB_82cbbb10:
    *param_7 = iVar5;
  }
  else if (iVar7 < iVar5) {
    iVar5 = iVar7 + uVar1 * -0x40;
    goto LAB_82cbbb10;
  }
  if (iVar4 < -0x3c) {
    iVar4 = uVar2 * -0x40 + -0x3c;
LAB_82cbbb30:
    *param_8 = iVar4;
  }
  else if (iVar8 < iVar4) {
    iVar4 = iVar8 + uVar2 * -0x40;
    goto LAB_82cbbb30;
  }
  iVar5 = *in_stack_00000054 + param_5 * 0x40;
  iVar4 = *in_stack_0000005c + param_6 * 0x40;
  if (iVar5 < -0x3c) {
    iVar7 = uVar1 * -0x40 + -0x3c;
  }
  else {
    if (iVar5 <= iVar7) goto LAB_82cbbb64;
    iVar7 = iVar7 + uVar1 * -0x40;
  }
  *in_stack_00000054 = iVar7;
LAB_82cbbb64:
  if (iVar4 < -0x3c) {
    *in_stack_0000005c = uVar2 * -0x40 + -0x3c;
  }
  else if (iVar8 < iVar4) {
    *in_stack_0000005c = iVar8 + uVar2 * -0x40;
  }
  return;
}

