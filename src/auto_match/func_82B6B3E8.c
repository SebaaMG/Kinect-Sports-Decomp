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
extern int fn_82AB53C0();
extern int fn_82AB59E8();
extern int fn_82D3B290();
extern int fn_82F691F0();


void fn_82B6B3E8(int param_1,ulonglong param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d96e4,0xffffffff820d97e8,0xe0);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820d97e8,0xe1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d986c,0xffffffff820d97e8,0xe5);
  }
  iVar2 = fn_82AB59E8(param_2);
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d984c,0xffffffff820d97e8,0xe6);
  }
  fn_82AB53C0(param_2);
  uVar1 = fn_82D3B290();
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,uVar1);
}

