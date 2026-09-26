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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826C8688();
extern int fn_826C86D8();
extern int fn_826CD488();
extern int fn_826D03A0();


void fn_826D1700(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  int *piVar5;
  int aiStack_40 [16];
  
  iVar4 = fn_826C8688();
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x1c4) = 0;
  }
  uVar3 = fn_826C86D8(param_1);
  if (param_2 == 0) {
    puVar1 = *(uint **)(param_1 + 0x1c0);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (uint)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (-1 < (int)uVar3) {
      fn_826D03A0((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa98,uVar3);
    }
  }
  else {
    piVar5 = *(int **)(param_2 + 0x80);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)fn_8269F500(param_2);
    }
    if (piVar5 != (int *)0x0) {
      *piVar5 = *piVar5 + 1;
    }
    puVar1 = *(uint **)(param_1 + 0x1c0);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (uint)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(int **)(param_1 + 0x1c0) = piVar5;
    if ((int)uVar3 == -1) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      aiStack_40[0] = param_1;
      fn_826CD488((ulonglong)*(uint *)(param_1 + 0xa0) + 0xa98,aiStack_40);
      fn_8267C498(param_1);
    }
    *(int *)(param_2 + 0x1c4) = param_1;
  }
  return;
}

