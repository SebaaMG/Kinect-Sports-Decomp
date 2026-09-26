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
extern int fn_82F68CC0();


undefined8 fn_82C2AA40(int param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short sVar9;
  int iVar8;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  sVar9 = 0;
  piVar2 = *(int **)(iVar1 + 0x10);
  piVar10 = (int *)piVar2[1];
  if (piVar10 != (int *)0x0) {
    do {
      uVar7 = *(ulonglong *)(*piVar10 + 8);
      uVar6 = *(uint *)(*piVar10 + 4) + uVar7;
      if (uVar6 < param_2) break;
      if ((uVar7 <= param_2) && (param_2 < uVar6)) {
        sVar9 = sVar9 + 1;
        break;
      }
      piVar10 = (int *)piVar10[1];
      sVar9 = sVar9 + 1;
    } while (piVar10 != (int *)0x0);
    if ((sVar9 != 0) && (piVar10 != piVar2)) {
      do {
        if (piVar10 == (int *)0x0) {
          return 0;
        }
        puVar3 = (uint *)*piVar10;
        uVar6 = *(ulonglong *)(puVar3 + 2);
        uVar4 = puVar3[1];
        if ((uVar6 <= param_2) && (param_2 < uVar4 + uVar6)) {
          lVar11 = ((uVar6 & 0xffffffff) - (param_2 & 0xffffffff)) + (ulonglong)uVar4;
          lVar5 = (ulonglong)*(uint *)(param_4 + 0x1c) - (ulonglong)*(uint *)(param_4 + 0x18);
          lVar12 = lVar11;
          if ((int)lVar5 < (int)lVar11) {
            lVar12 = lVar5;
          }
          fn_82F68CC0((ulonglong)*(uint *)(param_4 + 0x2c) + (ulonglong)*(uint *)(param_4 + 0x18),
                       ((ulonglong)uVar4 - lVar11) + (ulonglong)*puVar3,lVar12);
          param_2 = (longlong)(int)lVar12 + param_2;
          iVar8 = *(int *)(param_4 + 0x18) + (int)lVar12;
          *(int *)(param_4 + 0x18) = iVar8;
          if (*(int *)(param_4 + 0x1c) == iVar8) {
            return 0;
          }
        }
        piVar10 = (int *)piVar10[2];
      } while (piVar10 != *(int **)(iVar1 + 0x10));
    }
  }
  return 0;
}

