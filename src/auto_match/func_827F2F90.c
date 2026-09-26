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
extern int fn_827F4010();
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827FA468();
extern int fn_827FA5E8();
extern unsigned int lbl_8201DD20;
extern unsigned int lbl_821AAD20;


undefined4 *
fn_827F2F90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined2 param_5,undefined4 param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  fn_827F4248(param_1,param_1 + 0x18,param_3,0,0);
  *param_1 = &lbl_8201DD20;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = param_4;
  *(undefined2 *)(param_1 + 0x17) = param_5;
  fn_827F4100(param_1 + 0x18,param_2);
  param_1[0x43] = param_6;
  param_1[0x41] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x3d] = lbl_821AAD20;
  param_1[0x3e] = uVar3;
  uVar1 = fn_827FA468(0xb4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_827FA5E8(uVar1,param_1,param_3);
  }
  param_1[8] = (int)uVar2;
  uVar3 = fn_827F4010(uVar2);
  param_1[0x10] = uVar3;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x42] = (int)uVar2;
  *(byte *)((int)param_1 + 0x51) = *(byte *)((int)param_1 + 0x51) | 1;
  return param_1;
}

