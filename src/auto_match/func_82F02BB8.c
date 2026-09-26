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
extern unsigned int lbl_82161138;
extern unsigned int lbl_82161150;


void fn_82F02BB8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  iVar13 = *(int *)(param_1 + 0x6a4);
  iVar2 = (*(int *)(param_1 + 0x10) + iVar13) * 4;
  iVar1 = *(int *)(&lbl_82161138 + iVar2);
  iVar2 = *(int *)(&lbl_82161150 + iVar2);
  iVar8 = *(int *)((iVar13 + 0x14) * 0x58 + param_1);
  iVar13 = iVar13 * 0x58 + param_1;
  uVar16 = *(uint *)(iVar13 + 0x6a8);
  uVar15 = *(uint *)(iVar13 + 0x6b0);
  iVar13 = *(int *)(iVar13 + 0x6e4);
  if (iVar2 == 2) {
    uVar16 = uVar16 + 0x1f & 0xffffffe0;
  }
  if (iVar1 == 2) {
    uVar15 = uVar15 + 0x1f & 0xffffffe0;
  }
  iVar3 = (int)uVar16 >> 1;
  iVar4 = (int)uVar15 >> 1;
  iVar7 = param_5;
  iVar14 = param_6;
  iVar6 = param_7;
  if (iVar2 == 2) {
    (**(code **)(param_1 + 0x818))(param_2,param_3,param_4,param_5,param_6,param_7,uVar16,uVar15);
    iVar7 = param_2;
    param_2 = param_5;
    iVar14 = param_3;
    param_3 = param_6;
    iVar6 = param_4;
    param_4 = param_7;
  }
  iVar10 = param_5;
  iVar11 = param_6;
  iVar12 = param_7;
  if (iVar1 == 2) {
    (**(code **)(param_1 + 0x81c))(param_2,param_3,param_4,iVar7,iVar14,iVar6,uVar16,uVar15);
    iVar10 = iVar7;
    iVar11 = iVar14;
    iVar12 = iVar6;
  }
  iVar7 = 0;
  if (0 < (int)uVar15) {
    do {
      iVar14 = 0;
      if (0 < (int)uVar16) {
        puVar9 = (undefined1 *)(param_5 + -1);
        do {
          puVar5 = (undefined1 *)(iVar14 + iVar10);
          iVar14 = iVar14 + iVar2;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar5;
        } while (iVar14 < (int)uVar16);
      }
      iVar7 = iVar7 + iVar1;
      iVar10 = iVar1 * iVar8 + iVar10;
      param_5 = *(int *)(param_1 + 0x564) + param_5;
    } while (iVar7 < (int)uVar15);
  }
  iVar8 = 0;
  if (0 < iVar4) {
    do {
      iVar7 = 0;
      if (0 < iVar3) {
        puVar9 = (undefined1 *)(param_6 + -1);
        do {
          puVar5 = (undefined1 *)(iVar7 + iVar11);
          iVar7 = iVar7 + iVar2;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar5;
        } while (iVar7 < iVar3);
      }
      iVar8 = iVar8 + iVar1;
      iVar11 = iVar1 * iVar13 + iVar11;
      param_6 = *(int *)(param_1 + 0x568) + param_6;
    } while (iVar8 < iVar4);
  }
  iVar8 = 0;
  if (0 < iVar4) {
    do {
      iVar7 = 0;
      if (0 < iVar3) {
        puVar9 = (undefined1 *)(param_7 + -1);
        do {
          puVar5 = (undefined1 *)(iVar7 + iVar12);
          iVar7 = iVar7 + iVar2;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar5;
        } while (iVar7 < iVar3);
      }
      iVar8 = iVar8 + iVar1;
      iVar12 = iVar1 * iVar13 + iVar12;
      param_7 = *(int *)(param_1 + 0x568) + param_7;
    } while (iVar8 < iVar4);
  }
  return;
}

