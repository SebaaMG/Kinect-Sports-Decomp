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
extern int fn_82AAC8C0();
extern unsigned int lbl_83160520;


void fn_82AAD2E0(ulonglong param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint auStack_40 [16];
  
  puVar1 = (undefined4 *)*param_5;
  *puVar1 = 0xc;
  uVar7 = fn_82AAC8C0(((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8,
                        param_1 & 0x7ff,param_4,auStack_40);
  if ((param_1 & 0xf0000) == 0xf0000) {
    puVar8 = puVar1 + 2;
    puVar1[1] = (auStack_40[0] & 0x3f) << 0x10 | uVar7 & 0xffff;
  }
  else {
    puVar1[1] = (auStack_40[0] & 0x3f) << 0x10 | 0x400000 | uVar7 & 0xffff;
    uVar7 = (uint)((param_1 & 0x10000) != 0);
    if ((param_1 & 0x20000) != 0) {
      uVar7 = uVar7 | 4;
    }
    if ((param_1 & 0x40000) != 0) {
      uVar7 = uVar7 | 0x10;
    }
    if ((param_1 & 0x80000) != 0) {
      uVar7 = uVar7 | 0x40;
    }
    puVar1[2] = uVar7;
    puVar8 = puVar1 + 3;
  }
  uVar6 = param_2 & 0xff0000;
  uVar7 = -(uint)((param_2 & 0xf000000) == 0xd000000) & 0x10000;
  if ((uVar6 == 0xe40000) && (uVar7 == 0)) {
    *puVar8 = 0x40020;
  }
  else {
    uVar2 = *(uint *)(&lbl_83160520 + ((uint)uVar6 >> 0xe & 0xc));
    iVar3 = *(int *)(&lbl_83160520 + ((uint)((uVar6 >> 0x12) << 2) & 0xc));
    iVar4 = *(int *)(&lbl_83160520 + ((uint)((uVar6 >> 0x14) << 2) & 0xc));
    iVar5 = *(int *)(&lbl_83160520 + ((uint)(uVar6 >> 0x14) & 0xc));
    *puVar8 = 0x440020;
    puVar8 = puVar8 + 1;
    *puVar8 = iVar5 << 0xc | iVar4 << 8 | iVar3 << 4 | uVar2 | uVar7;
  }
  puVar9 = puVar8 + 1;
  if (param_3 == 0xe40000) {
    *puVar9 = 0x40021;
  }
  else {
    *puVar9 = 0x440021;
    puVar9 = puVar8 + 2;
    *puVar9 = *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 0xc)) << 0xc |
              *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 3) * 4) << 8 |
              *(int *)(&lbl_83160520 + (param_3 >> 0x12 & 3) * 4) << 4 |
              *(uint *)(&lbl_83160520 + (param_3 >> 0xe & 0xc));
  }
  *param_5 = puVar9 + 1;
  return;
}

