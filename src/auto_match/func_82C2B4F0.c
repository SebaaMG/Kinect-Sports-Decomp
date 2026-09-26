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
extern unsigned int lbl_83175B80;


ulonglong fn_82C2B4F0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  
  bVar2 = 0;
  uVar1 = 0xffffffff80500003;
  do {
    if (*(code **)(&lbl_83175B80)[(char)bVar2] != (code *)0x0) {
      uVar1 = (**(code **)(&lbl_83175B80)[(char)bVar2])(param_1,param_2,param_3);
      if (-1 < (int)uVar1) {
        return uVar1;
      }
      if ((uVar1 & 0xffffffff) != 0x80500003) {
        return uVar1;
      }
    }
    bVar2 = bVar2 + 1;
    if (7 < bVar2) {
      return uVar1;
    }
  } while( true );
}

