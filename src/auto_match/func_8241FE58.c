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
extern int fn_82420180();
extern int fn_82F622A8();
extern unsigned int lbl_821B9BC8;


void fn_8241FE58(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)param_1[1];
  if ((puVar8 <= param_2) || (bVar4 = true, param_2 < (undefined4 *)*param_1)) {
    bVar4 = false;
  }
  puVar7 = (undefined4 *)param_1[2];
  if (bVar4) {
    uVar3 = *param_1;
    if (puVar8 == puVar7) {
      uVar1 = (int)((int)puVar8 - uVar3) / 0x18;
      if (0xaaaaaa9 < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)((int)puVar7 - uVar3) / 0x18;
      if ((ulonglong)uVar1 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar1 <= (0xaaaaaaa - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82420180(param_1,uVar5);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar7 = (undefined4 *)(((int)((int)param_2 - uVar3) / 0x18) * 0x18 + *param_1);
    if (puVar8 == (undefined4 *)0x0) goto LAB_82420040;
    *puVar8 = *puVar7;
    puVar8[1] = &lbl_821B9BC8;
    puVar8[2] = puVar7[2];
    puVar8[1] = &lbl_821B9BC8;
    puVar8[3] = puVar7[3];
    puVar8[4] = puVar7[4];
    uVar2 = puVar7[5];
  }
  else {
    if (puVar8 == puVar7) {
      uVar3 = (int)((int)puVar8 - *param_1) / 0x18;
      if (0xaaaaaa9 < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)((int)puVar7 - *param_1) / 0x18;
      if ((ulonglong)uVar3 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar3 <= (0xaaaaaaa - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_82420180(param_1,uVar5);
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    if (puVar8 == (undefined4 *)0x0) goto LAB_82420040;
    *puVar8 = *param_2;
    puVar8[1] = &lbl_821B9BC8;
    uVar2 = param_2[2];
    puVar8[1] = &lbl_821B9BC8;
    puVar8[2] = uVar2;
    puVar8[3] = param_2[3];
    puVar8[4] = param_2[4];
    uVar2 = param_2[5];
  }
  puVar8[5] = uVar2;
LAB_82420040:
  param_1[1] = param_1[1] + 0x18;
  return;
}

