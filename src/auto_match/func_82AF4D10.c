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
extern int fn_82AD12C8();


undefined8
fn_82AF4D10(undefined8 param_1,uint *param_2,undefined8 param_3,uint *param_4,undefined8 param_5,
             uint *param_6,undefined8 param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_2;
  iVar3 = 0;
  uVar7 = 0;
  uVar6 = 0xffffffff;
  if ((uVar1 & 0x18) != 0) {
    uVar2 = *(uint *)(param_2[3] + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar5 = false, uVar2 == 0x7c)) {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = uVar1 & 0x18;
      uVar7 = uVar1 & 0x18;
    }
    if ((uVar1 & 8) != 0) {
      iVar3 = fn_82AD12C8(param_3);
    }
  }
  uVar1 = *param_4;
  iVar4 = iVar3;
  if ((uVar1 & 0x18) != 0) {
    uVar2 = *(uint *)(param_4[3] + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar5 = false, uVar2 == 0x7c)) {
      bVar5 = true;
    }
    if (bVar5) {
      uVar7 = uVar1 & 0x18 | uVar7;
      uVar6 = uVar1 & 0x18 & uVar6;
    }
    if ((((uVar1 & 8) != 0) && (iVar4 = fn_82AD12C8(param_5), iVar3 != 0)) && (iVar4 != iVar3)) {
      return 0;
    }
  }
  uVar1 = *param_6;
  iVar3 = iVar4;
  if ((uVar1 & 0x18) != 0) {
    uVar2 = *(uint *)(param_6[3] + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar5 = false, uVar2 == 0x7c)) {
      bVar5 = true;
    }
    if (bVar5) {
      uVar7 = uVar1 & 0x18 | uVar7;
      uVar6 = uVar1 & 0x18 & uVar6;
    }
    if ((((uVar1 & 8) != 0) && (iVar3 = fn_82AD12C8(param_7), iVar4 != 0)) && (iVar3 != iVar4)) {
      return 0;
    }
  }
  if ((uVar7 != 0) && (uVar7 != uVar6)) {
    return 0;
  }
  *param_8 = iVar3;
  return 1;
}

