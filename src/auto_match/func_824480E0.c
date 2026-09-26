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
extern int fn_82437388();
extern int fn_82448010();
extern int fn_8244C688();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9CF0;


undefined4 * fn_824480E0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_8244C688();
  *param_1 = &lbl_821B9CF0;
  iVar2 = fn_8265C9E0(0x44);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82448010();
  }
  param_1[0x12] = iVar2;
  iVar1 = *(int *)(*(int *)param_1[0x10] + 0xa0);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) ||
     (iVar1 = *(int *)(*(int *)param_1[0x10] + 0xa0), iVar1 == 0)) {
    *(undefined4 *)(param_1[0x12] + 0x14) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1[0x12] + 0x18) = *(undefined4 *)(param_2 + 0x1ac);
    uVar3 = *(undefined4 *)(param_2 + 0x1b0);
  }
  else {
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x160);
    *(undefined4 *)(param_1[0x12] + 0x18) = *(undefined4 *)(iVar1 + 0x164);
    uVar3 = *(undefined4 *)(iVar1 + 0x168);
  }
  *(undefined4 *)(param_1[0x12] + 0x1c) = uVar3;
  *(undefined4 *)(param_1[0x12] + 0x10) = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1[0x12] + 0x20) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1[0x12] + 0x24) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1[0x10] + 0x208) = 0x1a;
  *(undefined4 *)(param_1[0x10] + 0x114) = 2;
  fn_82437388(param_1);
  *(undefined4 *)(param_1[0x10] + 0x180) = 0x23;
  return param_1;
}

