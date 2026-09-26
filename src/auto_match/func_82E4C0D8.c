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
extern int fn_8265C940();
extern int fn_82E82738();
extern int fn_82E86848();
extern int fn_82F68CC0();


undefined8
fn_82E4C0D8(int param_1,byte *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (((int)param_4 == 0) && (*(int *)(param_1 + 0x200) != 0)) {
    param_4 = 1;
  }
  if (((int)param_5 == 0) && (*(int *)(param_1 + 0x200) != 0)) {
    param_5 = 1;
  }
  if (((*(int *)(param_1 + 0x10) == 0x574d5641) || (*(int *)(param_1 + 0x10) == 0x776d7661)) ||
     (*(int *)(param_1 + 0x3c) != 0)) {
    *param_2 = 1;
    if (*(int *)(param_1 + 0x21c) == 0) {
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x84c) == 0) {
        *param_2 = 3;
      }
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x8e0) == 0) {
        *param_2 = *param_2 | 4;
      }
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x6f4c) == 0) {
        *param_2 = *param_2 | 0x20;
      }
    }
    pbVar6 = param_2 + 1;
    fn_82E86848(*(undefined4 *)(param_1 + 0xc),pbVar6,param_3,param_4,param_5);
    uVar5 = *param_3 + 1;
    *param_3 = uVar5;
    iVar1 = *(int *)(param_1 + 0xc);
    if (((*(int *)(iVar1 + 0x840) == 1) && (*(int *)(iVar1 + 0x838) != 0)) && (uVar4 = 1, 1 < uVar5)
       ) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    iVar1 = *(int *)(iVar1 + 0x834);
    *(int *)(param_1 + 0x50) = iVar1 + 0x6c;
    *(int *)(param_1 + 0x30) = iVar1;
    uVar3 = fn_8265C940(iVar1,0x248c8000);
    *(int *)(param_1 + 0x4c) = (int)uVar3;
    if ((uVar3 & 0xffffffff) == 0) {
      uVar2 = 0xffffffffffffff9c;
    }
    else {
      if (*(int *)(param_1 + 0x3c) == 0) {
        pbVar6 = param_2 + 5;
      }
      fn_82F68CC0(uVar3,pbVar6,*(undefined4 *)(param_1 + 0x30));
      uVar2 = 0;
    }
  }
  else {
    fn_82E82738(*(undefined4 *)(param_1 + 0xc),param_2,param_3);
    uVar2 = 0;
  }
  return uVar2;
}

