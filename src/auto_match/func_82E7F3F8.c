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
extern unsigned int *auStack_20;
extern int fn_82E7E9F8();


undefined8 fn_82E7F3F8(ulonglong param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  auStack_20[0] = 0;
  if (((param_2 == 0) || (param_3 == (uint *)0x0)) || ((param_1 & 0xffffffff) == (ulonglong)param_2)
     ) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    *param_3 = 0;
    uVar1 = fn_82E7E9F8(param_1,param_2,auStack_20);
    if (-1 < (int)uVar1) {
      *param_3 = (uint)LZCOUNT(auStack_20[0]) >> 5;
    }
  }
  return uVar1;
}

