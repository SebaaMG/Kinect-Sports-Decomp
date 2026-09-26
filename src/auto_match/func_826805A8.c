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
extern int fn_82680500();


ulonglong fn_826805A8(undefined8 param_1,ulonglong param_2,uint *param_3,uint *param_4,
                       uint *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar5;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  puVar5 = (undefined4 *)param_1;
  if ((ulonglong)(uint)puVar5[6] < (param_2 & 0xffffffff)) {
    uVar3 = 0;
  }
  else if ((param_2 & 0xffffffff) == 0) {
    if (param_3 != (uint *)0x0) {
      *param_3 = puVar5[1];
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = puVar5[2];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = puVar5[3];
    }
    uVar3 = (ulonglong)(uint)puVar5[4];
  }
  else {
    uVar7 = puVar5[1];
    uVar6 = (ulonglong)uVar7;
    uVar9 = puVar5[2];
    uVar8 = (ulonglong)uVar9;
    uVar11 = puVar5[3];
    uVar10 = (ulonglong)uVar11;
    uVar3 = (ulonglong)(uint)puVar5[4];
    if ((param_2 & 0xffffffff) != 0) {
      uVar1 = *puVar5;
      do {
        lVar4 = fn_82680500(uVar1);
        puVar5 = (undefined4 *)param_1;
        uVar2 = (uVar6 & 0xffffffff) >> 1;
        uVar3 = lVar4 + uVar3;
        uVar6 = 1;
        if (uVar2 != 0) {
          uVar6 = uVar2;
        }
        uVar7 = (uint)uVar6;
        uVar2 = (uVar8 & 0xffffffff) >> 1;
        uVar8 = 1;
        if (uVar2 != 0) {
          uVar8 = uVar2;
        }
        uVar9 = (uint)uVar8;
        param_2 = param_2 - 1;
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10;
      } while (param_2 != 0);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar7;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar9;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar11;
    }
    uVar3 = -(ulonglong)(uVar3 < (ulonglong)(uint)puVar5[5] + (ulonglong)(uint)puVar5[4]) & uVar3;
  }
  return uVar3;
}

