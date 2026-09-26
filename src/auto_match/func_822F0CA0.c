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
extern unsigned int lbl_821AE578;
extern unsigned int lbl_821CC160;


undefined4 *
fn_822F0CA0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_50 [80];
  
  iVar2 = fn_82365BD8(auStack_50,param_6);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = 5;
  *param_1 = &lbl_821ADF3C;
  param_1[5] = param_5;
  fn_82365BD8(param_1 + 6,iVar2);
  param_1[8] = param_7;
  if (*(int *)(iVar2 + 4) != 0) {
    fn_822315A0();
  }
  param_1[0xc] = 0;
  uVar1 = lbl_821CC160;
  *param_1 = &lbl_821AE578;
  param_1[9] = uVar1;
  param_1[0xd] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

