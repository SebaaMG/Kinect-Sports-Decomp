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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_826438C0();
extern unsigned int lbl_821C1E80;
extern unsigned int lbl_821CC160;


undefined4 * fn_824F5A20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C1E80;
  if (param_2 == (undefined4 *)0x0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = *param_2;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  uVar2 = lbl_821CC160;
  param_1[7] = lbl_821CC160;
  param_1[8] = uVar2;
  fn_82520158(0xffffffff821c1e50,auStack_30,0);
  fn_82520158(0xffffffff821c1e68,auStack_2c,0);
  uVar1 = fn_8251F720(auStack_30,0);
  uVar2 = fn_82631830();
  param_1[3] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_8251F720(auStack_2c,0);
  uVar2 = fn_82631488();
  param_1[4] = uVar2;
  fn_8251FA58(uVar1);
  uVar1 = fn_82631BF8(0xffffffff831c31b8);
  auStack_2c[0] = 8;
  fn_826438C0(param_1[3],0,uVar1,auStack_2c,0);
  fn_8262FEC8(uVar1);
  param_1[5] = 0;
  return param_1;
}

