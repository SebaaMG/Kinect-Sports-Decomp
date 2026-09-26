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
extern unsigned int *auStack_60;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82476198();
extern unsigned int lbl_821BCFD4;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82478A00(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [96];
  
  param_1[3] = lbl_821CC160;
  param_1[1] = 4;
  param_1[2] = 0;
  *param_1 = &lbl_821BCFD4;
  uVar1 = fn_822C5B18(auStack_60,param_6);
  fn_82476198(param_1 + 4,param_2,param_3,param_4,param_5,uVar1,param_7);
  param_1[0x69] = (int)param_3;
  param_1[0x68] = 0;
  param_1[0x6a] = (int)param_7;
  param_1[0x6c] = *(undefined4 *)(param_5 + 0x844);
  param_1[0x6d] = param_5;
  param_1[0x6e] = *(undefined4 *)(param_5 + 0x8c8);
  param_1[0x6f] = 0;
  param_1[0x6b] = *(undefined4 *)(param_2 + 0xc);
  fn_82359C18(param_6);
  return param_1;
}

