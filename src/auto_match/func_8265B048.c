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
extern int fn_8265B430();


undefined8 fn_8265B048(ulonglong param_1,undefined8 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if ((param_3[1] & 0x800) != 0) {
      fn_8265B430(param_4,0,param_2,0xffffffff821ce7b0);
    }
    uVar1 = param_3[1] >> 0xc & 0xf;
    if ((((uVar1 == 7) || (uVar1 == 8)) || (uVar1 == 9)) || (uVar1 == 0xb)) {
      uVar1 = (uint)(((ulonglong)*param_3 & 0x1fff) >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_4 + 0x18) =
           1 << ((uint)((ulonglong)*param_3 & 0x1fff) & 0x1f) | *(uint *)(uVar1 + param_4 + 0x18);
    }
  }
  return 0;
}

