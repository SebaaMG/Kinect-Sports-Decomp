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
extern int fn_82F1AA38();


void fn_82F1ABB8(int param_1,ulonglong param_2,ulonglong param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x2048);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1e54) + param_4 * 0x114);
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    lVar2 = param_3 - param_2;
    do {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar7 = 0;
          piVar6 = puVar5 + 8;
          lVar9 = param_6;
          lVar10 = param_5;
          puVar8 = puVar5;
          do {
            puVar8 = puVar8 + 1;
            if (*(char *)((int)puVar5 + iVar7 + 0x4a) != '\0') {
              if ((*(int *)(param_1 + 0xa0c) != 0) &&
                 ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
                if (puVar5[7] == 0) {
                  uVar4 = 0xffffffff831a7fc0;
                }
                else {
                  uVar4 = 0xffffffff831a7dc0;
                  if (*piVar6 == 0) {
                    uVar4 = 0xffffffff831a7ec0;
                  }
                }
              }
              uVar1 = fn_82F1AA38(param_1,lVar10,lVar9,uVar4);
              *puVar8 = uVar1;
            }
            iVar7 = iVar7 + 1;
            lVar10 = lVar10 + 0x100;
            lVar9 = lVar9 + 2;
            piVar6 = piVar6 + 1;
          } while (iVar7 < 6);
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 0x45;
          param_5 = param_5 + 0x600;
          param_6 = param_6 + 0xc;
        } while (uVar3 < *(uint *)(param_1 + 0x2d0));
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

