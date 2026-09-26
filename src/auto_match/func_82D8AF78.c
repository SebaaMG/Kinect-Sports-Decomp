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


longlong fn_82D8AF78(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  lVar8 = param_1;
  do {
    iVar5 = (int)param_1;
    iVar3 = *(int *)(((int)param_2 + (int)param_3 >> 1) * 4 + iVar5);
    uVar9 = param_3;
    uVar13 = param_2;
    do {
      uVar1 = *(uint *)(iVar3 + 0x34);
      lVar11 = (uVar13 & 0x3fffffff) * 4 + param_1;
      while( true ) {
        iVar2 = *(int *)lVar11;
        uVar6 = (uint)param_4;
        if (*(uint *)(iVar2 + 0x34) < uVar1) {
          bVar14 = true;
        }
        else if (uVar1 < *(uint *)(iVar2 + 0x34)) {
          bVar14 = false;
        }
        else {
          uVar12 = (ulonglong)
                   *(uint *)((*(uint *)(iVar2 + 0x18) ^ *(uint *)(iVar2 + 0x14) ^ uVar6) + 0xd4);
          uVar10 = (ulonglong)
                   *(uint *)((*(uint *)(iVar3 + 0x18) ^ *(uint *)(iVar3 + 0x14) ^ uVar6) + 0xd4);
          bVar14 = uVar12 < uVar10;
          lVar8 = uVar12 - uVar10;
        }
        if (!bVar14) break;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 4;
      }
      lVar11 = (uVar9 & 0x3fffffff) * 4 + param_1;
      while( true ) {
        iVar2 = *(int *)lVar11;
        if (uVar1 < *(uint *)(iVar2 + 0x34)) {
          bVar14 = true;
        }
        else if (*(uint *)(iVar2 + 0x34) < uVar1) {
          bVar14 = false;
        }
        else {
          uVar12 = (ulonglong)
                   *(uint *)((*(uint *)(iVar2 + 0x18) ^ *(uint *)(iVar2 + 0x14) ^ uVar6) + 0xd4);
          uVar10 = (ulonglong)
                   *(uint *)((*(uint *)(iVar3 + 0x18) ^ *(uint *)(iVar3 + 0x14) ^ uVar6) + 0xd4);
          bVar14 = uVar10 < uVar12;
          lVar8 = uVar10 - uVar12;
        }
        if (!bVar14) break;
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + -4;
      }
      if ((int)uVar9 < (int)uVar13) break;
      if ((int)uVar9 != (int)uVar13) {
        iVar2 = (int)((uVar13 & 0xffffffff) << 2);
        iVar7 = (int)((uVar9 & 0xffffffff) << 2);
        uVar4 = *(undefined4 *)(iVar7 + iVar5);
        *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(iVar2 + iVar5);
        *(undefined4 *)(iVar2 + iVar5) = uVar4;
      }
      uVar9 = uVar9 - 1;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 <= (int)uVar9);
    if ((int)param_2 < (int)uVar9) {
      lVar8 = fn_82D8AF78(param_1,param_2,uVar9,param_4);
    }
    param_2 = uVar13;
    if ((int)param_3 <= (int)uVar13) {
      return lVar8;
    }
  } while( true );
}

