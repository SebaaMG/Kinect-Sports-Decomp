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
extern int fn_823B4230();
extern int fn_82F622A8();


void fn_823B4030(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if ((puVar2 <= param_2) || (bVar5 = true, param_2 < (undefined4 *)*param_1)) {
    bVar5 = false;
  }
  puVar7 = (undefined4 *)param_1[2];
  if (bVar5) {
    uVar3 = *param_1;
    if (puVar2 == puVar7) {
      uVar1 = (int)((int)puVar2 - uVar3) / 0xc;
      if (0x15555554 < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar9 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)((int)puVar7 - uVar3) / 0xc;
      if ((ulonglong)uVar1 < (uVar9 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar1 <= (0x15555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) {
          uVar6 = uVar9;
        }
        fn_823B4230(param_1,uVar6);
      }
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar7 = (undefined4 *)(((int)((int)param_2 - uVar3) / 0xc) * 0xc + *param_1);
    if (puVar2 != (undefined4 *)0x0) {
      puVar8 = puVar7 + 1;
      *puVar2 = *puVar7;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (puVar2 + 1 != puVar8) {
        uVar4 = puVar2[2];
        puVar2[2] = puVar7[2];
        puVar7[2] = uVar4;
        uVar4 = puVar2[1];
        puVar2[1] = *puVar8;
        *puVar8 = uVar4;
      }
    }
  }
  else {
    if (puVar2 == puVar7) {
      uVar3 = (int)((int)puVar2 - *param_1) / 0xc;
      if (0x15555554 < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar9 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)((int)puVar7 - *param_1) / 0xc;
      if ((ulonglong)uVar3 < (uVar9 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar3 <= (0x15555555 - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) {
          uVar6 = uVar9;
        }
        fn_823B4230(param_1,uVar6);
      }
    }
    puVar2 = (undefined4 *)param_1[1];
    if (puVar2 != (undefined4 *)0x0) {
      puVar7 = param_2 + 1;
      *puVar2 = *param_2;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (puVar2 + 1 != puVar7) {
        uVar4 = puVar2[2];
        puVar2[2] = param_2[2];
        param_2[2] = uVar4;
        uVar4 = puVar2[1];
        puVar2[1] = *puVar7;
        *puVar7 = uVar4;
      }
    }
  }
  param_1[1] = param_1[1] + 0xc;
  return;
}

