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
extern int fn_823392B0();
extern int fn_82F622A8();


void fn_823390A0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)param_1[1];
  if ((puVar8 <= param_2) || (bVar3 = true, param_2 < (undefined4 *)*param_1)) {
    bVar3 = false;
  }
  puVar6 = (undefined4 *)param_1[2];
  if (bVar3) {
    uVar1 = *param_1;
    if (puVar8 == puVar6) {
      uVar2 = (int)((int)puVar8 - uVar1) >> 4;
      if (0xffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar5 = (longlong)(int)uVar2 + 1;
      uVar2 = (int)((int)puVar6 - uVar1) >> 4;
      if ((ulonglong)uVar2 < (uVar5 & 0xffffffff)) {
        uVar4 = 0;
        if ((ulonglong)uVar2 <= (0xfffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
          uVar4 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
        }
        if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          uVar4 = uVar5;
        }
        fn_823392B0(param_1,uVar4);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar6 = (undefined4 *)(((int)((int)param_2 - uVar1) >> 4) * 0x10 + *param_1);
    if (puVar8 == (undefined4 *)0x0) goto LAB_82339240;
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
    puVar8[2] = puVar6[2];
    uVar7 = puVar6[3];
  }
  else {
    if (puVar8 == puVar6) {
      uVar1 = (int)((int)puVar8 - *param_1) >> 4;
      if (0xffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar5 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)((int)puVar6 - *param_1) >> 4;
      if ((ulonglong)uVar1 < (uVar5 & 0xffffffff)) {
        uVar4 = 0;
        if ((ulonglong)uVar1 <= (0xfffffff - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar4 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          uVar4 = uVar5;
        }
        fn_823392B0(param_1,uVar4);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    if (puVar8 == (undefined4 *)0x0) goto LAB_82339240;
    *puVar8 = *param_2;
    puVar8[1] = param_2[1];
    puVar8[2] = param_2[2];
    uVar7 = param_2[3];
  }
  puVar8[3] = uVar7;
LAB_82339240:
  param_1[1] = param_1[1] + 0x10;
  return;
}

