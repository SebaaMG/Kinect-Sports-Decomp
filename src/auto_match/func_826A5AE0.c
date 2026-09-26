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
extern int fn_8267BE38();
extern int fn_826A4360();
extern int fn_826A4B58();


undefined8 fn_826A5AE0(int *param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint auStack_1a0 [104];
  
  if (1 < (param_3 - param_2 & 0xffffffff)) {
    puVar10 = auStack_1a0;
    do {
      while( true ) {
        uVar4 = (uint)param_2;
        uVar3 = (uint)param_3;
        uVar8 = uVar3 - uVar4;
        if ((int)uVar8 < 10) break;
        iVar6 = *param_1;
        uVar11 = param_2 + 1;
        uVar12 = param_3 - 1;
        iVar2 = (int)(((longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0)
                       + param_2 & 0xffffffff) << 2);
        iVar7 = (int)((param_2 & 0x3fffffff) << 2);
        uVar1 = *(undefined4 *)(iVar7 + iVar6);
        lVar15 = (uVar11 & 0x3fffffff) << 2;
        lVar14 = (uVar12 & 0x3fffffff) << 2;
        *(undefined4 *)(iVar7 + iVar6) = *(undefined4 *)(iVar2 + iVar6);
        *(undefined4 *)(iVar2 + iVar6) = uVar1;
        iVar6 = (int)lVar15;
        iVar2 = (int)lVar14;
        iVar5 = fn_826A4360(param_4,*(undefined4 *)(iVar2 + *param_1),
                              *(undefined4 *)(iVar6 + *param_1));
        if (iVar5 < 0) {
          iVar5 = *param_1;
          uVar1 = *(undefined4 *)(iVar2 + iVar5);
          *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar6 + iVar5);
          *(undefined4 *)(iVar6 + iVar5) = uVar1;
        }
        iVar5 = fn_826A4360(param_4,*(undefined4 *)(iVar7 + *param_1),
                              *(undefined4 *)(iVar6 + *param_1));
        if (iVar5 < 0) {
          iVar5 = *param_1;
          uVar1 = *(undefined4 *)(iVar7 + iVar5);
          *(undefined4 *)(iVar7 + iVar5) = *(undefined4 *)(iVar6 + iVar5);
          *(undefined4 *)(iVar6 + iVar5) = uVar1;
        }
        iVar6 = fn_826A4360(param_4,*(undefined4 *)(iVar2 + *param_1),
                              *(undefined4 *)(iVar7 + *param_1));
        if (iVar6 < 0) {
          iVar6 = *param_1;
          uVar1 = *(undefined4 *)(iVar2 + iVar6);
          *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar7 + iVar6);
          *(undefined4 *)(iVar7 + iVar6) = uVar1;
        }
LAB_826a5c04:
        do {
          uVar11 = uVar11 + 1;
          lVar15 = lVar15 + 4;
          uVar8 = (uint)uVar11;
          if ((int)uVar3 <= (int)uVar8) {
LAB_826a5d44:
            uVar16 = 0;
            goto LAB_826a5b04;
          }
          iVar6 = fn_826A4360(param_4,*(undefined4 *)((int)lVar15 + *param_1),
                                *(undefined4 *)(iVar7 + *param_1));
        } while (iVar6 < 0);
        do {
          uVar12 = uVar12 - 1;
          lVar14 = lVar14 + -4;
          if ((longlong)uVar12 < 0) goto LAB_826a5d44;
          iVar6 = fn_826A4360(param_4,*(undefined4 *)(iVar7 + *param_1),
                                *(undefined4 *)((int)lVar14 + *param_1));
        } while (iVar6 < 0);
        iVar6 = *param_1;
        uVar13 = (uint)uVar12;
        if ((int)uVar8 <= (int)uVar13) {
          lVar14 = (uVar12 & 0x3fffffff) << 2;
          lVar15 = (uVar11 & 0x3fffffff) << 2;
          uVar1 = *(undefined4 *)((int)lVar15 + iVar6);
          *(undefined4 *)((int)lVar15 + iVar6) = *(undefined4 *)((int)lVar14 + iVar6);
          *(undefined4 *)((int)lVar14 + iVar6) = uVar1;
          goto LAB_826a5c04;
        }
        iVar2 = (int)((uVar12 & 0xffffffff) << 2);
        uVar1 = *(undefined4 *)(iVar7 + iVar6);
        *(undefined4 *)(iVar7 + iVar6) = *(undefined4 *)(iVar2 + iVar6);
        *(undefined4 *)(iVar2 + iVar6) = uVar1;
        if ((int)(uVar3 - uVar8) < (int)(uVar13 - uVar4)) {
          *puVar10 = uVar4;
          puVar10[1] = uVar13;
          uVar12 = param_3;
          param_2 = uVar11;
        }
        else {
          puVar10[1] = uVar3;
          *puVar10 = uVar8;
        }
        param_3 = uVar12;
        puVar10 = puVar10 + 2;
      }
LAB_826a5d24:
      uVar12 = param_2;
      param_2 = uVar12 + 1;
      if ((int)param_2 < (int)uVar3) {
        while( true ) {
          iVar6 = (int)((uVar12 & 0x3fffffff) << 2);
          puVar9 = (undefined4 *)(iVar6 + *param_1);
          iVar7 = fn_826A4360(param_4,puVar9[1],*puVar9);
          if (-1 < iVar7) break;
          puVar9 = (undefined4 *)(iVar6 + *param_1);
          uVar1 = puVar9[1];
          puVar9[1] = *puVar9;
          *puVar9 = uVar1;
          if ((uint)uVar12 == uVar4) break;
          uVar12 = uVar12 - 1;
        }
        goto LAB_826a5d24;
      }
      if (puVar10 <= auStack_1a0) break;
      param_2 = (ulonglong)puVar10[-2];
      param_3 = (ulonglong)puVar10[-1];
      puVar10 = puVar10 + -2;
    } while( true );
  }
  uVar16 = 1;
LAB_826a5b04:
  fn_826A4B58(*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14));
  fn_8267BE38(*(undefined4 *)(param_4 + 0x10));
  return uVar16;
}

