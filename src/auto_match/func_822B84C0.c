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
extern unsigned int *auStack_30;
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined8 fn_822B84C0(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [48];
  
  fn_8255F880(auStack_30);
  uVar2 = fn_8255F8D0((double)lbl_821CC160,(double)lbl_821CA460,auStack_30);
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x184) = lbl_821917B4;
  uVar3 = fn_8251F720(param_3,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(undefined4 *)(iVar1 + 0x168) = 0;
  *(undefined4 *)(iVar1 + 0x160) = *param_3;
  fn_827F21F0(*(undefined4 *)(param_1 + 0xc));
  fn_827F2220(*(undefined4 *)(param_1 + 0xc));
  return uVar2;
}

