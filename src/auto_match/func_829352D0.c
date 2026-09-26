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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


undefined8
fn_829352D0(int param_1,byte *param_2,int param_3,uint param_4,undefined4 *param_5,
             undefined4 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if ((param_3 != 0) && (param_2 == (byte *)0x0)) {
    return 0xffffffff80004005;
  }
  pbVar7 = param_2;
  if (param_3 == -1) {
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    param_3 = (int)pbVar7 - (int)param_2;
  }
  if ((param_4 & 1) == 0) {
    param_4 = param_4 | 2;
  }
  if ((param_4 & 2) != 0) {
    for (puVar5 = *(undefined4 **)(param_1 + 8); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[4]) {
      if (((puVar5[2] & 2) != 0) && (param_3 == puVar5[1])) {
        pbVar7 = (byte *)*puVar5;
        lVar6 = 0;
        if (param_3 != 0) {
          pbVar8 = param_2;
          do {
            lVar6 = (ulonglong)*pbVar8 - (ulonglong)*pbVar7;
            if (lVar6 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != param_2 + param_3);
        }
        if ((int)lVar6 == 0) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = puVar5[3];
          }
          if (((param_4 & 1) != 0) && ((param_4 & 8) != 0)) {
            fn_8265C990(param_2,0x24810000);
          }
          goto LAB_829354b0;
        }
      }
    }
  }
  puVar5 = (undefined4 *)fn_8265C940(0x18,0x24810000);
  if (puVar5 == (undefined4 *)0x0) {
LAB_829353d0:
    uVar3 = 0xffffffff8007000e;
  }
  else {
    if ((param_4 & 1) == 0) {
      uVar4 = fn_8265C940(param_3,0x24810000);
      *puVar5 = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0) {
        fn_8265C990(puVar5,0x24810000);
        goto LAB_829353d0;
      }
      fn_82F68CC0(uVar4,param_2,param_3);
    }
    else {
      *puVar5 = param_2;
    }
    if ((param_4 & 4) == 0) {
      *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + 3U & 0xfffffffc;
    }
    uVar2 = *(undefined4 *)(param_1 + 4);
    puVar5[1] = param_3;
    puVar5[2] = param_4;
    puVar5[4] = 0;
    puVar5[5] = param_6;
    puVar5[3] = uVar2;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
    **(undefined4 **)(param_1 + 0xc) = puVar5;
    *(undefined4 **)(param_1 + 0xc) = puVar5 + 4;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = puVar5[3];
    }
LAB_829354b0:
    uVar3 = 0;
  }
  return uVar3;
}

