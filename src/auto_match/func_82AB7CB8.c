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
extern int fn_82AB15D0();


void fn_82AB7CB8(int param_1,ulonglong param_2,int param_3,undefined4 param_4,ulonglong param_5,
                  undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 *in_stack_00000054;
  int in_stack_0000005c;
  
  uVar9 = 0;
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x291);
  }
  if (0xf < (param_2 & 0xffffffff)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d9c,0xffffffff820d6be8,0x292);
  }
  iVar2 = (int)param_2 * 0x94 + param_1;
  lVar6 = param_2 * 0x25;
  *(undefined4 *)(iVar2 + 0x3c) = 1;
  lVar11 = 4;
  *(undefined4 *)(iVar2 + 0xc0) = param_6;
  lVar7 = 0;
  puVar5 = in_stack_00000054;
  do {
    *(undefined4 *)((int)((lVar6 + lVar7 + 0x18U & 0xffffffff) << 2) + param_1) = param_7;
    iVar3 = (int)((lVar6 + lVar7 + 0x1cU & 0x3fffffff) << 2);
    if (param_8 == 0) {
      *(int *)(iVar3 + param_1) = param_3;
    }
    else {
      *(undefined4 *)(iVar3 + param_1) =
           *(undefined4 *)((param_8 - (int)in_stack_00000054) + (int)puVar5);
    }
    if (in_stack_00000054 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar5;
    }
    *(undefined4 *)((int)((lVar6 + lVar7 + 0x20U & 0xffffffff) << 2) + param_1) = uVar10;
    iVar3 = (int)((lVar6 + 0x24 + lVar7 & 0x3fffffffU) << 2);
    if (in_stack_0000005c == 0) {
      *(undefined4 *)(iVar3 + param_1) = 1;
    }
    else {
      *(undefined4 *)(iVar3 + param_1) =
           *(undefined4 *)((in_stack_0000005c - (int)in_stack_00000054) + (int)puVar5);
    }
    lVar7 = lVar7 + 1;
    puVar5 = puVar5 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uVar8 = 0;
  do {
    *(int *)((int)((lVar6 + uVar8 + 0x10 & 0xffffffff) << 2) + param_1) = param_3;
    *(undefined4 *)((int)((lVar6 + uVar8 + 0x14 & 0xffffffff) << 2) + param_1) = param_4;
    *(int *)((int)((lVar6 + uVar8 + 0x28 & 0xffffffff) << 2) + param_1) = (int)uVar8;
    if ((uVar8 & 0xffffffff) == 0) {
      uVar9 = (param_5 & 0xffffffff) >> 0x18;
LAB_82ab7e78:
      if (uVar9 == 2) {
        uVar9 = 1;
      }
      else {
        bVar1 = uVar9 != 4;
        uVar9 = 2;
        if (bVar1) goto LAB_82ab7e94;
      }
    }
    else {
      if ((uVar8 & 0xffffffff) == 1) {
        uVar9 = (param_5 & 0xffffffff) >> 0x10 & 0xff;
        goto LAB_82ab7e78;
      }
      if ((uVar8 & 0xffffffff) < 3) {
        uVar9 = (param_5 & 0xffffffff) >> 8 & 0xff;
        goto LAB_82ab7e78;
      }
      if ((uVar8 & 0xffffffff) == 3) {
        uVar9 = param_5 & 0xff;
        goto LAB_82ab7e78;
      }
      if (4 < (uVar8 & 0xffffffff)) goto LAB_82ab7e78;
LAB_82ab7e94:
      uVar9 = 0;
    }
    uVar4 = lVar6 + 0x2c + uVar8;
    uVar8 = uVar8 + 1;
    *(int *)((int)((uVar4 & 0xffffffff) << 2) + param_1) = (int)uVar9;
    if (3 < (int)uVar8) {
      if (param_3 == 2) {
        if (*(int *)(iVar2 + 0xc4) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cfc,0xffffffff820d6be8,0x2ee);
        }
        if (*(int *)(iVar2 + 0xcc) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d30,0xffffffff820d6be8,0x2ef);
        }
        *(undefined4 *)(iVar2 + 200) = 1;
      }
      else if ((param_3 < 3) || (4 < param_3)) {
        if (*(int *)(iVar2 + 0xc4) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cfc,0xffffffff820d6be8,0x2f6);
        }
        if (*(int *)(iVar2 + 200) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d64,0xffffffff820d6be8,0x2f7);
        }
        *(undefined4 *)(iVar2 + 0xcc) = 1;
      }
      else {
        if (*(int *)(iVar2 + 200) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d64,0xffffffff820d6be8,0x2e6);
        }
        if (*(int *)(iVar2 + 0xcc) != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d30,0xffffffff820d6be8,0x2e7);
        }
        *(undefined4 *)(iVar2 + 0xc4) = 1;
      }
      return;
    }
  } while( true );
}

