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
extern unsigned int *auStack_70;
extern int fn_82A366C8();
extern int fn_82A36838();
extern int fn_82A39260();
extern int fn_82A392D0();
extern unsigned int iStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_82A368C8(int param_1,undefined4 param_2,uint *param_3,longlong param_4,ulonglong param_5)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    fn_82A36838();
  }
  uStack_5c = *param_3;
  uStack_58 = 0;
  *(undefined4 **)(param_1 + 0x4340) = &uStack_60;
  iVar2 = 0;
  *(code **)(param_1 + 0x4350) = fn_82A366C8;
  uStack_54 = 0;
  iStack_50 = 0;
  uStack_60 = param_2;
  uVar3 = param_5 & 0xffffffff;
  while (uVar3 != 0) {
    uVar3 = param_5;
    if (0x7fff < (param_5 & 0xffffffff)) {
      uVar3 = 0x8000;
    }
    iVar2 = iVar2 + 1;
    if ((param_5 & 0xffffffff) < 0x8001) {
      iStack_50 = iVar2;
    }
    fn_82A39260(param_1 + 0x10,param_4,uVar3,auStack_70,0);
    param_4 = uVar3 + param_4;
    param_5 = param_5 - uVar3;
    uVar3 = param_5;
  }
  fn_82A392D0(param_1 + 0x10);
  *param_3 = uStack_58;
  if (uStack_5c < uStack_58) {
    uVar1 = 6;
  }
  return uVar1;
}

