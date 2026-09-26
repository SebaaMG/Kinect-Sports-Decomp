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


uint fn_824C3460(int param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 auStack_20 [2];
  
  uVar2 = *(uint *)(param_1 + 4);
  if (*(int *)(uVar2 + 0x68) == 0) {
    if (*(int *)(uVar2 + 0x5c) == 0) {
      return uVar2;
    }
    if (*(longlong *)(uVar2 + 0x60) == 0) {
      uVar4 = 5;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 4;
  }
  auStack_20[0] = 0;
  fn_822AF200(uVar2 + 0x40,auStack_20);
  piVar1 = *(int **)(*(int *)(uVar2 + 0x3c) + 8);
  if (piVar1 == (int *)0x0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = (**(code **)(*piVar1 + 8))(piVar1,uVar4);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(uVar2 + 0x18) = uVar4;
  }
  return (uint)(cVar3 != '\0');
}

