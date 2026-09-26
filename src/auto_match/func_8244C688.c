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
extern int fn_82433068();
extern int fn_82437388();
extern int fn_82437E38();
extern int fn_8244C498();
extern int fn_8265C9E0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821BA15C;


undefined4 * fn_8244C688(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  fn_82433068();
  *param_1 = &lbl_821BA15C;
  uVar1 = fn_8265C9E0(0x130);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8244C498(uVar1,param_2);
  }
  param_1[0x11] = uVar2;
  *(undefined4 *)(param_1[0x10] + 0xf8) = 1;
  *(undefined4 *)(param_1[0x10] + 0x134) = 1;
  if (*(int *)(param_1[0x10] + 0xf8) != 0) {
    *(undefined4 *)(param_1[0x10] + 0x158) = 1;
  }
  *(undefined4 *)(param_1[0x10] + 0x134) = *(undefined4 *)(param_1[0x10] + 0xf8);
  *(undefined4 *)(param_1[0x10] + 0x208) = 0x19;
  *(undefined4 *)(param_1[0x10] + 0x114) = 1;
  fn_82437388(param_1);
  fn_82437E38(param_1,2,0);
  fn_82437E38(param_1,6,0);
  fn_82437E38(param_1,7,0);
  fn_82437E38(param_1,8,0);
  fn_82437E38(param_1,9,0);
  fn_82437E38(param_1,10,0);
  fn_82437E38(param_1,0xc,0);
  iVar3 = *(int *)(*(int *)param_1[0x10] + 0xa0);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x40) == 1)) &&
     (iVar3 = *(int *)(*(int *)param_1[0x10] + 0xa0), iVar3 != 0)) {
    *(undefined4 *)param_1[0x11] = *(undefined4 *)(iVar3 + 0x15c);
  }
  iVar3 = 0x50;
  *(undefined4 *)(param_1[0x10] + 0x16c) = lbl_82192734;
  *(undefined4 *)(param_1[0x10] + 0x180) = 0x22;
  lVar4 = 8;
  *(undefined4 *)(param_1[0x11] + 0x4c) = *(undefined4 *)(param_2 + 0x138);
  do {
    *(undefined4 *)(iVar3 + param_1[0x11]) = *(undefined4 *)(param_2 + 0xec + iVar3);
    iVar3 = iVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_1;
}

