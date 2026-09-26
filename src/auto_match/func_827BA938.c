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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_827BA3C8();
extern int fn_827BA7C0();
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_827BA938(int param_1,int param_2,ulonglong param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 uVar15;
  int iVar14;
  ulonglong uVar16;
  short sVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  puVar25 = (uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar15 = (undefined2)((-(ulonglong)*(uint *)(param_1 + 0x6c) & 0xffffffff) << 2);
  uStack_80 = CONCAT22(uVar15,uVar15);
  fn_827BA7C0(puVar25,&uStack_80);
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x6c);
  lVar11 = -0x7fff;
  uVar10 = uVar16 + param_3 + param_5;
  uVar9 = uVar16 + param_3 + param_6;
  iVar26 = (int)param_3;
  trapWord(6,param_3,0);
  trapWord(6,param_3,0);
  trapWord(5,param_3 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff);
  lVar21 = (longlong)((int)uVar10 / iVar26) * (longlong)iVar26 - uVar16;
  trapWord(5,param_3 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
  lVar20 = (longlong)((int)uVar9 / iVar26) * (longlong)iVar26 - uVar16;
  if (param_2 == 1) {
    sVar17 = *(short *)(param_1 + 0x58);
  }
  else {
    sVar17 = *(short *)(param_1 + 0x5a);
  }
  lVar18 = (longlong)sVar17;
  iVar14 = iVar26 + 1;
  uVar19 = 0;
  lVar23 = lVar18;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      iVar24 = (int)lVar23;
      bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + uVar19);
      iVar2 = (int)lVar11;
      if ((param_4 < iVar24) && (param_2 != 1)) {
        if ((bVar1 & 2) != 0) {
          bVar4 = false;
          iVar22 = (int)param_6;
          if (iVar22 != 0) {
            if ((iVar24 < iVar22) || (iVar14 + iVar22 <= iVar24)) {
              if ((iVar24 < (int)param_5) || (iVar14 + (int)param_5 <= iVar24)) goto LAB_827bab24;
              if (((iVar24 <= iVar14 + iVar2) ||
                  ((int)lVar21 <=
                   *(short *)(*(int *)((*puVar25 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x3c)) +
                              ((*puVar25 - 1) * 4 & 0xfc) + 2) + iVar26)) && (*puVar25 != 0)) {
                *puVar25 = *puVar25 - 1;
              }
              uVar15 = (undefined2)lVar21;
            }
            else {
              if (((iVar24 <= iVar14 + iVar2) ||
                  ((int)lVar20 <=
                   *(short *)(*(int *)((*puVar25 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x3c)) +
                              ((*puVar25 - 1) * 4 & 0xfc) + 2) + iVar26)) && (*puVar25 != 0)) {
                *puVar25 = *puVar25 - 1;
              }
              uVar15 = (undefined2)lVar20;
            }
            uStack_80 = CONCAT22((short)lVar23,uVar15);
            fn_827BA7C0(puVar25,&uStack_80);
            bVar4 = true;
            lVar11 = lVar23;
          }
LAB_827bab24:
          if (!bVar4) {
            trapWord(6,param_3,0);
            uVar9 = (ulonglong)*(uint *)(param_1 + 0x6c) + lVar23 + param_3;
            lVar13 = (longlong)((int)uVar9 / iVar26) * (longlong)iVar26 -
                     (ulonglong)*(uint *)(param_1 + 0x6c);
            trapWord(5,param_3 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
            if (((iVar24 <= iVar14 + (int)lVar11) ||
                ((int)lVar13 <=
                 *(short *)(*(int *)((*puVar25 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x3c)) +
                            ((*puVar25 - 1) * 4 & 0xfc) + 2) + iVar26)) && (*puVar25 != 0)) {
              *puVar25 = *puVar25 - 1;
            }
            uVar15 = (undefined2)lVar13;
LAB_827bac24:
            uStack_80 = CONCAT22((short)lVar23,uVar15);
            fn_827BA7C0(puVar25,&uStack_80);
            lVar11 = lVar23;
          }
        }
      }
      else if (((bVar1 & 1) != 0) && (iVar14 + iVar2 < iVar24)) {
        trapWord(6,param_3,0);
        uVar9 = (longlong)(iVar26 >> 1) + (ulonglong)(iVar26 < 0 && (param_3 & 1) != 0) +
                (ulonglong)*(uint *)(param_1 + 0x6c) + lVar23 + 1;
        lVar13 = (longlong)((int)uVar9 / iVar26) * (longlong)iVar26 -
                 (ulonglong)*(uint *)(param_1 + 0x6c);
        trapWord(5,param_3 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        lVar11 = lVar23;
        if ((int)*(short *)(*(int *)((*puVar25 - 1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x3c)) +
                            ((*puVar25 - 1) * 4 & 0xfc) + 2) != (int)lVar13) {
          uVar15 = (undefined2)lVar13;
          goto LAB_827bac24;
        }
      }
      uVar19 = uVar19 + 1;
      lVar23 = lVar23 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x28));
  }
  sVar3 = (short)*(undefined4 *)(param_1 + 0x6c) << 2;
  uStack_80 = CONCAT22(sVar3,sVar3);
  fn_827BA7C0(puVar25,&uStack_80);
  piVar27 = (int *)(param_1 + 0x40);
  if (param_2 != 1) {
    piVar27 = (int *)(param_1 + 0x4c);
  }
  iVar26 = *(int *)(param_1 + 0x28);
  fn_827BA3C8(piVar27,iVar26,0);
  piVar27[1] = iVar26;
  uVar19 = 2;
  uVar12 = 0;
  uVar8 = ((undefined4 *)**(int **)(param_1 + 0x3c))[1];
  uStack_7c = *(undefined4 *)**(int **)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar26 = 0;
    uStack_80 = uVar8;
    do {
      iVar14 = (int)lVar18;
      uVar6 = uVar8;
      if (((((U64)(uStack_80) >> 0) & 0xFFFF) <= iVar14) && (uVar19 < *puVar25)) {
        uVar7 = uVar19 >> 4;
        uVar5 = uVar19 & 0x3f;
        uVar19 = uVar19 + 1;
        uStack_80 = *(undefined4 *)
                     (*(int *)((uVar7 & 0xffffffc) + *(int *)(param_1 + 0x3c)) + uVar5 * 4);
        uVar6 = uStack_80;
        uStack_7c = uVar8;
      }
      uVar8 = uVar6;
      uVar12 = uVar12 + 1;
      lVar18 = lVar18 + 1;
      uVar7 = ((int)(((U64)(uStack_80) >> 16) & 0xFFFF) - (int)(((U64)(uStack_7c) >> 16) & 0xFFFF)) * (iVar14 - (((U64)(uStack_7c) >> 0) & 0xFFFF));
      uVar9 = (longlong)(((U64)(uStack_80) >> 0) & 0xFFFF) - (longlong)(((U64)(uStack_7c) >> 0) & 0xFFFF);
      trapWord(6,uVar9,0);
      *(short *)(iVar26 + *piVar27) = ((short)((int)uVar7 / (int)uVar9) - sVar17) + (((U64)(uStack_7c) >> 16) & 0xFFFF);
      trapWord(5,uVar9 & ~((((ulonglong)uVar7 & 0x7fffffff) << 1 | (ulonglong)(uVar7 >> 0x1f)) - 1),
               0xffff);
      iVar26 = iVar26 + 2;
    } while (uVar12 < *(uint *)(param_1 + 0x28));
  }
  return;
}

