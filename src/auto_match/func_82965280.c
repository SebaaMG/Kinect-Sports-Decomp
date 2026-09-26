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


void fn_82965280(code *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (1 < (param_3 & 0xffffffff)) {
    uVar9 = (param_3 & 0xffffffff) >> 1;
    puVar3 = (undefined4 *)param_2;
    if (uVar9 != 0) {
      lVar6 = (uVar9 & 0x3fffffff) * 4 + param_2;
      uVar8 = uVar9 * 2 + 1;
      do {
        uVar8 = uVar8 - 2;
        lVar6 = lVar6 + -4;
        uVar2 = *(undefined4 *)lVar6;
        uVar9 = uVar9 - 1;
        uVar7 = uVar9;
        uVar12 = uVar8;
        if ((uVar8 & 0xffffffff) < (param_3 & 0xffffffff)) {
          do {
            puVar5 = (undefined4 *)((int)((uVar12 & 0xffffffff) << 2) + (int)puVar3);
            uVar10 = *puVar5;
            uVar11 = uVar12;
            if ((uVar12 + 1 & 0xffffffff) < (param_3 & 0xffffffff)) {
              uVar1 = puVar5[1];
              iVar4 = (*param_1)(uVar1,uVar10,param_4);
              if (0 < iVar4) {
                uVar11 = uVar12 + 1;
                uVar10 = uVar1;
              }
            }
            iVar4 = (*param_1)(uVar10,uVar2,param_4);
            if (iVar4 < 1) break;
            uVar12 = (uVar11 & 0x7fffffff) * 2 + 1;
            *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3) =
                 *(undefined4 *)((int)((uVar11 & 0xffffffff) << 2) + (int)puVar3);
            uVar7 = uVar11;
          } while (uVar12 < (param_3 & 0xffffffff));
        }
        *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3) = uVar2;
      } while ((uVar9 & 0xffffffff) != 0);
    }
    param_3 = param_3 - 1;
    if (param_3 != 0) {
      param_2 = (param_3 & 0x3fffffff) * 4 + param_2;
      do {
        uVar2 = *(undefined4 *)param_2;
        uVar8 = 1;
        *(undefined4 *)param_2 = *puVar3;
        uVar9 = 0;
        if (1 < (param_3 & 0xffffffff)) {
          do {
            puVar5 = (undefined4 *)((int)(uVar8 << 2) + (int)puVar3);
            uVar10 = *puVar5;
            uVar7 = uVar8;
            if ((uVar8 + 1 & 0xffffffff) < (param_3 & 0xffffffff)) {
              uVar1 = puVar5[1];
              iVar4 = (*param_1)(uVar1,uVar10,param_4);
              if (0 < iVar4) {
                uVar7 = uVar8 + 1;
                uVar10 = uVar1;
              }
            }
            iVar4 = (*param_1)(uVar10,uVar2,param_4);
            if (iVar4 < 1) break;
            uVar8 = (uVar7 & 0x7fffffff) * 2 + 1;
            *(undefined4 *)((int)((uVar9 & 0xffffffff) << 2) + (int)puVar3) =
                 *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar3);
            uVar9 = uVar7;
          } while (uVar8 < (param_3 & 0xffffffff));
        }
        param_3 = param_3 - 1;
        param_2 = param_2 + -4;
        *(undefined4 *)((int)((uVar9 & 0xffffffff) << 2) + (int)puVar3) = uVar2;
      } while (param_3 != 0);
    }
  }
  return;
}

