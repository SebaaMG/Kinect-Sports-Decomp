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
#define _iStack00000020 ((*(U64*)&iStack00000020))
extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_823DBA60();
extern int fn_82508078();
extern int fn_82F68CC0();
extern unsigned int iStack00000020;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


void fn_823CE9E0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  
  iVar3 = lbl_8218E8E8;
  iStack00000020 = (int)((ulonglong)param_2 >> 0x20);
  iVar2 = iStack00000020;
  iVar5 = iStack00000020 * 0x84 + param_1[0x12f];
  *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
  param_1[0x409] = iVar3;
  iVar3 = param_1[0x107];
  param_1[0x40a] = 0;
  _iStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  if ((((iVar3 == 2) || (iVar3 == 8)) || (iVar3 == 9)) || ((iVar3 == 6 || (iVar3 == 7)))) {
    if (param_1[0x130] != 0) goto LAB_823ceaa4;
    uVar4 = 0xffffffff821b60b4;
  }
  else {
    if (param_1[0x130] != 0) goto LAB_823ceaa4;
    uVar4 = 0xffffffff821b60c0;
  }
  fn_82508078(param_1[0x29],uVar4,0);
LAB_823ceaa4:
  iVar3 = iVar2 * 4;
  uVar4 = 0x1c;
  piVar1 = *(int **)(param_1[8] + iVar3);
  if (piVar1[1] - *piVar1 >> 2 == 0) {
    uVar4 = 0x1d;
  }
  fn_823CC298(param_1[0x12e],uVar4);
  fn_8236B7E0(param_1,iVar2,1);
  piVar1 = *(int **)(param_1[8] + iVar3);
  if (piVar1[1] - *piVar1 >> 2 != 0) {
    param_1[0x38e] = 1;
  }
  if (*(int *)(param_1[300] + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  *(undefined1 *)((int)param_1 + 0xd51) = 0;
  *(undefined1 *)((int)param_1 + 0xd52) = 0;
  *(undefined1 *)(param_1 + 0x354) = 0;
  param_1[0x4e4] = 4;
  fn_82F68CC0(param_1 + 0x50c,&stack0x00000020,0x90);
  fn_82359698(param_1,0x15);
  iVar3 = (**(code **)(*param_1 + 200))(param_1);
  if (iVar3 == 0) {
    fn_823DBA60(param_1[300],param_1[0x26b]);
  }
  fn_823D6088(param_1 + 0x27e);
  return;
}

