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


longlong fn_82D50B88(int param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))
                    (*(int **)(param_1 + 0x14),param_2,param_3 + -0x70);
  iVar2 = (int)lVar1;
  if ((iVar2 < 0) || ((int)(param_3 + -0x70) < iVar2)) {
    lVar1 = -1;
  }
  else if (*(int *)(param_1 + 0x14) == param_1 + 0x70) {
    lVar1 = lVar1 + 0x70;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar2;
    lVar1 = 0x70;
  }
  return lVar1;
}

