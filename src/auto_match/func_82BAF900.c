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


longlong fn_82BAF900(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  bool bVar10;
  
  iVar3 = 0;
  lVar4 = 3;
  piVar7 = (int *)(param_2 + 0x3ac);
  do {
    if (*(int *)((param_1 - param_2) + (int)piVar7) == 0) {
      if (*piVar7 != 0) {
        return 1;
      }
    }
    else {
      if (*piVar7 == 0) {
        return -1;
      }
      iVar3 = iVar3 + 1;
    }
    lVar4 = lVar4 + -1;
    piVar7 = piVar7 + -1;
  } while (-1 < lVar4);
  iVar5 = 0;
  if (0 < iVar3) {
    piVar7 = (int *)(param_2 + 0x380);
    piVar8 = (int *)(param_1 + 900);
    do {
      if ((piVar8[-1] != *piVar7) ||
         (bVar10 = false, *piVar8 != *(int *)((param_2 - param_1) + (int)piVar8))) {
        bVar10 = true;
      }
      if (bVar10) {
        iVar3 = (iVar5 + 0x70) * 8;
        puVar6 = (uint *)(iVar3 + param_2);
        puVar9 = (uint *)(iVar3 + param_1);
        uVar1 = *puVar6;
        uVar2 = *puVar9;
        if (uVar2 == uVar1) {
          bVar10 = puVar6[1] <= puVar9[1];
        }
        else {
          bVar10 = uVar1 <= uVar2;
        }
        return (-(ulonglong)!bVar10 & 0xfffffffe) + 1;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 2;
      piVar8 = piVar8 + 2;
    } while (iVar5 < iVar3);
  }
  return 0;
}

