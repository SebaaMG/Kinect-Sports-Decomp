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
extern unsigned int *auStack_50;
extern int fn_82A1E228();
extern int fn_82A20618();
extern int fn_82A22760();
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219CB8;
extern unsigned int lbl_83219CC0;
extern unsigned int uRam83219cc4;
extern unsigned int uRam83219cc8;


void fn_82A228A8(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong auStack_50 [10];
  
  uVar12 = 0;
  uVar13 = 0;
  uVar17 = 0;
  uVar15 = 0;
  uVar16 = 0;
  fn_82A1E228(auStack_50);
  uVar11 = lbl_8315D2F0 & 0xffffffff;
  piVar1 = *(int **)(lbl_83219B94 + 0x2c);
  uVar14 = uVar13;
  uVar7 = uVar16;
  iVar6 = lbl_83219B94;
  if (piVar1 != (int *)(lbl_83219B94 + 0x2c)) {
    do {
      uVar2 = piVar1[7];
      uVar7 = uVar16;
      if ((uVar2 & 0x80) == 0) {
        uVar5 = (ulonglong)*(byte *)((int)piVar1 + 0x1a);
        trapWord(6,uVar5,0);
        uVar14 = (ulonglong)((uint)piVar1[2] >> 10);
        uVar10 = (uVar2 >> 8) / uVar5;
        if ((uVar2 & 0x40) == 0) {
          uVar7 = uVar10 + uVar16;
          if (((uVar7 & 0xffffffff) < (uVar16 & 0xffffffff)) || ((uVar7 & 0xffffffff) < uVar10)) {
            uVar7 = 0xffffffffffffffff;
          }
          uVar12 = uVar14 + uVar12;
        }
        else {
          uVar16 = uVar10 + uVar15;
          if (((uVar16 & 0xffffffff) < (uVar15 & 0xffffffff)) || ((uVar16 & 0xffffffff) < uVar10)) {
            uVar16 = 0xffffffffffffffff;
          }
          uVar15 = uVar16;
          if (0x13 < *(byte *)(piVar1 + 6)) {
            uVar17 = uVar14 + uVar17;
            trapWord(6,(ulonglong)uRam83219cc8,0);
            if ((ulonglong)(uint)piVar1[2] / (ulonglong)uRam83219cc8 + (ulonglong)(uint)piVar1[4] +
                (ulonglong)uRam83219cc4 <= (auStack_50[0] / 10000000 & 0xffffffff) - uVar11) {
              uVar13 = uVar14 + uVar13;
            }
          }
        }
        if (uVar5 < 0xff) {
          *(byte *)((int)piVar1 + 0x1a) = *(byte *)((int)piVar1 + 0x1a) + 1;
          iVar6 = lbl_83219B94;
        }
      }
      piVar1 = (int *)*piVar1;
      uVar16 = uVar7;
    } while (piVar1 != (int *)(iVar6 + 0x2c));
    uVar14 = uVar13;
    if ((uVar13 & 0xffffffff) != 0) goto LAB_82a229f8;
  }
  uVar13 = 1;
LAB_82a229f8:
  if ((uVar17 & 0xffffffff) >> 2 <= (uVar14 & 0xffffffff)) {
    trapWord(6,uVar13,0);
    uVar11 = ((uVar12 & 0xffffff) << 8) / (uVar13 & 0xffffffff);
    trapWord(6,uVar11,0);
    if ((uVar15 & 0xffffffff) >> 8 < (uVar7 & 0xffffffff) / uVar11) {
      auStack_50[0] = 0;
      lbl_83219CB8 = fn_82A22760(((uVar14 & 0xffffffff) / 3 & 0x3fffff) << 10,auStack_50,0x14,1,0)
      ;
      uVar2 = lbl_83219CC0;
      lVar8 = 0;
      iVar6 = *(int *)(lbl_83219B94 + 0x30);
      iVar9 = lbl_83219B94;
      if (iVar6 != lbl_83219B94 + 0x2c) {
        do {
          uVar3 = *(uint *)(iVar6 + 0x1c);
          if (((((uVar3 & 0x80) == 0) && ((uVar3 & 0x40) == 0)) &&
              ((longlong)(ulonglong)*(uint *)(iVar6 + 8) <= (longlong)auStack_50[0])) &&
             (((uVar3 & 2) == 0 && (uVar2 <= *(uint *)(iVar6 + 0x10))))) {
            lVar8 = (ulonglong)*(uint *)(iVar6 + 8) + lVar8;
            *(uint *)(iVar6 + 0x1c) = uVar3 | 2;
            iVar9 = lbl_83219B94;
            if ((longlong)auStack_50[0] <= lVar8) break;
          }
          iVar6 = *(int *)(iVar6 + 4);
        } while (iVar6 != iVar9 + 0x2c);
      }
      fn_82A20618(2);
      lbl_83219CC0 = 0;
      iVar6 = lbl_83219B94;
      for (puVar4 = *(undefined4 **)(lbl_83219B94 + 0x2c); puVar4 != (undefined4 *)(iVar6 + 0x2c);
          puVar4 = (undefined4 *)*puVar4) {
        uVar2 = puVar4[7];
        if ((uVar2 & 0x80) == 0) {
          puVar4[7] = uVar2 >> 1 & 0x7fffff00 | uVar2 & 0xff;
          iVar6 = lbl_83219B94;
        }
      }
    }
  }
  return;
}

