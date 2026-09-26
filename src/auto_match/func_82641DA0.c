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
extern int fn_82645110();


void fn_82641DA0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1;
  uVar4 = (ulonglong)*(uint *)(iVar1 + 0x30);
  lVar8 = 0x4800;
  lVar12 = param_1 + 0x47c;
  do {
    while( true ) {
      lVar7 = LZCOUNT(param_2);
      param_2 = param_2 << lVar7;
      lVar10 = lVar7 * 6 + lVar8;
      lVar9 = LZCOUNT(~param_2);
      lVar11 = lVar9 * 6;
      lVar12 = lVar7 * 0x18 + lVar12;
      if (((lVar11 + 5) * 4 + uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x34)) break;
      uVar4 = fn_82641518(param_1,uVar4,lVar10,lVar12,lVar11,6);
      param_2 = param_2 << lVar9;
      lVar12 = lVar9 * 0x18 + lVar12;
      lVar8 = lVar11 + lVar10;
      if (param_2 == 0) {
        *(int *)(iVar1 + 0x30) = (int)uVar4;
        if ((ulonglong)*(uint *)(iVar1 + 0x38) < (uVar4 & 0xffffffff)) {
          uVar4 = fn_82645110(param_1);
        }
        iVar2 = (int)uVar4;
        *(undefined4 *)(iVar2 + 4) = 0x25000;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(iVar2 + 0x10);
        return;
      }
    }
    *(undefined4 *)((int)uVar4 + 4) = 0x80000000;
    lVar8 = lVar11 + lVar10;
    uVar4 = (uVar4 & 7) + uVar4 + 4;
    *(uint *)uVar4 = (uint)((lVar11 - 1U & 0xffffffff) << 0x10) | (uint)lVar10;
    do {
      iVar2 = (int)lVar12;
      lVar9 = lVar9 + -1;
      uVar6 = *(undefined8 *)(iVar2 + 0xc);
      param_2 = param_2 << 1;
      uVar5 = *(undefined8 *)(iVar2 + 0x14);
      lVar12 = lVar12 + 0x18;
      iVar3 = (int)uVar4;
      *(undefined8 *)(iVar3 + 4) = *(undefined8 *)(iVar2 + 4);
      *(undefined8 *)(iVar3 + 0xc) = uVar6;
      *(undefined8 *)(iVar3 + 0x14) = uVar5;
      uVar4 = uVar4 + 0x18;
    } while (lVar9 != 0);
  } while (param_2 != 0);
  *(int *)(iVar1 + 0x30) = iVar3 + 0x28;
  *(undefined8 *)(iVar3 + 0x1c) = 0x2500000000000;
  *(undefined8 *)(iVar3 + 0x24) = 0x2500000000000;
  return;
}

