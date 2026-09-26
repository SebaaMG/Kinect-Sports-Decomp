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
extern int fn_825089A0();
extern int fn_8289F6C0();
extern int fn_8289FC80();
extern int fn_828AF208();
extern int fn_82F68CC0();
extern unsigned int lbl_82024C08;
extern unsigned int lbl_821AAD20;


undefined4 * fn_828AF740(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 in_r8;
  double dVar3;
  
  fn_8289FC80();
  *param_1 = &lbl_82024C08;
  fn_82F68CC0(param_1 + 0x19,in_r8,0x24);
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  uVar1 = lbl_821AAD20;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  param_1[0x24] = uVar1;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x97) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = uVar1;
  param_1[0x32] = uVar1;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((int)param_1 + 0xb1) = 0;
  *(undefined1 *)((int)param_1 + 0xb2) = 0;
  *(undefined1 *)((int)param_1 + 0xb3) = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  fn_8289F6C0(param_2,param_1);
  piVar2 = (int *)fn_825089A0();
  dVar3 = (double)(**(code **)(*piVar2 + 8))();
  param_1[0x23] = (float)dVar3;
  fn_828AF208(param_1,0);
  return param_1;
}

