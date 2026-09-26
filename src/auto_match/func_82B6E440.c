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
extern int fn_82AB56B8();
extern int fn_82AB5768();


longlong fn_82B6E440(int *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da2f0,0xffffffff820da300,0x105);
  }
  uVar1 = param_1[5];
  trapWord(6,(ulonglong)uVar1,0);
  iVar3 = *(int *)((int)((param_2 - (longlong)(int)((param_2 & 0xffffffff) / (ulonglong)uVar1) *
                                    (longlong)(int)uVar1 & 0xffffffff) << 2) + *param_1);
  if (iVar3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820da300,0x10c);
  }
  lVar2 = fn_82AB56B8(iVar3,param_2);
  if ((lVar2 != 0) && (iVar3 = fn_82AB5768(iVar3), iVar3 != 0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da35c,0xffffffff820da300,0x113);
    lVar2 = 0;
  }
  return lVar2;
}

