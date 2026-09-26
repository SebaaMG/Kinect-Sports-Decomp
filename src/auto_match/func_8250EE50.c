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
extern unsigned int *auStack_40;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F62A8();
extern int fn_827F6430();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_8250EE50(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [64];
  
  fn_8255F880(auStack_40,param_2 + 0x18);
  uVar1 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_40);
  fn_827F62A8(param_1);
  fn_827F6430(param_1,uVar1);
  *(float *)(param_3 + 0x184) = lbl_821CC160;
  uVar2 = fn_8251F720(param_2 + 0x1c,0);
  fn_8255F448(param_3,uVar1,uVar2,0);
  *(undefined4 *)(param_3 + 0x168) = 0;
  *(undefined4 *)(param_3 + 0x160) = *(undefined4 *)(param_2 + 0x1c);
  fn_827F21F0(param_3);
  fn_827F2220(param_3);
  return uVar1;
}

