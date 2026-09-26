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
extern unsigned int *auStack_30;
extern int fn_82C0B638();


ulonglong fn_82C033B8(int param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puStack00000024;
  undefined1 auStack_30 [48];
  
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  puStack00000024 = param_3;
  lVar1 = fn_82C0B638(*(undefined4 *)(param_1 + 0x2a0),param_2,auStack_30);
  uVar2 = -(ulonglong)(lVar1 != 0) & 0xffffffff80004005;
  if (-1 < (int)uVar2) {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  return uVar2;
}

