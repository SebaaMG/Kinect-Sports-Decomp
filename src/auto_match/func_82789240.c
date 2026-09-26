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
extern unsigned int *auStack_1a0;
extern int fn_82788788();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;


void fn_82789240(int *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uStack00000028;
  uint auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1a0;
  uStack00000028 = param_4;
  do {
    while( true ) {
      uVar8 = (uint)param_2;
      uVar7 = (uint)param_3;
      uVar10 = uVar7 - uVar8;
      if ((int)uVar10 < 10) break;
      iVar1 = *param_1;
      uVar12 = param_2 + 1;
      uVar13 = param_3 - 1;
      iVar4 = (int)(((longlong)((int)uVar10 >> 1) +
                     (ulonglong)((int)uVar10 < 0 && (uVar10 & 1) != 0) + param_2 & 0xffffffff) << 2)
      ;
      iVar3 = (int)((param_2 & 0x3fffffff) << 2);
      uVar2 = *(undefined4 *)(iVar3 + iVar1);
      lVar16 = (uVar12 & 0x3fffffff) << 2;
      lVar15 = (uVar13 & 0x3fffffff) << 2;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
      *(undefined4 *)(iVar4 + iVar1) = uVar2;
      iVar1 = *param_1;
      iVar4 = (int)lVar16;
      iVar5 = (int)lVar15;
      cVar9 = fn_82788788(&stack0x00000028,*(undefined4 *)(iVar5 + iVar1),
                            *(undefined4 *)(iVar4 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(undefined4 *)(iVar5 + iVar1);
        *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = uVar2;
      }
      iVar1 = *param_1;
      cVar9 = fn_82788788(&stack0x00000028,*(undefined4 *)(iVar3 + iVar1),
                            *(undefined4 *)(iVar4 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(undefined4 *)(iVar3 + iVar1);
        *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = uVar2;
      }
      iVar1 = *param_1;
      cVar9 = fn_82788788(&stack0x00000028,*(undefined4 *)(iVar5 + iVar1),
                            *(undefined4 *)(iVar3 + iVar1));
      if (cVar9 != '\0') {
        uVar2 = *(undefined4 *)(iVar5 + iVar1);
        *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar3 + iVar1);
        *(undefined4 *)(iVar3 + iVar1) = uVar2;
      }
      while( true ) {
        iVar1 = *param_1;
        do {
          lVar16 = lVar16 + 4;
          uVar2 = *(undefined4 *)(iVar3 + iVar1);
          uVar12 = uVar12 + 1;
          cVar9 = fn_82788788(&stack0x00000028,*(undefined4 *)((int)lVar16 + iVar1),uVar2);
        } while (cVar9 != '\0');
        do {
          lVar15 = lVar15 + -4;
          uVar13 = uVar13 - 1;
          cVar9 = fn_82788788(&stack0x00000028,uVar2,*(undefined4 *)((int)lVar15 + iVar1));
        } while (cVar9 != '\0');
        uVar14 = (uint)uVar13;
        uVar10 = (uint)uVar12;
        if ((int)uVar14 < (int)uVar10) break;
        lVar15 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar12 & 0x3fffffff) << 2;
        uVar2 = *(undefined4 *)((int)lVar16 + iVar1);
        *(undefined4 *)((int)lVar16 + iVar1) = *(undefined4 *)((int)lVar15 + iVar1);
        *(undefined4 *)((int)lVar15 + iVar1) = uVar2;
      }
      iVar4 = (int)((uVar13 & 0xffffffff) << 2);
      uVar2 = *(undefined4 *)(iVar3 + iVar1);
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
      *(undefined4 *)(iVar4 + iVar1) = uVar2;
      if ((int)(uVar7 - uVar10) < (int)(uVar14 - uVar8)) {
        *puVar11 = uVar8;
        puVar11[1] = uVar14;
        uVar13 = param_3;
        param_2 = uVar12;
      }
      else {
        puVar11[1] = uVar7;
        *puVar11 = uVar10;
      }
      param_3 = uVar13;
      puVar11 = puVar11 + 2;
    }
LAB_8278943c:
    uVar13 = param_2;
    param_2 = uVar13 + 1;
    if ((int)param_2 < (int)uVar7) {
      while( true ) {
        iVar1 = (int)((uVar13 & 0x3fffffff) << 2);
        puVar6 = (undefined4 *)(iVar1 + *param_1);
        cVar9 = fn_82788788(&stack0x00000028,puVar6[1],*(undefined4 *)(iVar1 + *param_1));
        if (cVar9 == '\0') break;
        uVar2 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar2;
        if ((uint)uVar13 == uVar8) break;
        uVar13 = uVar13 - 1;
      }
      goto LAB_8278943c;
    }
    if (puVar11 <= auStack_1a0) {
      return;
    }
    param_2 = (ulonglong)puVar11[-2];
    param_3 = (ulonglong)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

