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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))


int fn_82A3E2B0(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  short sVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar15;
  int iVar14;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  int *piVar19;
  undefined1 *puVar20;
  
  puVar4 = (undefined1 *)param_1[0xac2];
  iVar5 = *param_1;
  param_3 = param_2 + param_3;
  uVar16 = (ulonglong)*(byte *)(param_1 + 0xbad);
  uVar18 = param_1[0xbac];
  puVar20 = (undefined1 *)param_1[0xac1];
  piVar19 = param_1 + 3;
  while( true ) {
    if (param_3 <= param_2) {
      *(char *)(param_1 + 0xbad) = (char)uVar16;
      param_1[0xbac] = uVar18;
      param_1[0xac1] = (int)puVar20;
      return param_2;
    }
    sVar3 = *(short *)((int)param_1 + (uVar18 >> 0x15 & 0x7fe) + 0x18);
    uVar9 = (ulonglong)sVar3;
    if (sVar3 < 0) {
      uVar13 = 0x200000;
      do {
        uVar11 = (uint)uVar13;
        uVar13 = uVar13 >> 1;
        sVar3 = *(short *)((int)param_1 +
                          (int)((((ulonglong)((uVar11 & uVar18) == 0) ^ 1) +
                                 (uVar9 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0xe3c);
        uVar9 = (ulonglong)sVar3;
      } while (sVar3 < 0);
    }
    if (puVar4 <= puVar20) break;
    bVar2 = *(byte *)((int)param_1 + (int)uVar9 + 0xa18);
    cVar17 = (char)uVar16 - bVar2;
    uVar18 = uVar18 << (bVar2 & 0x3f);
    uVar16 = (ulonglong)cVar17;
    if ((longlong)uVar16 < 1) {
      puVar6 = puVar20 + 1;
      uVar1 = *puVar20;
      puVar20 = puVar20 + 2;
      uVar16 = (ulonglong)(char)(cVar17 + '\x10');
      uVar18 = (uint)CONCAT11(*puVar6,uVar1) << (-(int)cVar17 & 0x3fU) | uVar18;
    }
    uVar9 = uVar9 - 0x100;
    if ((longlong)uVar9 < 0) {
      iVar14 = param_1[1];
      *(char *)(iVar5 + param_2) = (char)uVar9;
      *(char *)(iVar14 + iVar5 + param_2) = (char)uVar9;
      param_2 = param_2 + 1;
    }
    else {
      uVar13 = uVar9 & 7;
      if ((int)uVar13 == 7) {
        sVar3 = *(short *)((int)param_1 + (uVar18 >> 0x17 & 0x1fe) + 0x818);
        uVar13 = (ulonglong)sVar3;
        if (sVar3 < 0) {
          uVar10 = 0x800000;
          do {
            uVar11 = (uint)uVar10;
            uVar10 = uVar10 >> 1;
            sVar3 = *(short *)((int)param_1 +
                              (int)((((ulonglong)((uVar11 & uVar18) == 0) ^ 1) +
                                     (uVar13 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0x233c);
            uVar13 = (ulonglong)sVar3;
          } while (sVar3 < 0);
        }
        bVar2 = *(byte *)((int)param_1 + (int)uVar13 + 0xcb8);
        cVar17 = (char)uVar16 - bVar2;
        uVar18 = uVar18 << (bVar2 & 0x3f);
        uVar16 = (ulonglong)cVar17;
        if ((longlong)uVar16 < 1) {
          puVar6 = puVar20 + 1;
          uVar1 = *puVar20;
          puVar20 = puVar20 + 2;
          uVar16 = (ulonglong)(char)(cVar17 + '\x10');
          uVar18 = (uint)CONCAT11(*puVar6,uVar1) << (-(int)cVar17 & 0x3fU) | uVar18;
        }
        uVar13 = uVar13 + 7;
      }
      cVar15 = (char)uVar16;
      cVar17 = (char)((int)uVar9 >> 3);
      uVar9 = (ulonglong)cVar17;
      if (cVar17 < '\x03') {
        iVar7 = (int)((uVar9 & 0xffffffff) << 2);
        iVar14 = *(int *)(iVar7 + (int)piVar19);
        *(int *)(iVar7 + (int)piVar19) = *piVar19;
      }
      else {
        bVar2 = *(byte *)((int)param_1 + cVar17 + 0x2ee4);
        if (bVar2 < 3) {
          if (bVar2 == 0) {
            iVar14 = 1;
          }
          else {
            bVar2 = *(byte *)((int)param_1 + cVar17 + 0x2ee4);
            cVar15 = cVar15 - bVar2;
            uVar16 = (ulonglong)cVar15;
            uVar11 = uVar18 >> (0x20 - bVar2 & 0x3f);
            uVar18 = uVar18 << (bVar2 & 0x3f);
            if ((longlong)uVar16 < 1) {
              puVar6 = puVar20 + 1;
              uVar1 = *puVar20;
              puVar20 = puVar20 + 2;
              uVar16 = (ulonglong)(char)(cVar15 + '\x10');
              uVar18 = (uint)CONCAT11(*puVar6,uVar1) << (-(int)cVar15 & 0x3fU) | uVar18;
            }
            iVar14 = *(int *)((int)((uVar9 + 0xbc6 & 0xffffffff) << 2) + (int)param_1) + uVar11;
          }
        }
        else {
          if (bVar2 == 3) {
            uVar11 = 0;
          }
          else {
            bVar2 = *(byte *)((int)param_1 + cVar17 + 0x2ee4);
            cVar17 = cVar15 - bVar2;
            cVar15 = cVar17 + '\x03';
            uVar11 = uVar18 >> (0x23 - bVar2 & 0x3f);
            uVar18 = uVar18 << (bVar2 - 3 & 0x3f);
            if (cVar15 < '\x01') {
              puVar6 = puVar20 + 1;
              iVar14 = (int)cVar15;
              uVar1 = *puVar20;
              cVar15 = cVar17 + '\x13';
              puVar20 = puVar20 + 2;
              uVar18 = (uint)CONCAT11(*puVar6,uVar1) << (-iVar14 & 0x3fU) | uVar18;
            }
          }
          cVar17 = *(char *)((int)param_1 + (uVar18 >> 0x19) + 0xdb4);
          bVar2 = *(byte *)((int)param_1 + cVar17 + 0xe34);
          cVar15 = cVar15 - bVar2;
          uVar18 = uVar18 << (bVar2 & 0x3f);
          uVar16 = (ulonglong)cVar15;
          if ((longlong)uVar16 < 1) {
            puVar6 = puVar20 + 1;
            uVar1 = *puVar20;
            puVar20 = puVar20 + 2;
            uVar16 = (ulonglong)(char)(cVar15 + '\x10');
            uVar18 = (uint)CONCAT11(*puVar6,uVar1) << (-(int)cVar15 & 0x3fU) | uVar18;
          }
          iVar14 = *(int *)((int)((uVar9 + 0xbc6 & 0xffffffff) << 2) + (int)param_1) + uVar11 * 8 +
                   (int)cVar17;
        }
        param_1[5] = param_1[4];
        param_1[4] = *piVar19;
      }
      uVar11 = param_1[2];
      lVar8 = uVar13 + 2;
      *piVar19 = iVar14;
      uVar12 = param_2 - iVar14;
      do {
        uVar1 = *(undefined1 *)((uVar12 & uVar11) + iVar5);
        *(undefined1 *)(iVar5 + param_2) = uVar1;
        if (param_2 < 0x101) {
          *(undefined1 *)(param_1[1] + iVar5 + param_2) = uVar1;
        }
        lVar8 = lVar8 + -1;
        param_2 = param_2 + 1;
        uVar12 = uVar12 + 1;
      } while (0 < lVar8);
    }
  }
  return -1;
}

