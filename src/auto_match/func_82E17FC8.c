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
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFDFE0();
extern unsigned int *lbl_8323B464;


void fn_82E17FC8(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulonglong in_r0;
  int iVar2;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [528];
  
  if (param_2 - 1U < 0x20) {
    in_r0 = (ulonglong)*(uint *)((param_2 - 1U) * 4 + -0x7d1e8004);
    switch(param_2) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      uVar1 = (uint)param_3;
      param_3 = 4;
      param_4 = (longlong)(int)(uVar1 >> 2) * (longlong)(int)param_4;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0x20:
      fn_82CFDFE0(param_1,param_5,param_3,param_4);
      return;
    }
  }
  fn_82CEE578(auStack_220,auStack_210,0x200);
  fn_82CEDB38(auStack_220,0xffffffff8214b544);
  iVar2 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x747e1e03,auStack_210,0xffffffff8214b528,0xfd);
  if (iVar2 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_220);
}

