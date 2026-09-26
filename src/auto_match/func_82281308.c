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
extern int fn_8227FDA0();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8A08;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_82282330;
extern unsigned int lbl_82282340;
extern unsigned int lbl_82282350;


undefined4 *
fn_82281308(undefined4 *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  param_1[2] = param_4;
  *param_1 = &lbl_821A8A08;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = &lbl_821A8C90;
  param_1[0x10] = param_3;
  fn_822C5B18(param_1 + 0x12,param_7);
  param_1[0x18] = param_8;
  param_1[0x19] = 0;
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = fn_8265C9E0(0xa0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8227FDA0(uVar1,param_2);
    }
    param_1[4] = uVar2;
  }
  param_1[0xc] = param_1;
  param_1[0xd] = &lbl_82282340;
  param_1[0xe] = &lbl_82282350;
  param_1[0xf] = &lbl_82282330;
  fn_82359C18(param_7);
  return param_1;
}

