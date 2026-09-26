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
extern int fn_82E829D0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_821551E0;
extern unsigned int lbl_8215F5F0;


void fn_82F155F0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = fn_82E829D0();
  *(int *)(param_1 + 0x88c) = (int)uVar3;
  if (*(double *)(param_1 + 0x1e08) < lbl_8215F5F0) {
    iVar4 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar4 = 0x1f;
  }
  if (*(double *)(param_1 + 0x1ed0) < lbl_821551E0) {
    iVar5 = (int)*(double *)(param_1 + 0x1ed0);
  }
  else {
    iVar5 = 0x7ff;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar3,3);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar4 >> 2,3);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar5 >> 6,5);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x880),1);
  uVar1 = *(uint *)(param_1 + 0x31c);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  uVar1 = *(uint *)(param_1 + 800);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x644),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x314),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x978),2);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x648),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x920),1);
  if (*(int *)(param_1 + 0x59c) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
    uVar2 = *(undefined4 *)(param_1 + 0x5a0);
  }
  else {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    uVar2 = *(undefined4 *)(param_1 + 0x594);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar2,1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(int *)(param_1 + 0x76e0) == 0,1);
  fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
  return;
}

