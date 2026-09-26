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
extern int fn_82C10B28();


void fn_82C10EC0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(code **)(iVar1 + 0x208) != (code *)0x0) {
    (**(code **)(iVar1 + 0x208))
              (param_1,*(undefined4 *)(((uint)((param_2 & 0xffffffff) << 2) & 0x3fc) + iVar1),
               param_2,*(undefined4 *)(iVar1 + 0x20c));
  }
  param_1 = (param_2 & 0xff) * 4 + param_1;
  iVar1 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x1fc),2,param_1);
  if (-1 < iVar1) {
    *(undefined4 *)param_1 = 0;
  }
  return;
}

