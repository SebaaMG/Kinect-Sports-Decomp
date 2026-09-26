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


longlong fn_82E9A930(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = param_2;
  if ((param_2 <= param_1) && (iVar2 = param_1, param_2 < param_1)) {
    iVar4 = param_2;
  }
  iVar1 = param_3;
  if ((param_3 <= iVar2) && (iVar1 = iVar2, param_3 < iVar4)) {
    iVar4 = param_3;
  }
  iVar2 = param_4;
  if ((param_4 <= iVar1) && (iVar2 = iVar1, param_4 < iVar4)) {
    iVar4 = param_4;
  }
  uVar3 = ((param_1 - iVar4) - iVar2) + param_2 + param_3 + param_4;
  return (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0);
}

