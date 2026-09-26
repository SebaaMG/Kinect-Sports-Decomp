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
extern int fn_82B6B3E8();


void fn_82B6E6D0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da3a8,0xffffffff820da300,0x213);
  }
  uVar1 = 0;
  if (param_1[5] != 0) {
    iVar2 = 0;
    do {
      fn_82B6B3E8(param_1[4],*(undefined4 *)(iVar2 + *param_1));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)param_1[5]);
  }
  (*(code *)param_1[3])(param_1[1],*param_1);
  (*(code *)param_1[3])(param_1[1],param_1);
  return;
}

