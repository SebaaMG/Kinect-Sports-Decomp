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
extern int fn_82641518();


void fn_82641EF8(int param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x30);
  param_4 = param_4 + -4;
  do {
    lVar6 = LZCOUNT(param_2);
    param_2 = param_2 << lVar6;
    param_4 = lVar6 * 0x40 + param_4;
    lVar7 = LZCOUNT(~param_2);
    lVar8 = lVar7 * 0x10;
    param_3 = lVar6 * 0x10 + param_3;
    if (((lVar8 + 3) * 4 + uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x34)) {
      uVar4 = uVar5 & 0xf;
      if (uVar4 == 4) {
        uVar5 = uVar5 + 4;
        *(undefined4 *)uVar5 = 0x80000000;
      }
      else {
        iVar2 = (int)uVar5;
        if (uVar4 == 0) {
          *(undefined4 *)(iVar2 + 4) = 0x80000000;
          uVar5 = uVar5 + 8;
          *(undefined4 *)uVar5 = 0x80000000;
        }
        else if (uVar4 == 0xc) {
          *(undefined4 *)(iVar2 + 4) = 0x80000000;
          *(undefined4 *)(iVar2 + 8) = 0x80000000;
          uVar5 = uVar5 + 0xc;
          *(undefined4 *)uVar5 = 0x80000000;
        }
      }
      uVar5 = uVar5 + 4;
      *(uint *)uVar5 = (uint)((lVar8 - 1U & 0xffffffff) << 0x10) | (uint)param_3;
      do {
        iVar2 = (int)param_4;
        puVar1 = (undefined4 *)(iVar2 + 4U & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        lVar7 = lVar7 + -1;
        puVar3 = (undefined4 *)(iVar2 + 0x14U & 0xfffffff0);
        uVar20 = *puVar3;
        uVar21 = puVar3[1];
        uVar22 = puVar3[2];
        uVar23 = puVar3[3];
        param_2 = param_2 << 1;
        puVar3 = (undefined4 *)(iVar2 + 0x24U & 0xfffffff0);
        uVar16 = *puVar3;
        uVar17 = puVar3[1];
        uVar18 = puVar3[2];
        uVar19 = puVar3[3];
        puVar3 = (undefined4 *)(iVar2 + 0x34U & 0xfffffff0);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        uVar14 = puVar3[2];
        uVar15 = puVar3[3];
        param_4 = param_4 + 0x40;
        iVar2 = (int)uVar5;
        puVar3 = (undefined4 *)(iVar2 + 4U & 0xfffffff0);
        *puVar3 = *puVar1;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar1 = (undefined4 *)(iVar2 + 0x14U & 0xfffffff0);
        *puVar1 = uVar20;
        puVar1[1] = uVar21;
        puVar1[2] = uVar22;
        puVar1[3] = uVar23;
        puVar1 = (undefined4 *)(iVar2 + 0x24U & 0xfffffff0);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        puVar1[2] = uVar18;
        puVar1[3] = uVar19;
        puVar1 = (undefined4 *)(iVar2 + 0x34U & 0xfffffff0);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        uVar5 = uVar5 + 0x40;
      } while (lVar7 != 0);
    }
    else {
      uVar5 = fn_82641518(param_1,uVar5,param_3,param_4,lVar8,0x10);
      param_4 = lVar7 * 0x40 + param_4;
      param_2 = param_2 << lVar7;
    }
    param_3 = lVar8 + param_3;
  } while (param_2 != 0);
  *(int *)(param_1 + 0x30) = (int)uVar5;
  return;
}

