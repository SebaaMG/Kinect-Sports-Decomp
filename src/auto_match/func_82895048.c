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
extern int fn_8288E380();
extern int fn_828939C0();
extern int fn_8289D8D0();
extern int fn_828A12E8();
extern int fn_828B5608();
extern unsigned int lbl_82023898;
extern unsigned int lbl_82023C3C;


undefined4 * fn_82895048(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (int)param_2;
  *param_1 = &lbl_82023898;
  fn_828B5608(param_1 + 5);
  param_1[8] = &lbl_82023C3C;
  fn_828B5608(param_1 + 10);
  auStack_2c[0] = 0;
  param_1[0xc] = 2;
  param_1[8] = &lbl_82023C3C;
  fn_8288E380(param_1 + 0xf,0,auStack_2c,auStack_30);
  param_1[0x13] = 0;
  iVar2 = fn_828A12E8(param_2);
  *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 1;
  uVar1 = fn_8289D8D0(param_1[4]);
  fn_828939C0(param_1,param_3,0,uVar1);
  return param_1;
}

