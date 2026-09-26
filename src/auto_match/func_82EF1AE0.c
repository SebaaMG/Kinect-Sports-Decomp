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
extern unsigned int *auStack_30;
extern unsigned int lbl_8318A754;
extern unsigned int stack0x00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


undefined8
fn_82EF1AE0(ulonglong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  uint auStack_30 [12];
  
  uVar6 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar7 = param_1;
  while ((iVar1 = (int)uVar7, uVar6 != 0 &&
         ((ulonglong)*(uint *)(iVar1 + 8) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (ulonglong)(*(uint *)(iVar1 + 8) + 0x14)) goto LAB_82ef1b94;
    uVar6 = (ulonglong)*(uint *)(iVar1 + 0x360);
    uVar2 = uVar7;
    uVar7 = uVar6;
  }
  auStack_30[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8000ffff;
  }
  else {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uVar3 = (**(code **)*(undefined4 *)param_1)(param_1,auStack_30);
    if (-1 < (int)uVar3) {
      *(int *)(auStack_30[0] + 8) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(uint *)((int)uVar2 + 0x360) = auStack_30[0];
      }
      *(int *)(auStack_30[0] + 0x360) = iVar1;
      uVar7 = (ulonglong)auStack_30[0];
LAB_82ef1b94:
      param_2 = param_2 - *(uint *)((int)uVar7 + 8);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar7;
      lVar8 = 5;
      *(byte *)(iVar1 + 0x38) = (&lbl_8318A754)[(uint)param_2 & 7] | *(byte *)(iVar1 + 0x38);
      lVar4 = param_2 * 0x28 + uVar7 + 0x38;
      puVar5 = (undefined8 *)&stack0x00000018;
      do {
        puVar5 = puVar5 + 1;
        lVar4 = lVar4 + 8;
        *(undefined8 *)lVar4 = *puVar5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

