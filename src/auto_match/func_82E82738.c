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
extern int fn_82E8CA90();
extern int fn_82F02390();
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_821551E0;
extern unsigned int lbl_8215F5F0;


void fn_82E82738(int param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  fn_82F02390(*(undefined4 *)(param_1 + 0x1ebc),param_2,0,0);
  iVar3 = *(int *)(param_1 + 0x888);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else if (iVar3 == 1) {
    uVar2 = 1;
  }
  else {
    if (iVar3 != 2) goto LAB_82e82798;
    uVar2 = 2;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar2,2);
LAB_82e82798:
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xb08),1);
  if (*(double *)(param_1 + 0x1e08) < lbl_8215F5F0) {
    iVar3 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar3 = 0x1f;
  }
  if (*(double *)(param_1 + 0x1ed0) < lbl_821551E0) {
    iVar4 = (int)*(double *)(param_1 + 0x1ed0);
  }
  else {
    iVar4 = 0x7ff;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar3 >> 2,3);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar4 >> 6,5);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x644),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x62c),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x64c),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x628),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x314),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xa04),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x978),2);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x648),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x604),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x920),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x8d4),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xafc),1);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x84c);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x84c),3);
  if (*(int *)(param_1 + 0x59c) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
    uVar1 = *(undefined4 *)(param_1 + 0x5a0);
  }
  else {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    uVar1 = *(undefined4 *)(param_1 + 0x594);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar1,1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x5a4),1);
  if (*(int *)(param_1 + 0xb08) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x880),1);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
    fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
    *param_3 = (int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff)
                    >> 3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
    fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
  }
  else {
    fn_82E8CA90(param_1,0,param_3);
  }
  return;
}

