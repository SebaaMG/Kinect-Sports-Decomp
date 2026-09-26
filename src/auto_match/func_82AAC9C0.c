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
extern int fn_82A29A38();
extern unsigned int lbl_83160520;


void fn_82AAC9C0(ulonglong param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  puVar1 = (uint *)*param_3;
  if ((param_2 != 0x34) && (param_2 != 7)) {
    fn_82A29A38();
  }
  param_2 = param_2 & 0xffff;
  if ((param_1 & 0xf000000) == 0xd000000) {
    param_2 = param_2 | 0x10000;
  }
  param_1 = param_1 & 0xff0000;
  *puVar1 = param_2;
  puVar6 = puVar1 + 1;
  if (param_1 == 0xe40000) {
    *puVar6 = 0x40020;
  }
  else {
    iVar2 = *(int *)(&lbl_83160520 + ((uint)((param_1 >> 0x12) << 2) & 0xc));
    uVar3 = *(uint *)(&lbl_83160520 + ((uint)param_1 >> 0xe & 0xc));
    iVar4 = *(int *)(&lbl_83160520 + ((uint)((param_1 >> 0x14) << 2) & 0xc));
    iVar5 = *(int *)(&lbl_83160520 + ((uint)(param_1 >> 0x14) & 0xc));
    *puVar6 = 0x440020;
    puVar6 = puVar1 + 2;
    *puVar6 = iVar5 << 0xc | iVar4 << 8 | iVar2 << 4 | uVar3;
  }
  puVar6[1] = 0x410000;
  puVar6[2] = 0x4444;
  *param_3 = (int)(puVar6 + 3);
  return;
}

