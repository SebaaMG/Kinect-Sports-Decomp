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
extern int fn_82A47B28();
extern int fn_82A76400();


void fn_82A59858(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (param_2 % 0xd) * 0x28 + param_1;
  piVar3 = *(int **)(iVar1 + 0x20);
  do {
    piVar2 = piVar3;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
      piVar3 = piVar2;
    }
    else {
      iVar4 = *piVar2;
      piVar3 = (int *)piVar2[1];
    }
  } while (*(int *)(iVar4 + 0x30) != param_2);
  fn_82A47B28(iVar1 + 8,piVar2);
  fn_82A76400(iVar4);
  *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
  return;
}

