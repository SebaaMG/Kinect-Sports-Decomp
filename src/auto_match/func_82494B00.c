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
extern int fn_82491610();
extern int fn_82F622A8();


void fn_82494B00(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)param_1[1];
  if ((puVar8 <= param_2) || (bVar4 = true, param_2 < (undefined4 *)*param_1)) {
    bVar4 = false;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (bVar4) {
    uVar2 = *param_1;
    if (puVar8 == puVar1) {
      uVar3 = (int)((int)puVar8 - uVar2) >> 2;
      if (0x3ffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)((int)puVar1 - uVar2) >> 2;
      if ((ulonglong)uVar3 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar3 <= (0x3fffffff - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82491610(param_1,uVar5);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    if (puVar8 == (undefined4 *)0x0) goto LAB_82494c6c;
    uVar7 = *(undefined4 *)(((int)((int)param_2 - uVar2) >> 2) * 4 + *param_1);
  }
  else {
    if (puVar8 == puVar1) {
      uVar2 = (int)((int)puVar8 - *param_1) >> 2;
      if (0x3ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar2 + 1;
      uVar2 = (int)((int)puVar1 - *param_1) >> 2;
      if ((ulonglong)uVar2 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 <= (0x3fffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82491610(param_1,uVar5);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    if (puVar8 == (undefined4 *)0x0) goto LAB_82494c6c;
    uVar7 = *param_2;
  }
  *puVar8 = uVar7;
LAB_82494c6c:
  param_1[1] = param_1[1] + 4;
  return;
}

