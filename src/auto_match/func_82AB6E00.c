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
extern int fn_82AB15D0();
extern int fn_82B6BE30();


void fn_82AB6E00(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x178);
  }
  iVar1 = param_1[9];
  param_1[8] = param_2;
  param_1[7] = 1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820d6be8,0x18b);
    }
    uVar3 = 1;
  }
  uVar2 = fn_82B6BE30(*param_1,param_1[1],param_1[2],param_1[3],uVar3,iVar1 == 0);
  param_1[0xe] = uVar2;
  return;
}

