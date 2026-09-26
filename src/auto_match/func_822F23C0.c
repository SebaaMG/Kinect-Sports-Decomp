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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE5A8;


undefined4 *
fn_822F23C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 auStack_50 [80];
  
  iVar1 = fn_82365BD8(auStack_50,param_7);
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *param_1 = &lbl_821ADF3C;
  param_1[5] = param_6;
  fn_82365BD8(param_1 + 6,iVar1);
  param_1[8] = param_8;
  if (*(int *)(iVar1 + 4) != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_821AE5A8;
  param_1[9] = 0;
  if (*(int *)(param_7 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

