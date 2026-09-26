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
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8247BB18();
extern unsigned int lbl_821BD50C;
extern unsigned int lbl_821CC160;


undefined4 *
fn_8247C228(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_70 [112];
  
  dVar2 = (double)lbl_821CC160;
  param_1[3] = lbl_821CC160;
  param_1[1] = 5;
  param_1[2] = 0;
  *param_1 = &lbl_821BD50C;
  uVar1 = fn_822C5B18(auStack_70,param_7);
  fn_8247BB18(param_1 + 4,param_2,param_3,param_4,param_5,param_6,uVar1,param_8);
  param_1[0x2a] = (float)dVar2;
  param_1[0x24] = (int)param_4;
  param_1[0x25] = (int)param_3;
  param_1[0x29] = 0;
  param_1[0x26] = *(undefined4 *)(param_2 + 0xc);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x10);
  param_1[0x28] = *(undefined4 *)(param_2 + 0x14);
  fn_82359C18(param_7);
  return param_1;
}

