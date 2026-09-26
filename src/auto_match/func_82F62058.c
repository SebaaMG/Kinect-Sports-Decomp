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
extern int fn_82A1BB18();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F62058(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  char in_RESERVE;
  byte in_cr0;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0xffffffff82240403;
  }
  else {
    uVar3 = 0;
    uVar4 = fn_82A1BB18();
    lVar5 = param_1 + 4;
    do {
      puVar6 = (uint *)lVar5;
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar8 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar5);
          *puVar6 = uVar8;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed(uVar4,0,lVar5);
        *puVar6 = uVar8;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == 0) {
      iVar2 = (int)param_1;
      uVar1 = *(uint *)(iVar2 + 0x24);
      if ((ulonglong)*(uint *)(iVar2 + 0x14) < ((ulonglong)uVar1 - 1 & 0xffffffff)) {
        iVar7 = *(uint *)(iVar2 + 0x14) + 1;
      }
      else {
        iVar7 = *(int *)(iVar2 + 0x20);
      }
      trapWord(6,(ulonglong)uVar1,0);
      *(int *)(iVar2 + 0x14) = iVar7;
      uVar8 = *(int *)(iVar2 + 0x10) + 1;
      *(uint *)(iVar2 + 0x10) = uVar8;
      iVar7 = (uVar8 - (uVar8 / uVar1) * uVar1) * *(int *)(iVar2 + 0x28) + *(int *)(iVar2 + 0x50);
      *(int *)(iVar2 + 0x4c) = iVar7;
      *param_2 = iVar7;
      if (param_3 != (int *)0x0) {
        *param_3 = 0;
        if (1 < *(uint *)(iVar2 + 0x10)) {
          uVar1 = *(uint *)(iVar2 + 0x24);
          uVar8 = *(uint *)(iVar2 + 0x10) - 1;
          trapWord(6,(ulonglong)uVar1,0);
          *param_3 = (uVar8 - (uVar8 / uVar1) * uVar1) * *(int *)(iVar2 + 0x28) +
                     *(int *)(iVar2 + 0x50);
        }
      }
    }
    else {
      uVar3 = 0xffffffff82240401;
    }
  }
  return uVar3;
}

