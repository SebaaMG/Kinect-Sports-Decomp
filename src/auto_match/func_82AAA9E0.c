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
extern int fn_82AA9A38();
extern int fn_82AA9B80();
extern int fn_82AAA7D8();
extern int fn_82AAC5E8();


undefined8
fn_82AAA9E0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined2 uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar4 = (ulonglong)uVar2;
  iVar6 = *(int *)(param_1 + 0x20) >> (param_8 & 0x3f);
  iVar9 = param_3;
  if (param_8 != 1) {
    iVar9 = param_3 >> 2;
    if (param_8 == 2) {
      uVar4 = (ulonglong)((int)uVar2 >> 2);
    }
    else if (param_8 == 3) {
      uVar4 = (ulonglong)((int)uVar2 >> 2);
    }
    else {
      iVar9 = param_3;
      if (param_8 == 4) {
        uVar4 = (ulonglong)((int)uVar2 >> 4);
        iVar9 = param_3 >> 4;
      }
    }
  }
  uVar5 = *(ushort *)(param_1 + 0x16);
  uVar8 = *(ushort *)(param_1 + 0x34);
  if ((uVar5 & 0xf0) == 0x40) {
    iVar6 = *(int *)(param_1 + 0x20) >> 1;
    param_5 = param_5 >> 1;
    uVar8 = 4;
  }
  if (((int)param_4 < 0) || (iVar6 <= (int)param_4)) {
    return 0xffffffffffffffff;
  }
  bVar3 = *(int *)(param_1 + 0x18) == 0;
  bVar7 = *(int *)(param_1 + 0x1c) == 0;
  if (((uVar5 & 0x1000) != 0) &&
     ((1 << (*(ushort *)(param_1 + 0x34) - 1 & 0x3f) & (uint)*(ushort *)(param_1 + 0x14)) != 0)) {
    bVar7 = true;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x32);
  uVar5 = uVar5 >> 4 & 0xf;
  if (uVar8 < 3) {
    uVar5 = -(ushort)(uVar5 == 4) & uVar5;
  }
  if (uVar5 != 0) {
    if (uVar5 < 4) {
      fn_82AA9B80(uVar8,uVar4,param_5,param_6,iVar9,param_7,bVar3,bVar7);
      goto LAB_82aaab74;
    }
    if (uVar5 == 4) {
      fn_82AAA7D8();
      goto LAB_82aaab74;
    }
  }
  fn_82AA9A38(param_1,param_5,param_6,iVar9,param_7,bVar3,bVar7,uVar1);
LAB_82aaab74:
  fn_82AAC5E8(param_2,param_7,param_4,uVar1);
  return 0;
}

