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
extern int fn_82491380();
extern int fn_82F622A8();


void fn_82491468(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)param_1[1];
  if ((puVar9 <= param_2) || (bVar5 = true, param_2 < (undefined4 *)*param_1)) {
    bVar5 = false;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (bVar5) {
    uVar2 = *param_1;
    if (puVar9 == puVar1) {
      uVar4 = (int)((int)puVar9 - uVar2) >> 3;
      if (0x1ffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (longlong)(int)uVar4 + 1;
      uVar4 = (int)((int)puVar1 - uVar2) >> 3;
      if ((ulonglong)uVar4 < (uVar7 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar4 <= (0x1fffffff - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
        }
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar6 = uVar7;
        }
        fn_82491380(param_1,uVar6);
      }
    }
    puVar9 = (undefined4 *)param_1[1];
    if (puVar9 == (undefined4 *)0x0) goto LAB_824915e8;
    uVar4 = *param_1;
    iVar3 = ((int)((int)param_2 - uVar2) >> 3) * 8;
    *puVar9 = *(undefined4 *)(iVar3 + uVar4);
    uVar8 = *(undefined4 *)(iVar3 + uVar4 + 4);
  }
  else {
    if (puVar9 == puVar1) {
      uVar2 = (int)((int)puVar9 - *param_1) >> 3;
      if (0x1ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (longlong)(int)uVar2 + 1;
      uVar2 = (int)((int)puVar1 - *param_1) >> 3;
      if ((ulonglong)uVar2 < (uVar7 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar2 <= (0x1fffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
        }
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar6 = uVar7;
        }
        fn_82491380(param_1,uVar6);
      }
    }
    puVar9 = (undefined4 *)param_1[1];
    if (puVar9 == (undefined4 *)0x0) goto LAB_824915e8;
    *puVar9 = *param_2;
    uVar8 = param_2[1];
  }
  puVar9[1] = uVar8;
LAB_824915e8:
  param_1[1] = param_1[1] + 8;
  return;
}

