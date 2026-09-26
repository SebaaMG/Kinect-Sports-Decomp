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
extern unsigned int *auStack_40;
extern int fn_82E498A0();
extern int fn_82E49E20();


undefined8
fn_82E4A178(int param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong auStack_40 [8];
  
  uVar5 = *(ulonglong *)(param_1 + 200);
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  uVar4 = 0;
  *(int *)(param_5 + 0xc) = (int)uVar5;
  *(int *)(param_5 + 0x10) = (int)(uVar5 >> 0x20);
  *(undefined4 *)(param_5 + 0x60) = uVar1;
  if (*(int *)(param_5 + 0x38) == 1) {
    uVar4 = fn_82E498A0(param_1,auStack_40);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar7 = *(ulonglong *)(param_1 + 200);
    if (auStack_40[0] < (param_3 & 0xffffffff) + uVar7) {
      if (uVar7 < auStack_40[0]) {
        param_3 = (auStack_40[0] & 0xffffffff) - (uVar7 & 0xffffffff);
      }
      else {
        param_3 = 0;
      }
    }
    *(undefined4 *)(param_5 + 0x3c) = param_2;
    uVar7 = (uVar5 & 0xffffffff) + param_3;
    *(int *)(param_5 + 0x40) = (int)param_3;
    uVar2 = *(uint *)(param_1 + 0xc0);
    trapWord(6,(ulonglong)uVar2,0);
    *(uint *)(param_5 + 0x54) = (int)uVar5 - (int)((uVar5 & 0xffffffff) / (ulonglong)uVar2) * uVar2;
    uVar2 = *(uint *)(param_1 + 0xc0);
    trapWord(6,(ulonglong)uVar2,0);
    lVar8 = uVar7 - (longlong)(int)((uVar7 & 0xffffffff) / (ulonglong)uVar2) * (longlong)(int)uVar2;
    iVar6 = (int)lVar8;
    *(int *)(param_5 + 0x58) = iVar6;
    if (lVar8 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc0) - iVar6;
    }
    iVar3 = *(int *)(param_5 + 0x54);
    *(int *)(param_5 + 0x5c) = iVar6;
    if ((iVar3 != 0) || (*(int *)(param_5 + 0x58) != 0)) {
      *(int *)(param_5 + 0x4c) = iVar3 + iVar6 + (int)param_3;
      *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) - iVar3;
      if (*(int *)(param_1 + 0xb8) == 0) {
        return 0xffffffffc00d36bb;
      }
      uVar4 = fn_82E49E20(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_5 + 0x4c),param_5 + 0x48)
      ;
      return uVar4;
    }
  }
  else {
    if (*(int *)(param_5 + 0x38) != 2) {
      return 0;
    }
    *(undefined4 *)(param_5 + 0x3c) = param_2;
    *(int *)(param_5 + 0x40) = (int)param_3;
  }
  *(int *)(param_5 + 0x4c) = (int)param_3;
  *(undefined4 *)(param_5 + 0x48) = param_2;
  return uVar4;
}

