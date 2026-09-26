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
extern int fn_82F69148();


uint * fn_83016C18(uint *param_1,int param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*param_3;
  uVar2 = (ulonglong)*(uint *)(param_2 + 4) - 0x14;
  if (uVar1 < (uVar2 & 0xffffffff)) {
    fn_82F69148(uVar1,uVar1 + 0x14,
                 (((uVar2 - uVar1) - 1 & 0xffffffff) / 0x14 + 1) * 0x14 & 0xfffffffc);
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -0x14;
  *param_1 = *param_3;
  return param_1;
}

