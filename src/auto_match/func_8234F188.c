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
extern int fn_8251F720();
extern int fn_8255F448();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F21F0();
extern int fn_827F2220();
extern int fn_827F5730();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821CA460;


void fn_8234F188(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_f1;
  undefined1 auStack_50 [80];
  
  iVar4 = fn_82F6A548();
  uVar2 = extraout_f1;
  fn_8255F880(auStack_50);
  uVar2 = fn_8255F8D0(uVar2,param_2,auStack_50);
  *(float *)(*(int *)(iVar4 + 4) + 0x184) = (float)param_3;
  iVar1 = *(int *)(iVar4 + 4);
  uVar3 = fn_8251F720(param_7,0);
  fn_8255F448(iVar1,uVar2,uVar3,0);
  *(undefined4 *)(iVar1 + 0x168) = 0;
  *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)param_7;
  fn_827F21F0(*(undefined4 *)(iVar4 + 4));
  fn_827F2220(*(undefined4 *)(iVar4 + 4));
  fn_827F5730((double)lbl_821CA460,param_4,*(undefined4 *)(iVar4 + 0xc));
  *(float *)(iVar4 + 0x14) = (float)param_4;
  fn_82F6A594();
  return;
}

