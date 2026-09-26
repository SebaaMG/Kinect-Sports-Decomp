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
extern int fn_82A4ADB8();
extern int fn_82A4B670();
extern int fn_82A4BDA8();
extern int fn_82A5C0A8();


void fn_82A4C1B8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82A4BDA8(param_1 + -4,param_3);
  if (-1 < iVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x80);
    if (iVar1 != 0) {
      iVar2 = fn_82A5C0A8(param_3,-(iVar1 != 2) & 2,
                              *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10));
    }
    if (-1 < iVar2) {
      if (*(int *)(*(int *)(param_1 + 0x44) + 0x80) == 0) {
        fn_82A4ADB8(param_1 + -4,param_2,param_3);
      }
      else {
        fn_82A4B670();
      }
    }
  }
  return;
}

