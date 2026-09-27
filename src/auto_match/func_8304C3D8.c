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
extern float lbl_8217DB8C;


double fn_8304C3D8(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = (uint)param_2[1] >> 0xe; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  return (double)((float)(((longlong)*param_2 * (longlong)iVar1 +
                           ((longlong)*param_2 * (longlong)iVar1 & 0x1fffffffU) * 8 & 0x3fffffff) <<
                         2) * lbl_8217DB8C);
}

