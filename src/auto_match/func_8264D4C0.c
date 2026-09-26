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
extern int fn_8264D380();
extern int fn_8265C940();
extern int fn_8265C990();
extern unsigned int uRam83275b50;
extern U64 storeWordConditionalIndexed();


longlong fn_8264D4C0(ulonglong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  char in_RESERVE;
  byte bVar15;
  
  uVar13 = (ulonglong)uRam83275b50;
  if (uVar13 == 0) {
    uVar13 = fn_8265C940(0x324,0x64800000);
    bVar15 = (uVar13 == 0) << 1;
    if (uVar13 == 0) {
      return 0;
    }
    RtlInitializeCriticalSection(uVar13);
    *(undefined4 *)((int)uVar13 + 0x1c) = 0x1800;
    *(undefined4 *)((int)uVar13 + 800) = 0x55555555;
    do {
      uVar1 = uRam83275b50;
      if (uRam83275b50 != 0) {
        if (in_RESERVE != '\0') {
          uRam83275b50 = storeWordConditionalIndexed((ulonglong)uRam83275b50,0,0xffffffff83275b50);
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam83275b50 = storeWordConditionalIndexed(uVar13,0,0xffffffff83275b50);
        bVar15 = 2;
      }
    } while (!(bool)(bVar15 >> 1 & 1));
    if (uVar1 != 0) {
      fn_8265C990(uVar13,0x64800000);
      uVar13 = (ulonglong)uRam83275b50;
    }
  }
  RtlEnterCriticalSection(uVar13);
  uVar1 = *(uint *)((int)uVar13 + 0x1c);
  lVar12 = -1;
  if ((param_1 & 0xffffffff) <= (ulonglong)uVar1) {
    uVar7 = 0;
    lVar14 = 0;
    uVar3 = 0xffffffffffffffff;
    uVar4 = uVar13 + 800;
    while (uVar11 = ((uVar7 & 0xffffffff) >> 3 & 0x1ffffffc) + uVar13 + 0x20,
          (uVar11 & 0xffffffff) != (uVar4 & 0xffffffff)) {
      uVar9 = *(uint *)uVar11;
      lVar5 = LZCOUNT(0xffffffffU >> ((uint)uVar7 & 0x1f) & ~uVar9);
      if (lVar5 == 0x20) {
        do {
          uVar11 = uVar11 + 4;
          uVar9 = *(uint *)uVar11;
        } while (uVar9 == 0xffffffff);
        if ((uVar11 & 0xffffffff) == (uVar4 & 0xffffffff)) break;
        lVar5 = LZCOUNT(~uVar9);
      }
      lVar8 = LZCOUNT(0xffffffffU >> (int)lVar5 & uVar9);
      iVar2 = (int)uVar11;
      iVar6 = iVar2;
      if (lVar8 == 0x20) {
        uVar11 = uVar11 + 4;
        iVar10 = *(int *)(iVar2 + 4);
        while (iVar6 = (int)uVar11, iVar10 == 0) {
          uVar11 = uVar11 + 4;
          iVar10 = *(int *)uVar11;
        }
        if ((uVar11 & 0xffffffff) == (uVar4 & 0xffffffff)) {
          lVar8 = 0;
        }
        else {
          lVar8 = LZCOUNT(iVar10);
        }
      }
      iVar10 = (int)(uVar13 + 0x20);
      lVar5 = ((ulonglong)(uint)(iVar2 - iVar10 >> 2) & 0x7ffffff) * 0x20 + lVar5;
      uVar7 = (((ulonglong)(uint)(iVar6 - iVar10 >> 2) & 0x7ffffff) * 0x20 - lVar5) + lVar8;
      if (uVar7 == 0) break;
      if (((param_1 & 0xffffffff) <= (uVar7 & 0xffffffff)) &&
         ((uVar7 & 0xffffffff) < (uVar3 & 0xffffffff))) {
        uVar3 = uVar7;
        lVar14 = lVar5;
      }
      uVar7 = lVar5 + uVar7;
    }
    if ((int)uVar3 != -1) {
      *(uint *)((int)uVar13 + 0x1c) = uVar1 - (int)param_1;
      fn_8264D380(uVar13,lVar14,lVar14 + param_1,1);
      lVar12 = lVar14;
    }
  }
  RtlLeaveCriticalSection(uVar13);
  lVar14 = -lVar12 + -1;
  *param_2 = (int)lVar12;
  return lVar14 + (-(ulonglong)(lVar14 == 0) - (-lVar12 + -2));
}

