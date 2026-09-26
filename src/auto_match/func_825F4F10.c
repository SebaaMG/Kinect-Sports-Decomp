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
extern int fn_825F4FE8();
extern unsigned int lbl_821CC160;


undefined8 fn_825F4F10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x8dc);
  if (*(int *)(param_1 + 0x8f0) < 1) {
    uVar3 = 0;
  }
  else {
    if (*piVar7 != 0) {
      fn_825F4FE8();
    }
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x8f0) - 1;
    *(undefined4 *)(param_1 + 0x91c) = param_2;
    *(undefined4 *)(param_1 + 0x900) = 0;
    *(int *)(param_1 + 0x8f0) = (int)lVar5;
    uVar2 = lbl_821CC160;
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x8f8) = lbl_821CC160;
    *(undefined4 *)(param_1 + 0x8fc) = 1;
    *(undefined4 *)(param_1 + 0x8f4) = uVar2;
    *(undefined4 *)(param_1 + 0x918) = 0;
    *(undefined4 *)(param_1 + 0x920) = uVar2;
    *piVar7 = *(int *)(param_1 + 0x8e0);
    *(undefined4 *)(param_1 + 0x924) = uVar2;
    if (0 < lVar5) {
      puVar6 = (undefined4 *)(param_1 + 0x8dc);
      do {
        puVar1 = puVar6 + 2;
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar1;
      } while (iVar4 < *(int *)(param_1 + 0x8f0));
    }
    uVar3 = 1;
    piVar7[*(int *)(param_1 + 0x8f0) + 1] = 0;
  }
  return uVar3;
}

