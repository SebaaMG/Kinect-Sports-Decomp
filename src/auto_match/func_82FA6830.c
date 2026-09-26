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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82FA5CA0();
extern int fn_82FA5D50();
extern int fn_82FA5F90();
extern int fn_82FA60D8();
extern int fn_82FA61A0();
extern unsigned int stack0x00000000;


int fn_82FA6830(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  if (((param_3 != 0) && (param_3 < 0x40000000)) && (uVar8 = param_3 + 3 & 0xfffffffc, uVar8 < 0xd))
  {
    uVar8 = 0xc;
  }
  iVar9 = 0;
  uVar10 = 0xffffffffffffffff;
  iVar4 = fn_82FA61A0(param_1);
  lVar11 = ZEXT48(&stack0x00000000) - 100;
  do {
    if ((iVar4 == 0) || (iVar9 != 0)) break;
    uVar7 = iVar4 + 8;
    uVar1 = *(uint *)(iVar4 + 4);
    uVar6 = (uVar7 + param_2) - 1 & ~(param_2 - 1U);
    if ((uVar1 & 0xfffffffc) + uVar7 < uVar6 + uVar8) {
LAB_82fa694c:
      lVar11 = lVar11 + 4;
      *(uint *)lVar11 = uVar7;
      iVar2 = (uVar1 & 0xfffffffc) + iVar4;
      uVar10 = uVar10 + 1;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffd;
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffffe;
      iVar4 = fn_82FA61A0(param_1,uVar8);
    }
    else {
      if (uVar6 != uVar7) {
        if ((int)(uVar6 - uVar7) < 0x10) goto LAB_82fa694c;
        iVar4 = fn_82FA60D8(param_1,iVar4);
      }
      uVar1 = *(uint *)(iVar4 + 4) & 0xfffffffc;
      if ((uVar1 != uVar8) && ((int)(uVar1 - uVar8) < 0x11)) {
        uVar8 = *(uint *)(iVar4 + 4) & 0xfffffffc;
      }
      fn_82FA5F90(param_1,iVar4,uVar8);
      iVar9 = iVar4 + 8;
      iVar2 = (*(uint *)(iVar4 + 4) & 0xfffffffc) + iVar4;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffffffd;
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffffe;
    }
  } while ((int)uVar10 < 8);
  if (-1 < (int)uVar10) {
    lVar11 = (uVar10 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x60);
    do {
      uVar8 = *(uint *)lVar11;
      if ((ulonglong)uVar8 != 0) {
        uVar12 = (ulonglong)uVar8 - 8;
        uVar1 = *(uint *)(uVar8 - 4) & 0xfffffffc;
        puVar3 = (uint *)uVar12;
        *(uint **)((int)puVar3 + uVar1 + 4) = puVar3;
        *(uint *)((int)puVar3 + uVar1 + 8) = *(uint *)((int)puVar3 + uVar1 + 8) | 2;
        uVar1 = *(uint *)(uVar8 - 4);
        *(uint *)(uVar8 - 4) = uVar1 | 1;
        if ((uVar1 & 2) != 0) {
          uVar12 = (ulonglong)*puVar3;
          fn_82FA5CA0(param_1);
          iVar4 = (int)uVar12;
          uVar8 = (*(uint *)(uVar8 - 4) & 0xfffffffc) + *(int *)(iVar4 + 4) + 4;
          *(uint *)(iVar4 + 4) = uVar8;
          *(int *)((uVar8 & 0xfffffffc) + iVar4 + 4) = iVar4;
        }
        iVar4 = (int)uVar12;
        iVar2 = (*(uint *)(iVar4 + 4) & 0xfffffffc) + iVar4;
        iVar5 = iVar2 + 4;
        if ((*(uint *)(iVar2 + 8) & 1) != 0) {
          fn_82FA5CA0(param_1);
          uVar8 = (*(uint *)(iVar5 + 4) & 0xfffffffc) + *(int *)(iVar4 + 4) + 4;
          *(uint *)(iVar4 + 4) = uVar8;
          *(int *)((uVar8 & 0xfffffffc) + iVar4 + 4) = iVar4;
        }
        fn_82FA5D50(param_1,uVar12);
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + -4;
    } while (-1 < (longlong)uVar10);
  }
  return iVar9;
}

