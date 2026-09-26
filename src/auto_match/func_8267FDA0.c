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


undefined8
fn_8267FDA0(int param_1,ulonglong param_2,int param_3,uint param_4,int param_5,ulonglong param_6,
             int param_7,uint param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined1 uVar9;
  int in_stack_00000054;
  
  uVar1 = (param_2 & 0xffffffff) >> 3;
  uVar2 = (param_6 & 0xffffffff) >> 3;
  if (param_3 == 1) {
    if (param_7 == 9) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          uVar7 = uVar7 + uVar1;
          *(undefined1 *)((int)uVar6 + param_5) = *(undefined1 *)(iVar3 + param_1 + 3);
          uVar6 = uVar6 + uVar2;
        } while ((uVar7 & 0xffffffff) < (ulonglong)param_4);
      }
    }
    else {
      if (param_7 != 2) {
        return 0;
      }
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          iVar4 = (int)uVar6;
          uVar7 = uVar7 + uVar1;
          *(undefined1 *)(iVar4 + param_5) = *(undefined1 *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar2;
          *(undefined1 *)(iVar4 + param_5 + 1) = *(undefined1 *)(iVar3 + param_1 + 1);
          *(undefined1 *)(iVar4 + param_5 + 2) = *(undefined1 *)(iVar3 + param_1 + 2);
        } while ((uVar7 & 0xffffffff) < (ulonglong)param_4);
      }
    }
  }
  else if (param_3 == 2) {
    if (param_7 == 9) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          uVar7 = uVar7 + uVar1;
          *(char *)((int)uVar6 + param_5) =
               (char)(((ulonglong)*(byte *)(iVar3 + param_1 + 2) +
                       (ulonglong)*(byte *)(iVar3 + param_1 + 1) +
                      (ulonglong)*(byte *)(iVar3 + param_1)) / 3);
          uVar6 = uVar6 + uVar2;
        } while ((uVar7 & 0xffffffff) < (ulonglong)param_4);
      }
    }
    else {
      if (param_7 != 1) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar6;
          iVar4 = (int)uVar7;
          *(undefined1 *)(iVar4 + param_5) = *(undefined1 *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar1;
          uVar7 = uVar7 + uVar2;
          *(undefined1 *)(iVar4 + param_5 + 1) = *(undefined1 *)(iVar3 + param_1 + 1);
          *(undefined1 *)(iVar4 + param_5 + 2) = *(undefined1 *)(iVar3 + param_1 + 2);
          *(undefined1 *)(iVar4 + param_5 + 3) = 0xff;
        } while ((uVar6 & 0xffffffff) < (ulonglong)param_4);
      }
    }
  }
  else if (param_3 == 100) {
    if (param_7 == 9) {
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          pbVar8 = (byte *)((*(byte *)((int)uVar6 + param_1) + 3) * 4 + in_stack_00000054);
          if (*(char *)(in_stack_00000054 + 8) == '\0') {
            uVar9 = (undefined1)(((uint)pbVar8[2] + (uint)pbVar8[1] + (uint)*pbVar8) / 3);
          }
          else {
            uVar9 = (undefined1)*(undefined4 *)pbVar8;
          }
          uVar6 = uVar6 + uVar1;
          *(undefined1 *)((int)uVar7 + param_5) = uVar9;
          uVar7 = uVar7 + uVar2;
        } while ((uVar6 & 0xffffffff) < (ulonglong)param_4);
      }
    }
    else {
      if ((param_7 != 2) && (param_7 != 1)) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          puVar5 = (undefined4 *)((*(byte *)((int)uVar6 + param_1) + 3) * 4 + in_stack_00000054);
          *(undefined1 *)(iVar3 + param_5) = *(undefined1 *)puVar5;
          *(undefined1 *)(iVar3 + param_5 + 1) = *(undefined1 *)((int)puVar5 + 1);
          *(undefined1 *)(iVar3 + param_5 + 2) = *(undefined1 *)((int)puVar5 + 2);
          if (param_7 == 1) {
            *(char *)(iVar3 + param_5 + 3) = (char)*puVar5;
          }
          uVar6 = uVar6 + uVar1;
          uVar7 = uVar7 + uVar2;
        } while ((uVar6 & 0xffffffff) < (ulonglong)param_4);
      }
    }
  }
  else {
    if (param_3 != 9) {
      return 0;
    }
    if (param_7 == 2) {
      uVar7 = 0;
      uVar6 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar6 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          iVar4 = (int)uVar6;
          *(undefined1 *)(iVar4 + param_5) = *(undefined1 *)(iVar3 + param_1);
          uVar6 = uVar6 + uVar2;
          *(undefined1 *)(iVar4 + param_5 + 1) = *(undefined1 *)(iVar3 + param_1);
          uVar7 = uVar7 + uVar1;
          *(undefined1 *)(iVar4 + param_5 + 2) = *(undefined1 *)(iVar3 + param_1);
        } while ((uVar7 & 0xffffffff) < (ulonglong)param_4);
      }
    }
    else {
      if (param_7 != 1) {
        return 0;
      }
      uVar6 = 0;
      uVar7 = 0;
      if (param_4 != 0) {
        do {
          if ((ulonglong)param_8 <= (uVar7 & 0xffffffff)) {
            return 1;
          }
          iVar3 = (int)uVar7;
          *(undefined1 *)(iVar3 + param_5) = 0xff;
          uVar7 = uVar7 + uVar2;
          *(undefined1 *)(iVar3 + param_5 + 1) = 0xff;
          *(undefined1 *)(iVar3 + param_5 + 2) = 0xff;
          iVar4 = (int)uVar6;
          uVar6 = uVar6 + uVar1;
          *(undefined1 *)(iVar3 + param_5 + 3) = *(undefined1 *)(iVar4 + param_1);
        } while ((uVar6 & 0xffffffff) < (ulonglong)param_4);
      }
    }
  }
  return 1;
}

