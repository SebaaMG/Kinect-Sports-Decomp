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
extern int fn_8269A608();


void fn_8269D728(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar2 = *(uint **)(param_1 + 0x80);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((longlong)((ulonglong)uVar3 - 1) < 1) {
      fn_8269A608(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  puVar2 = *(uint **)(param_2 + 0x80);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    *puVar2 = (uint)((ulonglong)uVar3 - 1);
    if ((longlong)((ulonglong)uVar3 - 1) < 1) {
      fn_8269A608(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    *(int *)(*(int *)(param_1 + 0x80) + 4) = param_1;
  }
  return;
}

