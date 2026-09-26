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
extern int fn_82A40B38();
extern int fn_82A5C960();
extern int fn_82A5CA80();


undefined8 fn_82A5CBD8(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_82A5C960();
  piVar3 = *(int **)(param_1 + 0xd4);
  while (piVar4 = piVar3, piVar4 != (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      iVar2 = 0;
      piVar3 = piVar4;
    }
    else {
      iVar2 = *piVar4;
      piVar3 = (int *)piVar4[1];
    }
    if ((*(int *)(iVar2 + 4) == param_2) || (param_2 == 0)) {
      fn_82A40B38(param_1 + 8,piVar4);
      uVar1 = fn_82A5CA80(param_1,iVar2);
    }
  }
  return uVar1;
}

