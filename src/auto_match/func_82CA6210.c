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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA60E0();


undefined8
fn_82CA6210(int param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,int *param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  char cVar10;
  int iVar12;
  undefined8 uVar11;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int in_stack_00000054;
  char cStack_50;
  char cStack_4f;
  
  fn_82CA60E0(param_1,&cStack_50,param_2,param_3,param_4,param_5,param_6);
  puVar8 = *(ulonglong **)(param_1 + 0x54);
  if (param_7 == (int *)0x0) {
    *(undefined4 *)((int)puVar8 + 0x14) = 3;
    iVar16 = 0;
  }
  else {
    iVar12 = *param_7;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (ulonglong)*(byte *)(param_7 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar12);
    uVar13 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar15 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar13 - ((longlong)uVar15 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar12);
        uVar13 = (ulonglong)sVar7;
        iVar16 = (int)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar12 = *(int *)(puVar8 + 1);
      iVar16 = (int)(uVar13 & 0xf);
      *puVar8 = *puVar8 << (uVar13 & 0xf);
      *(int *)(puVar8 + 1) = iVar12 - iVar16;
      if (iVar12 < iVar16) {
        do {
          pbVar9 = *(byte **)((int)puVar8 + 0xc);
          if (pbVar9 < (byte *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar12 = *(int *)(puVar8 + 1);
            *(byte **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar12 + 0x30;
            *puVar8 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                         * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                       (ulonglong)bVar6 << ((longlong)-iVar12 & 0x7fU)) + *puVar8;
            goto LAB_82ca6344;
          }
          iVar12 = fn_82C4E3B0(puVar8);
        } while (iVar12 == 1);
        iVar16 = (int)sVar7 >> 4;
      }
      else {
LAB_82ca6344:
        iVar16 = (int)sVar7 >> 4;
      }
    }
  }
  puVar8 = *(ulonglong **)(param_1 + 0x54);
  if (*(int *)((int)puVar8 + 0x14) == 0) {
    if (iVar16 == 1099) {
      uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
      uVar17 = 6;
      lVar14 = 0;
      uVar15 = uVar13 + 0x10;
      if ((uVar15 & 0xffffffff) < 6) {
        do {
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar15;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar15);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar17 & 0x3f)) +
                   lVar14;
          *puVar8 = *puVar8 << (uVar15 & 0x7f);
          if ((longlong)(uVar13 - uVar15) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
          uVar15 = uVar13 + 0x10;
        } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
      uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar14;
      *puVar8 = *puVar8 << (uVar17 & 0x7f);
      if ((longlong)(uVar13 - uVar17) < 0) {
        fn_82C4E5E8(puVar8);
      }
      puVar8 = *(ulonglong **)(param_1 + 0x54);
      uVar18 = 6;
      lVar14 = 0;
      uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
      uVar17 = uVar13 + 0x10;
      if ((uVar17 & 0xffffffff) < 6) {
        do {
          if ((uVar17 & 0xffffffff) == 0) break;
          uVar18 = uVar18 - uVar17;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
          lVar14 = (ulonglong)
                   (uint)((int)(*puVar8 >> (0x40 - uVar17 & 0x7f)) << ((uint)uVar18 & 0x3f)) +
                   lVar14;
          *puVar8 = *puVar8 << (uVar17 & 0x7f);
          if ((longlong)(uVar13 - uVar17) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
          uVar17 = uVar13 + 0x10;
        } while ((uVar17 & 0xffffffff) < (uVar18 & 0xffffffff));
      }
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar18);
      uVar17 = (*puVar8 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar14;
      *puVar8 = *puVar8 << (uVar18 & 0x7f);
      if ((longlong)(uVar13 - uVar18) < 0) {
        fn_82C4E5E8(puVar8);
      }
    }
    else {
      uVar15 = (ulonglong)*(byte *)(iVar16 + param_8);
      uVar17 = (ulonglong)*(byte *)(iVar16 + in_stack_00000054);
    }
    lVar14 = (longlong)cStack_50 + uVar15 + -0x20;
    iVar12 = (int)lVar14;
    cVar10 = (char)((longlong)cStack_50 + uVar15);
    if (*(int *)(param_1 + 0xf4) < iVar12) {
      *param_2 = cVar10 + 0xa0;
    }
    else if (iVar12 < *(int *)(param_1 + 0xf0)) {
      *param_2 = cVar10 + 0x20;
    }
    else {
      *param_2 = (byte)lVar14;
    }
    lVar14 = (longlong)cStack_4f + uVar17 + -0x20;
    iVar12 = (int)lVar14;
    cVar10 = (char)((longlong)cStack_4f + uVar17);
    if (*(int *)(param_1 + 0xf4) < iVar12) {
      param_2[1] = cVar10 + 0xa0;
    }
    else if (iVar12 < *(int *)(param_1 + 0xf0)) {
      param_2[1] = cVar10 + 0x20;
    }
    else {
      param_2[1] = (byte)lVar14;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((*(int *)(param_1 + 0x1c8) == 1) && (((*param_2 & 1) != 0 || ((param_2[1] & 1) != 0)))) {
      puVar8 = *(ulonglong **)(param_1 + 0x54);
      uVar17 = 1;
      iVar16 = 0;
      uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
      uVar15 = uVar13 + 0x10;
      iVar12 = 0;
      if ((uVar15 & 0xffffffff) == 0) {
        do {
          iVar16 = iVar12;
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar15;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar15);
          iVar16 = ((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar17 & 0x3f)) + iVar16;
          *puVar8 = *puVar8 << (uVar15 & 0x7f);
          if ((longlong)(uVar13 - uVar15) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (ulonglong)*(uint *)(puVar8 + 1);
          uVar15 = uVar13 + 0x10;
          iVar12 = iVar16;
        } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar15 = *puVar8;
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
      *puVar8 = uVar15 << (uVar17 & 0x7f);
      if ((longlong)(uVar13 - uVar17) < 0) {
        fn_82C4E5E8(puVar8);
      }
      *(int *)(param_1 + 0x150) = (int)(uVar15 >> (0x40 - uVar17 & 0x7f)) + iVar16;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}

