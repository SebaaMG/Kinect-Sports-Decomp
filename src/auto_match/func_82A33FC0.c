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
extern unsigned int *auStack_cc;
extern int fn_82A33D80();
extern int fn_82A37680();
extern int fn_83142EFC();
extern unsigned int iStack_88;
extern unsigned int iStack_a8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;


ulonglong fn_82A33FC0(int *param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4,
                       uint *param_5,longlong *param_6,ulonglong param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int in_stack_00000054;
  uint uStack_d0;
  uint auStack_cc [3];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  uint *puStack_a4;
  longlong lStack_a0;
  undefined4 uStack_98;
  uint *puStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  auStack_cc[0] = 0;
  if (param_6 == (longlong *)0x0) {
    uVar3 = *(ulonglong *)(param_2 + 0xc) & 0xffffffff;
  }
  else {
    uVar3 = (ulonglong)(uint)*param_6;
  }
  iVar2 = fn_82A33D80(param_1,param_2,uVar3,param_4);
  if (iVar2 == 0) {
    uVar3 = 0xffffffffc000000d;
  }
  else {
    param_5[1] = 0;
    uStack_98 = (undefined4)param_4;
    *param_5 = 0x103;
    uStack_b4 = param_2[4];
    uStack_ac = param_2[1];
    uStack_bc = *param_2;
    uStack_90 = (undefined4)param_7;
    uStack_c0 = 2;
    uStack_b0 = 0xffffffff;
    uStack_84 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_80 = (uint)((param_2[10] & 8) == 0);
    puStack_a4 = param_5;
    iStack_88 = param_8;
    if (in_stack_00000054 == 0) {
      iStack_a8 = (int)param_3;
    }
    else if ((param_4 & 0xffffffff) != 0) {
      iStack_a8 = fn_83142EFC(0,param_3,param_4,0);
      if (iStack_a8 == 0) {
        return 0xffffffffc000009a;
      }
      uStack_84 = 1;
    }
    if ((param_8 == 0) && ((param_2[10] & 0x20) != 0)) {
      uStack_b8 = param_2[5];
      puStack_7c = &uStack_d0;
      puStack_94 = auStack_cc;
      RtlEnterCriticalSection(param_2 + 0xe);
      lVar4 = *(longlong *)(param_2 + 0xc);
      lStack_a0 = lVar4;
      if (param_6 != (longlong *)0x0) {
        lStack_a0 = *param_6;
      }
      bVar1 = true;
    }
    else {
      lStack_a0 = *param_6;
      uStack_b8 = 0;
      puStack_7c = (uint *)0x0;
      puStack_94 = (uint *)0x0;
      if ((param_8 != 0) &&
         (uVar3 = (**(code **)(*param_1 + 8))(0xfffffffffffffffe,&uStack_84,0), (int)uVar3 < 0)) {
        return uVar3;
      }
      lVar4 = 0;
      uStack_d0 = 0;
      bVar1 = false;
    }
    if (((param_2[6] & 0x100000) == 0) && (((param_7 & 0xffffffff) != 0 || (param_8 != 0)))) {
      uStack_8c = 0;
    }
    else {
      uStack_8c = *param_2;
      NtClearEvent();
    }
    if ((param_8 == 0) && ((param_7 & 0xffffffff) != 0)) {
      NtClearEvent(param_7);
    }
    iVar2 = fn_82A37680(param_1 + 0x31,&uStack_c0);
    if (bVar1) {
      if (iVar2 == 0) {
        uStack_d0 = 0xc0000017;
      }
      else {
        uStack_d0 = NtWaitForSingleObjectEx(param_2[5],1,0,0);
        *(ulonglong *)(param_2 + 0xc) = (ulonglong)auStack_cc[0] + lVar4;
      }
      *param_5 = uStack_d0;
      param_5[1] = auStack_cc[0];
      RtlLeaveCriticalSection(param_2 + 0xe);
      uVar3 = (ulonglong)uStack_d0;
    }
    else if (iVar2 == 0) {
      (**(code **)(*param_1 + 4))(uStack_84);
      uVar3 = 0xffffffffc0000017;
    }
    else {
      uVar3 = 0x103;
    }
  }
  return uVar3;
}

