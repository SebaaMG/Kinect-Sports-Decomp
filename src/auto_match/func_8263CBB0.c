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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_70;


void fn_8263CBB0(int param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar9;
  uint uVar10;
  ulonglong uVar8;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uStack_70;
  
  iVar5 = (param_2 + 0xc6c) * 4;
  iVar12 = (param_2 + 0x30) * 0x18;
  puVar4 = *(uint **)(iVar5 + param_1);
  if (param_3 == 0) {
    *(uint *)(iVar12 + param_1) = *(uint *)(iVar12 + param_1) & 0xfffffffc;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x30);
    puVar13 = (uint *)(iVar12 + param_1);
    uVar11 = *(uint *)(param_3 + 0x20);
    uVar2 = *(uint *)(param_3 + 0x2c);
    uVar10 = *(uint *)(param_3 + 0x1c);
    uVar3 = *(uint *)(param_3 + 0x28);
    puVar13[2] = *(uint *)(param_3 + 0x24);
    uVar6 = puVar13[4] & 0xfffffc03;
    uVar9 = (uint)*(byte *)(param_1 + param_2 + 0x2f5e);
    puVar13[4] = uVar6 | uVar2 & 0x3fc;
    *puVar13 = *puVar13 & 0x3ffc00 | uVar10 & 0xffc003ff;
    puVar13[1] = puVar13[1] & 0x800 |
                 ((uVar11 >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1fffffff) & 0xfffff7ff;
    puVar13[3] = puVar13[3] & 0x7ff80000 | uVar3 & 0x8007ffff;
    puVar13[5] = puVar13[5] & 0x1ff | ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffffe00);
    if (uVar9 < (uVar2 >> 2 & 0xf)) {
      uVar9 = uVar2 >> 2 & 0xf;
    }
    uVar1 = (uVar9 & 0xf) << 2;
    uVar11 = (uint)*(byte *)(param_1 + param_2 + 0x2f78);
    uVar10 = *(uint *)(param_3 + 0x2c) >> 6 & 0xf;
    puVar13[4] = uVar1 | uVar6 | uVar2 & 0x3c0;
    if (uVar10 < uVar11) {
      uVar11 = uVar10;
    }
    uVar8 = *(ulonglong *)(param_1 + 0x18);
    puVar13[4] = (uVar11 & 0xf) << 6 | uVar1 | uVar6;
    *(ulonglong *)(param_1 + 0x18) = uVar8 | param_4;
  }
  *(int *)(iVar5 + param_1) = param_3;
  if (puVar4 != (uint *)0x0) {
    if (*(uint *)(param_1 + 0x2a9c) == 0) {
      if ((*(uint *)(param_1 + 0x2aa0) & *puVar4) != 0) {
        puVar7 = *(undefined8 **)(param_1 + 0x35a8);
        if (*(undefined8 **)(param_1 + 0x35ac) <= puVar7) {
          puVar7 = (undefined8 *)fn_8264B4A0(param_1);
        }
        *puVar7 = CONCAT44((uint)puVar4 >> 2 | uStack_70 & 0x80000000,0xffffffff);
        *(undefined8 **)(param_1 + 0x35a8) = puVar7 + 1;
      }
    }
    else {
      puVar4[2] = *(uint *)(param_1 + 0x2a9c);
    }
  }
  return;
}

