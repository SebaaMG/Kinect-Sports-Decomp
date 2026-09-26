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


void fn_8277BCA0(int *param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint auStack_1a0 [104];
  
  if ((param_3 - param_2 & 0xffffffff) < 2) {
    return;
  }
  puVar11 = auStack_1a0;
  do {
    while( true ) {
      uVar7 = (uint)param_2;
      uVar6 = (uint)param_3;
      uVar9 = uVar6 - uVar7;
      if ((int)uVar9 < 10) break;
      iVar1 = *param_1;
      uVar12 = param_2 + 1;
      uVar13 = param_3 - 1;
      iVar5 = (int)(((longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0) +
                     param_2 & 0xffffffff) << 2);
      iVar4 = (int)((param_2 & 0x3fffffff) << 2);
      uVar3 = *(undefined4 *)(iVar4 + iVar1);
      lVar16 = (uVar12 & 0x3fffffff) << 2;
      lVar15 = (uVar13 & 0x3fffffff) << 2;
      *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar5 + iVar1);
      *(undefined4 *)(iVar5 + iVar1) = uVar3;
      iVar1 = (int)lVar16;
      iVar5 = (int)lVar15;
      cVar8 = (*param_4)(*(undefined4 *)(iVar5 + *param_1),*(undefined4 *)(iVar1 + *param_1));
      if (cVar8 != '\0') {
        iVar2 = *param_1;
        uVar3 = *(undefined4 *)(iVar5 + iVar2);
        *(undefined4 *)(iVar5 + iVar2) = *(undefined4 *)(iVar1 + iVar2);
        *(undefined4 *)(iVar1 + iVar2) = uVar3;
      }
      cVar8 = (*param_4)(*(undefined4 *)(iVar4 + *param_1),*(undefined4 *)(iVar1 + *param_1));
      if (cVar8 != '\0') {
        iVar2 = *param_1;
        uVar3 = *(undefined4 *)(iVar4 + iVar2);
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(iVar1 + iVar2);
        *(undefined4 *)(iVar1 + iVar2) = uVar3;
      }
      cVar8 = (*param_4)(*(undefined4 *)(iVar5 + *param_1),*(undefined4 *)(iVar4 + *param_1));
      if (cVar8 != '\0') {
        iVar1 = *param_1;
        uVar3 = *(undefined4 *)(iVar5 + iVar1);
        *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar4 + iVar1);
        *(undefined4 *)(iVar4 + iVar1) = uVar3;
      }
      while( true ) {
        do {
          lVar16 = lVar16 + 4;
          uVar12 = uVar12 + 1;
          cVar8 = (*param_4)(*(undefined4 *)((int)lVar16 + *param_1),
                             *(undefined4 *)(iVar4 + *param_1));
        } while (cVar8 != '\0');
        do {
          lVar15 = lVar15 + -4;
          uVar13 = uVar13 - 1;
          cVar8 = (*param_4)(*(undefined4 *)(iVar4 + *param_1),
                             *(undefined4 *)((int)lVar15 + *param_1));
        } while (cVar8 != '\0');
        iVar1 = *param_1;
        uVar14 = (uint)uVar13;
        uVar9 = (uint)uVar12;
        if ((int)uVar14 < (int)uVar9) break;
        lVar15 = (uVar13 & 0x3fffffff) << 2;
        lVar16 = (uVar12 & 0x3fffffff) << 2;
        uVar3 = *(undefined4 *)((int)lVar16 + iVar1);
        *(undefined4 *)((int)lVar16 + iVar1) = *(undefined4 *)((int)lVar15 + iVar1);
        *(undefined4 *)((int)lVar15 + iVar1) = uVar3;
      }
      iVar5 = (int)((uVar13 & 0xffffffff) << 2);
      uVar3 = *(undefined4 *)(iVar4 + iVar1);
      *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar5 + iVar1);
      *(undefined4 *)(iVar5 + iVar1) = uVar3;
      if ((int)(uVar6 - uVar9) < (int)(uVar14 - uVar7)) {
        *puVar11 = uVar7;
        puVar11[1] = uVar14;
        uVar13 = param_3;
        param_2 = uVar12;
      }
      else {
        puVar11[1] = uVar6;
        *puVar11 = uVar9;
      }
      param_3 = uVar13;
      puVar11 = puVar11 + 2;
    }
LAB_8277beb4:
    uVar13 = param_2;
    param_2 = uVar13 + 1;
    if ((int)param_2 < (int)uVar6) {
      while( true ) {
        iVar1 = (int)((uVar13 & 0x3fffffff) << 2);
        puVar10 = (undefined4 *)(iVar1 + *param_1);
        cVar8 = (*param_4)(puVar10[1],*puVar10);
        if (cVar8 == '\0') break;
        puVar10 = (undefined4 *)(iVar1 + *param_1);
        uVar3 = puVar10[1];
        puVar10[1] = *puVar10;
        *puVar10 = uVar3;
        if ((uint)uVar13 == uVar7) break;
        uVar13 = uVar13 - 1;
      }
      goto LAB_8277beb4;
    }
    if (puVar11 <= auStack_1a0) {
      return;
    }
    param_2 = (ulonglong)puVar11[-2];
    param_3 = (ulonglong)puVar11[-1];
    puVar11 = puVar11 + -2;
  } while( true );
}

