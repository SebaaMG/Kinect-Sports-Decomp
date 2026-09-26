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
extern int fn_82569980();


void fn_8260F160(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_5 == 0) {
    iVar1 = fn_82569980(param_1,*(ushort *)(param_3 + 0x10) & 0xff);
    if (iVar1 == -1) {
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0xd8) + iVar1 * 0x30;
    uVar2 = 1;
  }
  else {
    if (param_5 != 1) {
      return;
    }
    iVar1 = fn_82569980(param_1,*(ushort *)(param_3 + 0x10) & 0xff);
    if (iVar1 == -1) {
      return;
    }
    iVar1 = *(int *)((int)param_1 + 0xd8) + iVar1 * 0x30;
    uVar2 = 0;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  return;
}

