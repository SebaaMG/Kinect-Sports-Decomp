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
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


undefined8 fn_82FB1A08(int *param_1,ulonglong param_2)

{
  int iVar1;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = fn_82FA5060(lbl_831BC768,(param_2 + (param_2 & 0x7fffffff) * 2 & 0x1fffffff) << 3)
    ;
    *param_1 = iVar1;
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    param_1[2] = (int)param_2;
  }
  return 1;
}

