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
extern int fn_82B24700();


void fn_82B4FA78(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *apuStack_20 [4];
  
  fn_82B24700(apuStack_20,param_1);
  if ((apuStack_20[0][1] & 1) == 0) {
    iVar2 = (*apuStack_20[0] & 0xfffffffe) - 4;
    if (iVar2 != 0) {
      iVar1 = *(int *)((*apuStack_20[0] & 0xfffffffe) + 4);
      goto LAB_82b4fab0;
    }
  }
  else {
    iVar2 = 0;
  }
  iVar1 = 0;
LAB_82b4fab0:
  *param_2 = iVar2;
  param_2[1] = iVar1;
  return;
}

