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


void fn_823DF480(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 auStack_20 [2];
  
  if (*(int *)(*(int *)(param_1 + 8) + 0xe70) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(undefined4 *)(iVar2 + 0xe78);
  auStack_20[0] = 0;
  fn_822AF200(iVar2 + 0x80,auStack_20);
  piVar1 = *(int **)(*(int *)(iVar2 + 0x7c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = (**(code **)(*piVar1 + 8))(piVar1,uVar3);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
  }
  return;
}

