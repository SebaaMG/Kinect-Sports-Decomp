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
extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_821630B0;
extern unsigned int lbl_821630C0;
extern unsigned int lbl_82163110;
extern unsigned int lbl_82163138;
extern unsigned int lbl_831BA6C8;
extern unsigned int lbl_831BA6C9;
extern unsigned int lbl_831BA760;
extern unsigned int lbl_831BA761;


uint * fn_82F44E60(uint *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined *puVar4;
  
  param_1[2] = param_2;
  param_1[8] = 0;
  param_1[3] = 1 << (param_2 & 0x3f);
  if ((int)param_2 < 4) {
    uVar3 = 0x4d;
    puVar4 = &lbl_821630C0;
  }
  else if (param_2 == 4) {
    uVar3 = 0xc;
    puVar4 = &lbl_821630B0;
  }
  else {
    if (param_2 == 8) {
      param_1[1] = (uint)&lbl_82163138;
      param_1[6] = (uint)&lbl_831BA6C8;
      *param_1 = 0x49;
      uVar3 = (uint)lbl_831BA6C8;
      param_1[5] = uVar3;
      param_1[6] = (uint)&lbl_831BA6C9;
      param_1[4] = 1 << (uVar3 & 0x3f);
      goto LAB_82f44f68;
    }
    if (param_2 == 10) {
      param_1[6] = (uint)&lbl_831BA760;
      param_1[1] = (uint)&lbl_821630B0;
      *param_1 = 0x40;
      uVar3 = (uint)lbl_831BA760;
      param_1[6] = (uint)&lbl_831BA761;
      param_1[5] = uVar3;
      param_1[4] = 1 << (uVar3 & 0x3f);
      goto LAB_82f44f68;
    }
    uVar3 = 0x22;
    puVar4 = &lbl_82163110;
  }
  *param_1 = uVar3;
  param_1[1] = (uint)puVar4;
LAB_82f44f68:
  lVar1 = ((ulonglong)*param_1 & 0x1fffffff) << 3;
  if (0x3fffffff < ((ulonglong)*param_1 & 0x7fffffff) << 1) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C940(lVar1,0x248c8000);
  param_1[8] = (uint)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    *param_3 = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*param_1 << 3);
}

