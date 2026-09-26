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
extern int fn_825AA5F0();
extern int fn_82AB15D0();
extern int fn_82AB5FE0();
extern int fn_82AB60F0();
extern int fn_82F691F0();


void fn_82B6B868(int param_1,ulonglong param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d96e4,0xffffffff820d97e8,0x29a);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6b0c,0xffffffff820d97e8,0x29b);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d986c,0xffffffff820d97e8,0x29f);
  }
  iVar2 = fn_82AB60F0(param_2);
  if (iVar2 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d98e4,0xffffffff820d97e8,0x2a0);
  }
  fn_82AB5FE0(param_2);
  uVar1 = fn_825AA5F0();
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,uVar1);
}

