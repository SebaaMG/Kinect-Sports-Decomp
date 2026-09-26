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


int fn_8300E510(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 0;
  param_3 = param_3 + -1;
  do {
    uVar2 = param_3 - iVar1;
    iVar3 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar1;
    uVar2 = *(uint *)(iVar3 * 0xc + param_2);
    if (param_4 < uVar2) {
      param_3 = iVar3 + -1;
    }
    else {
      if (param_4 <= uVar2) {
        return iVar3 * 0xc + param_2;
      }
      iVar1 = iVar3 + 1;
    }
  } while (iVar1 <= param_3);
  return 0;
}

