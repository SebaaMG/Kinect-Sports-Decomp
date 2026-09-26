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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int lbl_820893C4;
extern unsigned int uStack00000028;


void fn_82A346E0(int *param_1,int param_2,undefined8 param_3,ulonglong param_4,uint param_5,
                  undefined4 *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uStack00000028;
  int *in_stack_00000054;
  uint *in_stack_0000005c;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [40];
  longlong lStack_58;
  
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar4 = uVar7 >> 6 & 0xffff;
  uStack00000028 = param_4;
  if (uVar4 == 0) {
    (**(code **)(*param_1 + 0x20))(param_3,auStack_90,auStack_80,0x38,0x22);
    uVar9 = param_4 + 0x10;
    if ((longlong)uVar9 < lStack_58) {
      uVar8 = (ulonglong)param_5;
      iVar1 = 0x8000 << (*(uint *)(param_2 + 0xc) >> 4 & 3);
      uVar6 = (ulonglong)iVar1;
      *param_6 = 0;
      *param_7 = (uint)(uVar9 / uVar6);
      trapDoubleWordImmediate(6,uVar6,0);
      trapDoubleWordImmediate(6,uVar6,0);
      trapDoubleWordImmediate(6,uVar6,0);
      uVar10 = (lStack_58 - param_4) - 0x10;
      *param_8 = (uint)((uVar8 + uVar9) / uVar6);
      *in_stack_00000054 = (int)uVar9 - (int)(uVar9 / uVar6) * iVar1;
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      *in_stack_0000005c = (uint)uVar10;
      return;
    }
  }
  else {
    *param_6 = 1;
    uVar9 = (ulonglong)(uVar7 >> 0x16) & 3;
    uVar7 = 0;
    uVar11 = 0;
    if (uVar4 != 0) {
      do {
        uVar8 = (longlong)*(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) * (longlong)(int)uVar11;
        uVar3 = (uint)uVar8 & 0x1f;
        piVar2 = (int *)(((uint)((uVar8 & 0xffffffff) >> 3) & 0x1ffffffc) + param_2 + 0x10);
        uVar7 = 0x20 - uVar3;
        uVar7 = ((uint)piVar2[1] >> (uVar7 & 0x3f) & (uVar7 >> 5) - 1 | *piVar2 << uVar3) >>
                (0x20U - *(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) & 0x3f);
        uStack00000028 = param_4;
        if (param_4 < uVar7) break;
        uVar11 = uVar11 + 1;
        param_4 = param_4 - uVar7;
        uStack00000028 = param_4;
      } while (uVar11 < uVar4);
    }
    if (uVar11 != uVar4) {
      *param_7 = uVar11;
      *in_stack_00000054 = (((U64)(uStack00000028) >> 32) & 0xFFFFFFFF);
      if (param_5 <= uVar7 - (((U64)(uStack00000028) >> 32) & 0xFFFFFFFF)) {
        *param_8 = uVar11;
        *in_stack_0000005c = param_5;
        return;
      }
      uVar11 = uVar11 + 1;
      uVar7 = param_5 - (uVar7 - (((U64)(uStack00000028) >> 32) & 0xFFFFFFFF));
      if (uVar11 < uVar4) {
        do {
          uVar8 = (longlong)*(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) * (longlong)(int)uVar11;
          uVar5 = (uint)uVar8 & 0x1f;
          piVar2 = (int *)(((uint)((uVar8 & 0xffffffff) >> 3) & 0x1ffffffc) + param_2 + 0x10);
          uVar3 = 0x20 - uVar5;
          uVar3 = ((uint)piVar2[1] >> (uVar3 & 0x3f) & (uVar3 >> 5) - 1 | *piVar2 << uVar5) >>
                  (0x20U - *(int *)(&lbl_820893C4 + (int)(uVar9 << 2)) & 0x3f);
          if (uVar7 <= uVar3) break;
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 - uVar3;
        } while (uVar11 < uVar4);
      }
      if (uVar11 != uVar4) {
        *param_8 = uVar11;
        *in_stack_0000005c = param_5;
        return;
      }
      param_5 = param_5 - uVar7;
      *param_8 = uVar4 - 1;
      goto LAB_82a34918;
    }
  }
  param_5 = 0;
  *param_7 = 0xffffffff;
LAB_82a34918:
  *in_stack_0000005c = param_5;
  return;
}

