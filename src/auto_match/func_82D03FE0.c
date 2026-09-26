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
extern unsigned int *auStack_154;
extern unsigned int *auStack_180;
extern int fn_82A1E658();
extern int fn_82A1F4F8();
extern int fn_82A2A438();
extern int fn_82A35B80();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CFBBF0();
extern int fn_82D03F60();
extern int fn_82D04570();
extern int fn_82D047D8();
extern int fn_82D04C78();
extern int fn_82D05178();
extern unsigned int iStack_1dc;
extern unsigned int lbl_8317F4E4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1f0;


undefined8 fn_82D03FE0(undefined8 param_1,undefined8 param_2)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint auStack_180 [5];
  longlong lStack_16c;
  undefined1 auStack_154 [340];
  
  fn_82CE7EE0(&uStack_1e0);
  fn_82D05178(&uStack_1b0,param_1);
  if (0 < (longlong)((ulonglong)uStack_1ac - 1)) {
    fn_82D047D8(&uStack_1b0,0x5c,0x2f,1);
    iVar3 = fn_82D04570(&uStack_1b0,0xffffffff821aa630);
    if (iVar3 == 0) {
      fn_82D04C78(&uStack_1b0,0xffffffff821aa630);
    }
    (*(code *)lbl_8317F4E4)(uStack_1b0,&uStack_1e0);
  }
  fn_82CE7E68(&uStack_1b0);
  uVar1 = fn_82A1F4F8(uStack_1e0);
  if (((int)uVar1 == -1) || (((uVar1 & 0xffffffff) >> 4 & 1) == 0)) {
    fn_82CE7E68(&uStack_1e0);
    uVar2 = 1;
  }
  else {
    if (iStack_1dc != 1) {
      fn_82D04C78(&uStack_1e0,0xffffffff82133fb8);
    }
    uVar2 = fn_82A2A438(uStack_1e0,auStack_180);
    if ((int)uVar2 != -1) {
      do {
        iVar3 = fn_82CFBBF0(auStack_154,0xffffffff821c7f2c);
        if ((iVar3 != 0) && (iVar3 = fn_82CFBBF0(auStack_154,0xffffffff8200eda4), iVar3 != 0)) {
          if ((auStack_180[0] >> 4 & 1) == 0) {
            uVar1 = (lStack_16c + -0x19db1ded53e8000) / 10000000 & 0xffffffff;
          }
          else {
            uVar1 = 0;
          }
          fn_82D03F60(param_2,auStack_154,uStack_1f0,uVar1);
        }
        iVar3 = fn_82A35B80(uVar2,auStack_180);
      } while (iVar3 != 0);
    }
    fn_82A1E658(uVar2);
    fn_82CE7E68(&uStack_1e0);
    uVar2 = 0;
  }
  return uVar2;
}

