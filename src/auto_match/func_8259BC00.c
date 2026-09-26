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
extern int fn_82517978();
extern int fn_8259BE20();
extern int fn_82F622A8();


void fn_8259BC00(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = (undefined4 *)param_1[1];
  if ((puVar2 <= param_2) || (bVar5 = true, param_2 < (undefined4 *)*param_1)) {
    bVar5 = false;
  }
  puVar3 = (undefined4 *)param_1[2];
  if (bVar5) {
    uVar4 = *param_1;
    if (puVar2 == puVar3) {
      uVar1 = (int)((int)puVar2 - uVar4) / 0x14;
      if (0xccccccb < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)((int)puVar3 - uVar4) / 0x14;
      if ((ulonglong)uVar1 < (uVar7 & 0xffffffff)) {
        uVar6 = 0;
        if ((ulonglong)uVar1 <= (0xccccccc - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar6 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar6 = uVar7;
        }
        fn_8259BE20(param_1,uVar6);
      }
    }
    param_2 = (undefined4 *)(((int)((int)param_2 - uVar4) / 0x14) * 0x14 + *param_1);
  }
  else if (puVar2 == puVar3) {
    uVar4 = (int)((int)puVar2 - *param_1) / 0x14;
    if (0xccccccb < uVar4) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar7 = (longlong)(int)uVar4 + 1;
    uVar4 = (int)((int)puVar3 - *param_1) / 0x14;
    if ((ulonglong)uVar4 < (uVar7 & 0xffffffff)) {
      uVar6 = 0;
      if ((ulonglong)uVar4 <= (0xccccccc - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
        uVar6 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
      }
      if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        uVar6 = uVar7;
      }
      fn_8259BE20(param_1,uVar6);
    }
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    fn_82517978(puVar2 + 1,param_2[1],param_2[2],0);
    puVar2[3] = param_2[3];
    puVar2[4] = param_2[4];
  }
  param_1[1] = param_1[1] + 0x14;
  return;
}

