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
extern int fn_82D02880();


void fn_82D02A58(int param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = fn_82D02880(param_3);
  *(uint *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  uVar2 = 1 << (uVar4 & 0x3f);
  piVar6 = (int *)((uVar4 + 6) * 4 + param_1);
  if ((*(uint *)(param_1 + 8) & uVar2) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar2;
    *piVar6 = param_2;
    *(int **)(param_2 + 0x18) = piVar6;
    *(int *)(param_2 + 8) = param_2;
    *(int *)(param_2 + 0xc) = param_2;
  }
  else {
    iVar8 = *piVar6;
    uVar5 = (ulonglong)
            (uint)((int)param_3 << (-(uint)(uVar4 != 0x1f) & 0x19U - ((int)uVar4 >> 1) & 0x3f));
    iVar7 = iVar8;
    if (((ulonglong)*(uint *)(iVar8 + 4) & 0xfffffffc) != (param_3 & 0xffffffff)) {
      do {
        uVar1 = uVar5 >> 0x1f;
        uVar5 = (uVar5 & 0x7fffffff) << 1;
        iVar3 = ((int)uVar1 + 4) * 4;
        iVar8 = *(int *)(iVar3 + iVar7);
        if (iVar8 == 0) {
          *(int *)(iVar3 + iVar7) = param_2;
          *(int *)(param_2 + 0x18) = iVar7;
          *(int *)(param_2 + 8) = param_2;
          *(int *)(param_2 + 0xc) = param_2;
          return;
        }
        iVar7 = iVar8;
      } while (((ulonglong)*(uint *)(iVar8 + 4) & 0xfffffffc) != (param_3 & 0xffffffff));
    }
    iVar7 = *(int *)(iVar8 + 8);
    *(int *)(iVar7 + 0xc) = param_2;
    *(int *)(iVar8 + 8) = param_2;
    *(int *)(param_2 + 8) = iVar7;
    *(int *)(param_2 + 0xc) = iVar8;
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}

