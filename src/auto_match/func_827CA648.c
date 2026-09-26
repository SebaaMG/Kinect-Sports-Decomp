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
extern int fn_827C1AC8();
extern int fn_827CA0E8();
extern int fn_827CA100();
extern int fn_827CA238();
extern int fn_827CA240();
extern int fn_827CA250();
extern int fn_827CA328();
extern int fn_827CA390();
extern int fn_827CA430();
extern int fn_827CA500();


void fn_827CA648(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar10;
  undefined8 uVar9;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  code *pcVar19;
  int iVar20;
  int *piVar21;
  undefined4 *puVar22;
  
  puVar10 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x68] = (int)puVar10;
  *puVar10 = fn_827CA0E8;
  puVar10[1] = fn_827CA100;
  *(undefined1 *)(puVar10 + 2) = 0;
  if (*(char *)((int)param_1 + 0x10a) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (bVar7 = true, param_1[0x46] < 2)) {
    bVar7 = false;
  }
  iVar20 = 0;
  if (0 < param_1[9]) {
    piVar21 = (int *)(param_1[0x31] + 0x24);
    puVar22 = puVar10 + 0xd;
    do {
      iVar2 = *piVar21;
      bVar8 = true;
      uVar3 = param_1[0x46];
      uVar14 = (ulonglong)uVar3;
      uVar16 = piVar21[-6] * iVar2;
      iVar4 = piVar21[-7];
      uVar5 = param_1[0x44];
      uVar6 = param_1[0x45];
      uVar1 = (int)uVar16 / (int)uVar3;
      uVar18 = (ulonglong)(int)uVar1;
      puVar22[0xc] = uVar1;
      uVar13 = (longlong)iVar4 * (longlong)iVar2;
      trapWord(5,uVar14 & ~((((ulonglong)uVar16 & 0x7fffffff) << 1 | (ulonglong)(uVar16 >> 0x1f)) -
                           1),0xffff);
      uVar12 = uVar14 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1);
      trapWord(6,uVar14,0);
      uVar3 = (int)uVar13 / (int)uVar3;
      uVar17 = (ulonglong)(int)uVar3;
      trapWord(6,uVar14,0);
      trapWord(5,uVar12,0xffff);
      if (*(char *)(piVar21 + 3) == '\0') {
        bVar8 = false;
        pcVar19 = fn_827CA240;
LAB_827ca81c:
        *puVar22 = pcVar19;
      }
      else {
        if ((uVar3 == uVar5) && (uVar1 == uVar6)) {
          bVar8 = false;
          pcVar19 = fn_827CA238;
          goto LAB_827ca81c;
        }
        if (uVar3 << 1 == uVar5) {
          if (uVar1 == uVar6) {
            if ((bVar7) && (2 < (uint)piVar21[1])) {
              pcVar19 = fn_827CA430;
            }
            else {
              pcVar19 = fn_827CA328;
            }
            goto LAB_827ca81c;
          }
          if ((uVar3 << 1 != uVar5) || (uVar1 << 1 != uVar6)) goto LAB_827ca824;
          if ((!bVar7) || ((uint)piVar21[1] < 3)) {
            pcVar19 = fn_827CA390;
            goto LAB_827ca81c;
          }
          *puVar22 = fn_827CA500;
          *(undefined1 *)(puVar10 + 2) = 1;
        }
        else {
LAB_827ca824:
          uVar14 = uVar17 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) -
                             1);
          trapWord(6,uVar17,0);
          lVar15 = (ulonglong)uVar5 - (longlong)((int)uVar5 / (int)uVar3) * (longlong)(int)uVar3;
          trapWord(5,uVar14,0xffff);
          if (lVar15 == 0) {
            uVar14 = uVar18 & ~((((ulonglong)uVar6 & 0x7fffffff) << 1 | (ulonglong)(uVar6 >> 0x1f))
                               - 1);
            trapWord(6,uVar18,0);
            lVar15 = (ulonglong)uVar6 - (longlong)((int)uVar6 / (int)uVar1) * (longlong)(int)uVar1;
            trapWord(5,uVar14,0xffff);
            if (lVar15 == 0) {
              trapWord(6,uVar17,0);
              trapWord(6,uVar18,0);
              *puVar22 = fn_827CA250;
              *(char *)((int)puVar10 + iVar20 + 0x8c) = (char)((int)uVar5 / (int)uVar3);
              trapWord(5,uVar17 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 |
                                    (ulonglong)(uVar5 >> 0x1f)) - 1),0xffff);
              trapWord(5,uVar18 & ~((((ulonglong)uVar6 & 0x7fffffff) << 1 |
                                    (ulonglong)(uVar6 >> 0x1f)) - 1),0xffff);
              *(char *)((int)puVar10 + iVar20 + 0x96) = (char)((int)uVar6 / (int)uVar1);
              goto LAB_827ca8dc;
            }
          }
          *(undefined4 *)(*param_1 + 0x14) = 0x26;
          (**(code **)*param_1)(param_1,uVar12,uVar13,lVar15,uVar14);
        }
      }
LAB_827ca8dc:
      if (bVar8) {
        iVar2 = param_1[1];
        iVar4 = param_1[0x45];
        uVar9 = fn_827C1AC8(param_1[0x17],param_1[0x44]);
        uVar11 = (**(code **)(iVar2 + 8))(param_1,1,uVar9,iVar4);
        puVar22[-10] = uVar11;
      }
      iVar20 = iVar20 + 1;
      puVar22 = puVar22 + 1;
      piVar21 = piVar21 + 0x15;
    } while (iVar20 < param_1[9]);
  }
  return;
}

