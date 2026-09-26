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
extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_8227D9B0();
extern int fn_82528FA8();
extern int fn_82F68CC0();
extern unsigned int lbl_821B0970;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82330AD8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  double dVar4;
  
  *param_1 = &lbl_821B0970;
  uVar1 = fn_82528FA8((double)lbl_821CA460,param_4,param_2,0xffffffff821962c0,
                            0xffffffff821ca1a0,param_5,0);
  param_1[4] = uVar1;
  puVar3 = param_1 + 8;
  fn_8227D7E8(puVar3);
  param_1[0x1d] = (int)param_5;
  dVar4 = (double)lbl_821CC160;
  param_1[0x1c] = lbl_821CC160;
  fn_82F68CC0(param_1 + 0x1e,param_3,0x18);
  param_1[0x25] = (float)dVar4;
  param_1[0x24] = 0;
  uVar2 = 0xc;
  if (param_6 != 0) {
    uVar2 = 0xb;
  }
  fn_8227D908(puVar3,uVar2);
  fn_8227D9B0(puVar3);
  return param_1;
}

