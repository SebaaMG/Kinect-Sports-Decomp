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
extern unsigned char bRam83187d17;
extern unsigned char bRam83187d30;
extern int fn_82E2DA40();
extern int fn_82F63CA0();


longlong fn_82E2E298(ulonglong param_1,ulonglong param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar18 = param_1;
  if ((param_1 & 0xffffffff) == 0) {
    lVar15 = -0x7fff0001;
  }
  else {
    do {
      if ((param_2 & 0xffffffff) < (ulonglong)(*(int *)((int)uVar18 + 4) + 0x14)) break;
      uVar18 = (ulonglong)*(uint *)((int)uVar18 + 100);
    } while (uVar18 != 0);
    uVar13 = *(undefined4 *)((int)param_1 + 0xc);
    lVar15 = 0;
    bVar9 = false;
    lVar14 = 0;
    if ((uVar18 & 0xffffffff) != 0) {
      do {
        iVar5 = (int)uVar18;
        uVar11 = (ulonglong)*(uint *)(iVar5 + 4);
        uVar17 = 0;
        bVar2 = uVar11 <= (param_2 & 0xffffffff);
        if (bVar2) {
          uVar17 = param_2 - uVar11;
        }
        lVar16 = 0;
        uVar4 = *(undefined4 *)((int)param_1 + 0xc);
        bVar1 = (*(byte *)(iVar5 + 0x12) & bRam83187d17) != 0;
        if (bVar1) {
          uVar4 = *(undefined4 *)(iVar5 + 0x60);
          lVar16 = uVar11 + 0x14;
        }
        fn_82F63CA0((uVar17 + 6 & 0x3fffffff) * 4 + uVar18,(uVar17 + 5 & 0x3fffffff) * 4 + uVar18,
                     (0x13 - uVar17 & 0x3fffffff) << 2);
        iVar12 = 2;
        uVar10 = (uint)((uVar17 & 0xffffffff) >> 3);
        iVar6 = uVar10 + iVar5;
        bVar3 = *(byte *)(iVar6 + 0x10);
        if (uVar10 < 3) {
          iVar7 = iVar5 + 0x10;
          do {
            *(byte *)(iVar7 + iVar12) = *(byte *)(iVar7 + iVar12) >> 1;
            if (iVar12 == 2) {
              *(byte *)(iVar5 + 0x12) = bRam83187d30 & *(byte *)(iVar5 + 0x12);
            }
            if (((int)uVar10 < iVar12) && ((*(byte *)(iVar12 + iVar5 + 0xf) & 1) != 0)) {
              *(byte *)(iVar7 + iVar12) = *(byte *)(iVar7 + iVar12) | 0x80;
            }
            iVar12 = iVar12 + -1;
          } while ((int)uVar10 <= iVar12);
        }
        if ((bVar2) && ((uVar17 & 7) != 0)) {
          iVar12 = (int)(uVar17 & 7);
          bVar8 = *(byte *)(-0x7ce782c0 - iVar12) & *(byte *)(iVar6 + 0x10);
          *(byte *)(iVar6 + 0x10) = bVar8;
          *(byte *)(iVar6 + 0x10) = *(byte *)(iVar12 + -0x7ce782d4) & bVar3 | bVar8;
        }
        if (bVar9) {
          lVar15 = fn_82E2DA40(param_1,lVar14,uVar13);
          if (lVar15 < 0) {
            return lVar15;
          }
          bVar9 = false;
        }
        if (bVar1) {
          bVar9 = true;
          lVar14 = lVar16;
          uVar13 = uVar4;
        }
        uVar18 = (ulonglong)*(uint *)(iVar5 + 100);
      } while (uVar18 != 0);
      if ((int)lVar15 < 0) {
        return lVar15;
      }
    }
    lVar15 = fn_82E2DA40(param_1,param_2,param_3);
    if ((-1 < lVar15) && (bVar9)) {
      lVar15 = fn_82E2DA40(param_1,lVar14,uVar13);
    }
  }
  return lVar15;
}

