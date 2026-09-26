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
extern int fn_82F68CC0();


undefined8 fn_82E764B0(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 0xffffffff) == 0) || ((ulonglong)*(ushort *)(param_1 + 1) <= (param_2 & 0xffff)))
  {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82F68CC0((param_2 & 0xffff) * 0x1a + (ulonglong)*param_1,param_3,0x12);
    uVar1 = 0;
  }
  return uVar1;
}

