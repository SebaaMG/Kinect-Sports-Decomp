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
extern int fn_829B7788();
extern int fn_829BE9D0();
extern int fn_829BE9E8();
extern int fn_829BEB20();
extern int fn_829BEB28();
extern int fn_829BEB38();
extern int fn_829BEC10();
extern int fn_829BEC78();
extern int fn_829BEF68();
extern int fn_829BEF70();


void fn_829BEF78(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar9;
  undefined8 uVar8;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  
  puVar9 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x72] = (int)puVar9;
  iVar16 = 0;
  puVar9[2] = 0;
  *puVar9 = fn_829BE9D0;
  puVar9[1] = fn_829BE9E8;
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  if ((param_1[0x13] == 0) || (bVar7 = true, param_1[0x50] < 2)) {
    bVar7 = false;
  }
  if (0 < param_1[9]) {
    piVar17 = (int *)(param_1[0x37] + 0x24);
    puVar18 = puVar9 + 0xd;
    do {
      uVar13 = piVar17[-7] * *piVar17;
      uVar2 = param_1[0x50];
      uVar12 = (ulonglong)uVar2;
      uVar3 = param_1[0x4e];
      uVar4 = param_1[0x4f];
      uVar11 = piVar17[-6] * *piVar17;
      uVar1 = (int)uVar11 / (int)uVar2;
      uVar15 = (ulonglong)(int)uVar1;
      puVar18[0xc] = uVar1;
      trapWord(6,uVar12,0);
      uVar2 = (int)uVar13 / (int)uVar2;
      uVar14 = (ulonglong)(int)uVar2;
      trapWord(6,uVar12,0);
      trapWord(5,uVar12 & ~((((ulonglong)uVar13 & 0x7fffffff) << 1 | (ulonglong)(uVar13 >> 0x1f)) -
                           1),0xffff);
      trapWord(5,uVar12 & ~((((ulonglong)uVar11 & 0x7fffffff) << 1 | (ulonglong)(uVar11 >> 0x1f)) -
                           1),0xffff);
      if (piVar17[3] == 0) {
        *puVar18 = fn_829BEB28;
      }
      else if ((uVar2 == uVar3) && (uVar1 == uVar4)) {
        *puVar18 = fn_829BEB20;
      }
      else {
        if (uVar2 << 1 == uVar3) {
          if (uVar1 == uVar4) {
            if ((bVar7) && (2 < (uint)piVar17[1])) {
              *puVar18 = fn_829BEF68;
            }
            else {
              *puVar18 = fn_829BEC10;
            }
          }
          else {
            if ((uVar2 << 1 != uVar3) || (uVar1 << 1 != uVar4)) goto LAB_829bf158;
            if ((bVar7) && (2 < (uint)piVar17[1])) {
              *puVar18 = fn_829BEF70;
              puVar9[2] = 1;
            }
            else {
              *puVar18 = fn_829BEC78;
            }
          }
        }
        else {
LAB_829bf158:
          trapWord(6,uVar14,0);
          trapWord(5,uVar14 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f))
                               - 1),0xffff);
          if ((ulonglong)uVar3 == (longlong)((int)uVar3 / (int)uVar2) * (longlong)(int)uVar2) {
            trapWord(6,uVar15,0);
            trapWord(5,uVar15 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)
                                  ) - 1),0xffff);
            if ((ulonglong)uVar4 == (longlong)((int)uVar4 / (int)uVar1) * (longlong)(int)uVar1) {
              *puVar18 = fn_829BEB38;
              *(char *)((int)puVar9 + iVar16 + 0x8c) = (char)((int)uVar3 / (int)uVar2);
              trapWord(6,uVar14,0);
              *(char *)((int)puVar9 + iVar16 + 0x96) = (char)((int)uVar4 / (int)uVar1);
              trapWord(6,uVar15,0);
              trapWord(5,uVar14 & ~((((ulonglong)uVar3 & 0x7fffffff) << 1 |
                                    (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
              trapWord(5,uVar15 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 |
                                    (ulonglong)(uVar4 >> 0x1f)) - 1),0xffff);
              goto LAB_829bf20c;
            }
          }
          *(undefined4 *)(*param_1 + 0x14) = 0x26;
          (**(code **)*param_1)(param_1);
        }
LAB_829bf20c:
        iVar5 = param_1[1];
        iVar6 = param_1[0x4f];
        uVar8 = fn_829B7788(param_1[0x1c],param_1[0x4e]);
        uVar10 = (**(code **)(iVar5 + 8))(param_1,1,uVar8,iVar6);
        puVar18[-10] = uVar10;
      }
      iVar16 = iVar16 + 1;
      puVar18 = puVar18 + 1;
      piVar17 = piVar17 + 0x15;
    } while (iVar16 < param_1[9]);
  }
  return;
}

