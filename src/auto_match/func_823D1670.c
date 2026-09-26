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
extern unsigned int *auStack_20;
extern int fn_822AF200();


void fn_823D1670(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 auStack_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xe7c) = 1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0xe78) = param_2;
  *(undefined4 *)(param_1 + 0xe70) = 1;
  auStack_20[0] = 0;
  fn_822AF200(param_1 + 0x80,auStack_20);
  piVar1 = *(int **)(*(int *)(param_1 + 0x7c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,0x14);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0x14;
  }
  return;
}

