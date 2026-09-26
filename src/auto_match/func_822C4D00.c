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
extern int fn_822C6B30();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();
extern unsigned int uStack00000038;


void fn_822C4D00(int param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uStack00000038;
  
  uStack00000038 = param_3;
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar1 = *(uint *)(param_1 + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x114) + 0x50;
    fn_822C6D68(lVar2,param_1 + 0x80,param_1 + 0xc0);
    fn_822C6B30(lVar2,param_1 + 0x80,param_1 + 0xc0,param_2,
                      uStack00000038 & 0xffffffff00000000);
  }
  return;
}

