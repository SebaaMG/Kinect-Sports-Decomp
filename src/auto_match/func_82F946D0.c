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
extern int fn_82F93A00();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001f;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;


void fn_82F946D0(uint param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uStack00000014;
  undefined1 uStack0000001f;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  
  uStack00000014 = param_1;
  uStack0000001f = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  iVar1 = fn_82F93A00((ulonglong)param_1 + 0x18);
  if (iVar1 != 0) {
    piVar2 = (int *)fn_82F93A00((ulonglong)uStack00000014 + 0x18);
    (**(code **)(*piVar2 + 0x24))
              (piVar2,uStack0000001f,uStack00000024,uStack0000002c,uStack00000034);
  }
  return;
}

