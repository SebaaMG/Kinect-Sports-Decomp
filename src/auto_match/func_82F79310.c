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
extern unsigned int *auStack_a0;
extern int fn_82F78938();
extern int fn_82F78D40();
extern int fn_82F78F98();
extern int fn_82F78FE0();
extern int fn_82F79028();
extern int fn_82F79400();
extern unsigned int lbl_831BC2A4;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x0000003c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000030;
extern unsigned int uStack0000003c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


undefined8
fn_82F79310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong in_r8;
  undefined8 uStack00000020;
  undefined8 uStack00000030;
  uint uStack0000003c;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  uint uStack_60;
  
  uStack0000003c = (uint)in_r8;
  uStack00000020 = param_1;
  uStack00000030 = param_3;
  iVar2 = fn_82F78D40(param_4,&stack0x00000030,in_r8);
  if (iVar2 == 0) {
    uStack_60 = uStack_60 & 0x7ffffff | 0x88000000;
    uStack_70 = param_2;
    fn_82F78938(auStack_a0,&stack0x0000003c,param_4,param_5,&stack0x00000020,&stack0x00000030,0)
    ;
    in_r8 = (ulonglong)uStack0000003c;
  }
  uVar1 = fn_82F78FE0(param_4);
  if ((lbl_831BC2A4 == 0) && ((int)uVar1 != 0)) {
    uStack00000030 = fn_82F79028(param_1,param_2,uStack00000030,uVar1,param_5);
  }
  else {
    fn_82F78F98();
    fn_82F79400(in_r8,0xffffffffc007feff);
  }
  return uStack00000030;
}

