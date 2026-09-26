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
extern int fn_82359928();
extern int fn_824556F0();
extern int fn_82455D40();
extern int fn_824569A8();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_82508078();
extern int fn_8254EDB0();
extern int fn_8288B760();
extern unsigned int lbl_821BA6EC;
extern unsigned int lbl_821CA460;


void fn_823647E0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0x24))();
  uVar4 = (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))();
  fn_82455D40(uVar4,param_2);
  fn_82508078(*(undefined4 *)(param_1 + 0x3f4),lbl_821BA6EC,0);
  fn_824569A8(param_1 + 0x7b0);
  if (*(int *)(param_1 + 0xac) != 1) {
    iVar5 = fn_8249ABC0();
    if (*(int *)(param_1 + 0xb4) != -1) {
      fn_8249D980(*(undefined4 *)(iVar5 + 0x110));
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  fn_82359928(param_1,1);
  if (*(int *)(param_2 + 0x24) != 0) {
    if (*(int *)(param_2 + 0x168) == 0) {
      uVar6 = *(uint *)(param_2 + 0x16c);
    }
    else {
      uVar6 = fn_8288B760();
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0) {
      fn_824556F0(param_1 + 0x45c,param_1 + 0x468);
      uVar3 = *(undefined4 *)(param_1 + 0x4a8);
      goto LAB_823648e0;
    }
  }
  fn_824556F0(param_1 + 0x45c,param_1 + 0x46c);
  uVar3 = *(undefined4 *)(param_1 + 0x490);
LAB_823648e0:
  fn_8254EDB0((double)*(float *)(param_1 + 0x4bc),(double)*(float *)(param_1 + 0x4c0),
                    *(undefined4 *)(param_1 + 0x4d8),uVar3);
  iVar5 = *(int *)(param_1 + 0x4d8);
  uVar3 = *(undefined4 *)(param_1 + 0x4b4);
  uVar1 = *(undefined4 *)(param_1 + 0x4b8);
  uVar2 = *(undefined4 *)(param_1 + 0x4c8);
  if (*(int *)(iVar5 + 4) != 0) {
    *(undefined4 *)(iVar5 + 0x1cc) = *(undefined4 *)(param_1 + 0x4b0);
    *(undefined4 *)(iVar5 + 0x1dc) = uVar2;
    *(undefined4 *)(iVar5 + 0x1e0) = lbl_821CA460;
    *(undefined4 *)(iVar5 + 0x1d4) = 1;
    *(undefined4 *)(iVar5 + 0x1d8) = uVar1;
    *(undefined4 *)(iVar5 + 0x1d0) = uVar3;
  }
  return;
}

