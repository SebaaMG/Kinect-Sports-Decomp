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
extern unsigned int *auStack_16f;
extern unsigned int *auStack_f0;
extern int fn_82F63F40();
extern int fn_82F691F0();
extern unsigned int uStack_1fc;


void fn_82AA1FC8(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uStack_1fc;
  undefined1 auStack_16f [127];
  undefined1 auStack_f0 [240];
  
  uVar1 = *(uint *)(param_3 + 4);
  if (uVar1 == 0) {
    uStack_1fc = 0x62;
  }
  else if (uVar1 == 1) {
    uStack_1fc = 0x69;
  }
  else if (uVar1 < 3) {
    uStack_1fc = 99;
  }
  else if (uVar1 == 3) {
    uStack_1fc = 0x73;
  }
  uVar2 = (ulonglong)*(uint *)(param_3 + 0xc);
  if (uVar2 == 0) {
    fn_82F63F40(auStack_f0,0xffffffff820d31d0,uStack_1fc);
  }
  else if (uVar2 == 1) {
    fn_82F63F40(auStack_f0,0xffffffff820d31c8,uStack_1fc);
  }
  else {
    fn_82F63F40(auStack_f0,0xffffffff820d31c0,uStack_1fc,(ulonglong)*(uint *)(param_3 + 8),
                      *(uint *)(param_3 + 8) + uVar2 + -1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_16f,0,0x7f);
}

