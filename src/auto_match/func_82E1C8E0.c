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
extern int fn_82E1C9C0();
extern int fn_82F664B0();


ulonglong fn_82E1C8E0(undefined8 param_1,ulonglong param_2,uint *param_3,undefined8 param_4,
                       uint param_5)

{
  ulonglong uVar1;
  
  if (((int)param_4 != 0) && (param_3 != (uint *)0x0)) {
    if (*param_3 < param_5) {
      *param_3 = param_5;
      return -(ulonglong)(param_2 != 0) & 0xffffffff80040011;
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_82F664B0(param_2,*param_3,param_4);
      uVar1 = fn_82E1C9C0();
      *param_3 = param_5;
      return uVar1;
    }
  }
  return 0xffffffff80004003;
}

