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
extern int fn_82AA27D8();
extern int fn_82AA2B30();


undefined8 fn_82AA3148(uint *param_1,uint param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  
  if ((((param_1 != (uint *)0x0) && (3 < param_2)) && (param_3 != 0)) && (param_5 != 0)) {
    if ((*param_1 & 0xffff0000) == 0xfffe0000) {
      uVar1 = fn_82AA2B30();
      return uVar1;
    }
    if ((*param_1 & 0xffff0000) == 0xffff0000) {
      uVar1 = fn_82AA27D8();
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

