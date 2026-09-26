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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82F68CC0();


longlong fn_82BC0088(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_1[1] < param_2 + 1) {
    param_1[1] = param_2 + 1;
  }
  while (uVar1 = *param_1, uVar1 <= param_2) {
    *param_1 = uVar1 << 1;
  }
  uVar2 = param_1[2];
  uVar3 = fn_82B7BD28(param_1[3],uVar1 << 2);
  param_1[2] = (uint)uVar3;
  fn_82F68CC0(uVar3,uVar2,param_1[1] << 2);
  fn_82B7BEB0(param_1[3],uVar2);
  return ((ulonglong)param_2 & 0x3fffffff) * 4 + (ulonglong)param_1[2];
}

