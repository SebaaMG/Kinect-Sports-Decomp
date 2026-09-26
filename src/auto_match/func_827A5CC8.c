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
extern int fn_82790270();


void fn_827A5CC8(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = 0;
  if ((*(int *)*param_3 == 2) && (iVar1 = 1, (uint)param_3[1] < 2)) {
    return;
  }
  piVar4 = (int *)*param_3 + iVar1 * 3;
  iVar1 = *piVar4;
  if ((iVar1 == 0) || ((iVar1 == 1 && (2 < (uint)piVar4[2])))) {
    uVar6 = (ulonglong)(uint)piVar4[1];
    uVar7 = (ulonglong)(uint)piVar4[2];
    if (iVar1 == 1) {
      uVar6 = uVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    sVar5 = 0;
    uVar2 = uVar7;
    if (5 < (uVar7 & 0xffffffff)) {
      uVar2 = 6;
    }
    iVar1 = fn_82790270(uVar6,0xffffffff82015c58,uVar2);
    if (iVar1 == 0) {
      sVar5 = 0;
    }
    else {
      uVar2 = uVar7;
      if (4 < (uVar7 & 0xffffffff)) {
        uVar2 = 5;
      }
      iVar1 = fn_82790270(uVar6,0xffffffff821ad38c,uVar2);
      if (iVar1 == 0) {
        sVar5 = 1;
      }
      else {
        if (3 < (uVar7 & 0xffffffff)) {
          uVar7 = 4;
        }
        iVar1 = fn_82790270(uVar6,0xffffffff821c53cc,uVar7);
        if (iVar1 == 0) {
          sVar5 = 2;
        }
      }
    }
    uVar3 = 0;
    if (param_2[1] != 0) {
      iVar1 = 0;
      do {
        uVar3 = uVar3 + 1;
        piVar4 = (int *)(iVar1 + *param_2);
        iVar1 = iVar1 + 4;
        *(ushort *)(*piVar4 + 0x42) = *(ushort *)(*piVar4 + 0x42) & 0xe6ff | sVar5 << 0xb | 0x100;
      } while (uVar3 < (uint)param_2[1]);
    }
  }
  return;
}

