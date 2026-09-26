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
extern int fn_82C45138();
extern int fn_82C52ED0();
extern int fn_82C7BA80();


undefined8 fn_82C53980(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x56ac) = *(undefined4 *)(param_1 + 0x56bc);
  uVar2 = param_3 + 0xfU & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x56b0) = *(undefined4 *)(param_1 + 0x56c0);
  *(undefined4 *)(param_1 + 0x56b4) = *(undefined4 *)(param_1 + 0x56c4);
  *(undefined4 *)(param_1 + 0x56b8) = *(undefined4 *)(param_1 + 0x56c8);
  if ((*(int *)(param_1 + 0x3cb0) != 7) || (*(int *)(param_1 + 0xd50) != 1)) {
    iVar3 = fn_82C45138(param_1);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5644) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0x5648) = *(undefined4 *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0x9c) = param_2;
    *(int *)(param_1 + 0xa0) = param_3;
  }
  if ((*(uint *)(param_1 + 0x9c) != uVar1) || (uVar4 = 1, *(uint *)(param_1 + 0xa0) != uVar2)) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(uint *)(param_1 + 0xb4) = uVar1;
  *(uint *)(param_1 + 0xbc) = uVar2;
  iVar3 = fn_82C45138(param_1);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x5644) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x5648) = *(undefined4 *)(param_1 + 0xbc);
  }
  *(uint *)(param_1 + 0x56bc) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffc1;
  iVar3 = *(int *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xf4) = 0x3f;
  *(uint *)(param_1 + 0x56c0) = uVar2;
  if (*(int *)(param_1 + 0xf8c) == 0) {
    iVar5 = *(int *)(param_1 + 0xb4) >> 1;
    iVar3 = iVar3 >> 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb4) >> 2;
  }
  *(int *)(param_1 + 0x56c4) = iVar5;
  *(int *)(param_1 + 0xc0) = iVar5;
  *(int *)(param_1 + 0x56c8) = iVar3;
  *(int *)(param_1 + 200) = iVar3;
  if (*(int *)(param_1 + 0x3cb0) < 7) {
    *(uint *)(param_1 + 0x56ac) = uVar1;
    *(uint *)(param_1 + 0x56b0) = uVar2;
    *(int *)(param_1 + 0x56b8) = iVar3;
    *(undefined4 *)(param_1 + 0x56b4) = *(undefined4 *)(param_1 + 0x56c4);
  }
  fn_82C52ED0(param_1);
  fn_82C7BA80(param_1);
  return 0;
}

