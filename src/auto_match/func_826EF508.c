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
extern unsigned int *auStack_30;
extern int fn_826BCFF8();
extern int fn_826BD398();


void fn_826EF508(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 auStack_30 [12];
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (param_2 == '\0') {
      if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x18);
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    if (iVar2 != 0) {
      iVar3 = fn_826BCFF8(iVar2);
      uVar6 = uVar6 - iVar3;
      if (uVar6 < param_1 + 0x30U) {
        uVar6 = 0;
      }
      else {
        auStack_30[0] = 0;
        fn_826BD398(uVar6,auStack_30,iVar2);
      }
    }
    *(uint *)(param_1 + 0x18) = uVar6;
    return;
  }
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
      return;
    }
    uVar4 = 0x2b;
  }
  else {
    uVar4 = 0x2d;
  }
  puVar5 = (undefined1 *)(*(int *)(param_1 + 0x18) + -1);
  *(undefined1 **)(param_1 + 0x18) = puVar5;
  *puVar5 = uVar4;
  return;
}

