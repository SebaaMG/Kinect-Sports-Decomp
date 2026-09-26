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
extern int fn_8269F500();


void fn_826FCCF8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    puVar1 = *(uint **)(param_1 + 0xadc);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (uint)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(undefined4 *)(param_1 + 0xadc) = 0;
  }
  else {
    piVar3 = *(int **)(param_2 + 0x80);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)fn_8269F500(param_2);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    puVar1 = *(uint **)(param_1 + 0xadc);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (uint)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(int **)(param_1 + 0xadc) = piVar3;
  }
  return;
}

