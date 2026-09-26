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
extern int fn_829AB0F0();


ulonglong fn_829B9AF0(undefined8 param_1,byte *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (((ulonglong)*param_2 * 0x100 + (ulonglong)param_2[1]) * 0x100 + (ulonglong)param_2[2]) *
          0x100 + (ulonglong)param_2[3];
  if (0x7fffffff < uVar1) {
    fn_829AB0F0(param_1,0xffffffff82054bd4);
  }
  return uVar1;
}

