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
extern int fn_8305FFB8();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_83066770();
extern int fn_83066788();


void fn_83060018(undefined8 param_1,uint *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,int *param_7)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar7;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  
  uVar2 = *param_2;
  iVar18 = *param_7;
  bVar12 = false;
  iVar19 = 0;
  if (0 < *param_6) {
    do {
      lVar6 = fn_83066788(param_1,iVar18 + 8,param_3 * 0xc + (ulonglong)uVar2);
      uVar17 = (lVar6 + -1) - (lVar6 + -2 + (ulonglong)(lVar6 + -1 == 0));
      *(char *)(iVar18 + 0x2c) = (char)uVar17;
      if ((uVar17 & 0xff) != 0) {
        bVar12 = true;
      }
      iVar19 = iVar19 + 1;
      iVar18 = *(int *)(iVar18 + 0x28);
    } while (iVar19 < *param_6);
  }
  if (bVar12) {
    iVar19 = 0;
    iVar18 = *param_7;
    iVar14 = 0;
    iVar13 = 0;
    bVar12 = false;
    iVar11 = 0;
    iVar16 = -1;
    iVar15 = 0;
    if (0 < *param_6) {
      do {
        if (*(char *)(iVar18 + 0x2c) != '\0') {
          iVar16 = 0;
          break;
        }
        iVar15 = iVar15 + 1;
        iVar18 = *(int *)(iVar18 + 0x28);
      } while (iVar15 < *param_6);
    }
    iVar15 = 0;
    if (0 < *param_6) {
      do {
        if (*(char *)(iVar18 + 0x2c) == '\0') {
          cVar1 = *(char *)(*(int *)(iVar18 + 0x28) + 0x2c);
          if (bVar12) {
            iVar16 = iVar16 + 1;
            if (cVar1 != '\0') {
              if (iVar11 < iVar16) {
LAB_83060170:
                iVar11 = iVar16;
                iVar13 = iVar18;
                iVar14 = iVar19;
              }
LAB_83060174:
              iVar16 = 0;
              bVar12 = false;
            }
          }
          else {
            bVar12 = true;
            iVar16 = 1;
            iVar19 = iVar18;
            if (cVar1 != '\0') {
              if (iVar11 < 1) {
                iVar16 = 1;
                goto LAB_83060170;
              }
              goto LAB_83060174;
            }
          }
        }
        iVar15 = iVar15 + 1;
        iVar18 = *(int *)(iVar18 + 0x28);
      } while (iVar15 < *param_6);
    }
    puVar10 = *(uint **)(iVar13 + 0x28);
    puVar3 = *(uint **)(iVar14 + 0x24);
    puVar8 = (uint *)fn_83065B90(0x30);
    puVar9 = (uint *)fn_83065B90(0x30);
    uVar2 = *puVar10;
    puVar8[1] = (uint)param_3;
    *puVar8 = uVar2;
    *puVar9 = (uint)param_3;
    puVar9[1] = puVar3[1];
    puVar8[9] = puVar10[9];
    puVar8[10] = (uint)puVar9;
    puVar9[9] = (uint)puVar8;
    puVar9[10] = puVar3[10];
    uVar2 = *puVar8;
    uVar4 = *param_2;
    uVar5 = puVar8[1];
    uVar7 = fn_83066770(param_4);
    fn_8305FFB8(param_2,uVar7,(ulonglong)uVar2 * 0xc + (ulonglong)uVar4,
                      (ulonglong)uVar5 * 0xc + (ulonglong)uVar4,puVar8 + 2);
    uVar2 = puVar9[1];
    uVar4 = *puVar9;
    uVar5 = *param_2;
    uVar7 = fn_83066770(param_4);
    fn_8305FFB8(param_2,uVar7,(ulonglong)uVar4 * 0xc + (ulonglong)uVar5,
                      (ulonglong)uVar2 * 0xc + (ulonglong)uVar5,puVar9 + 2);
    *(uint **)(puVar10[9] + 0x28) = puVar8;
    *(uint **)(puVar3[10] + 0x24) = puVar9;
    *param_6 = *param_6 + 2;
    do {
      puVar9 = (uint *)0x0;
      if (puVar10 != puVar3) {
        puVar9 = (uint *)puVar10[10];
      }
      puVar10 = puVar9;
      fn_83065BA8();
      *param_6 = *param_6 + -1;
    } while (puVar10 != (uint *)0x0);
    *param_7 = (int)puVar8;
  }
  return;
}

