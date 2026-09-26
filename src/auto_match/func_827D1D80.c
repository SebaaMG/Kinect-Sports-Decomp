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
extern int fn_82F68CC0();


undefined8 fn_827D1D80(int param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = (ulonglong)*(uint *)(iVar1 + 0x34);
  if (uVar2 == 0) {
    uVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),1 << (*(uint *)(iVar1 + 0x24) & 0x3f),1);
    *(int *)(iVar1 + 0x34) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << (*(uint *)(iVar1 + 0x24) & 0x3f);
  }
  uVar3 = (ulonglong)*(uint *)(iVar1 + 0x28);
  uVar6 = param_2 - (ulonglong)*(uint *)(param_1 + 0x10);
  if ((uVar6 & 0xffffffff) < uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar1 + 0x30);
    if ((uVar6 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      uVar3 = uVar6;
    }
    fn_82F68CC0(*(uint *)(iVar1 + 0x30) + uVar2,*(uint *)(param_1 + 0xc) - uVar6,uVar3);
    lVar7 = uVar6 - uVar3;
    if (lVar7 == 0) {
      uVar4 = *(int *)(iVar1 + 0x30) + (int)uVar3;
      *(uint *)(iVar1 + 0x30) = uVar4;
      if (uVar4 == *(uint *)(iVar1 + 0x28)) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      if (*(uint *)(iVar1 + 0x28) <= *(uint *)(iVar1 + 0x2c)) {
        return 0;
      }
      iVar5 = *(uint *)(iVar1 + 0x2c) + (int)uVar3;
      goto LAB_827d1ea0;
    }
    fn_82F68CC0(*(undefined4 *)(iVar1 + 0x34),(ulonglong)*(uint *)(param_1 + 0xc) - lVar7,lVar7);
    *(int *)(iVar1 + 0x30) = (int)lVar7;
  }
  else {
    fn_82F68CC0(uVar2,*(uint *)(param_1 + 0xc) - uVar3);
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  iVar5 = *(int *)(iVar1 + 0x28);
LAB_827d1ea0:
  *(int *)(iVar1 + 0x2c) = iVar5;
  return 0;
}

