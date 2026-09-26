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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_a0;
extern int fn_82A27888();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_b0;
extern unsigned int lbl_8315D2FC;
extern unsigned int lbl_8315D300;
extern unsigned int lbl_8315D304;
extern unsigned int lbl_8315D308;
extern unsigned int lbl_8329EB40;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a8;


undefined2 *
fn_82A27F98(uint param_1,undefined2 *param_2,int param_3,int param_4,undefined4 *param_5,
             int *param_6)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uStack00000014;
  undefined2 *puStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  undefined4 *puStack00000034;
  undefined2 *puStack_d0;
  undefined2 *apuStack_cc [3];
  undefined2 *apuStack_c0 [4];
  int iStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  int iStack_7c;
  
  puStack_d0 = (undefined2 *)0x0;
  lVar11 = 6;
  puVar5 = &uStack_a8;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  uStack00000014 = param_1;
  puStack0000001c = param_2;
  puStack00000034 = param_5;
  if ((param_6 != (int *)0x0) && (*param_6 == 0x30)) {
    uStack00000024 = param_3;
    uStack0000002c = param_4;
    fn_82F63CA0(auStack_a0,param_6,0x30);
    param_3 = uStack00000024;
    param_4 = uStack0000002c;
  }
  if ((lbl_8329EB40 & 0x200000) != 0) {
    param_1 = param_1 | 0x80;
  }
  if (iStack_9c == 0) {
    iStack_9c = lbl_8315D2FC;
  }
  if (iStack_98 == 0) {
    iStack_98 = lbl_8315D300;
  }
  if (uStack_94 == 0) {
    uStack_94 = lbl_8315D308;
  }
  if (uStack_90 == 0) {
    uStack_90 = lbl_8315D304;
  }
  if (iStack_8c == 0) {
    iStack_8c = 0x7ffcffff;
  }
  if ((uStack_88 == 0) || (0xf0000 < uStack_88)) {
    uStack_88 = 0xf0000;
  }
  if (param_4 == 0) {
    uStack0000002c = 0x10000;
    if (param_3 == 0) {
      uStack00000024 = 0x400000;
    }
    else {
LAB_82a28138:
      uStack00000024 = param_3 + 0xffffU & 0xffff0000;
    }
  }
  else {
    uStack0000002c = param_4 + 0xffffU & 0xffff0000;
    if (param_3 != 0) goto LAB_82a28138;
    uStack00000024 = uStack0000002c + 0xfffff & 0xfff00000;
  }
  lVar11 = 0x598;
  if ((param_1 & 1) == 0) {
    if (param_5 == (undefined4 *)0x0) {
      lVar11 = 0x5b4;
      param_5 = (undefined4 *)0xffffffff;
    }
    else {
      param_1 = param_1 | 0x80000000;
    }
  }
  else if (param_5 != (undefined4 *)0x0) {
    return (undefined2 *)0x0;
  }
  if ((param_1 & 0x80000) != 0) {
    iVar1 = KeGetCurrentProcessType();
    uVar9 = 3;
    if (iVar1 == 1) goto LAB_82a281b8;
  }
  uVar9 = 0;
LAB_82a281b8:
  if (param_2 == (undefined2 *)0x0) {
    if (iStack_7c != 0) {
      return (undefined2 *)0x0;
    }
    iVar1 = NtAllocateVirtualMemory(&puStack_d0,&stack0x00000024,0x60002000,4,uVar9);
    if (iVar1 < 0) {
      return (undefined2 *)0x0;
    }
    uVar8 = 0;
    if (uStack0000002c == 0) {
      uStack0000002c = 0x10000;
    }
    apuStack_cc[0] = (undefined2 *)0x0;
  }
  else {
    if (iStack_7c != 0) {
      if (uStack_84 == 0) {
        return (undefined2 *)0x0;
      }
      if (uStack_80 == 0) {
        return (undefined2 *)0x0;
      }
      if (uStack_80 < uStack_84) {
        return (undefined2 *)0x0;
      }
      if ((param_1 & 2) != 0) {
        return (undefined2 *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_2,0,0x10000);
    }
    iVar1 = NtQueryVirtualMemory(param_2,apuStack_c0,uVar9);
    if (iVar1 < 0) {
      return (undefined2 *)0x0;
    }
    if (apuStack_c0[0] != param_2) {
      return (undefined2 *)0x0;
    }
    if (iStack_b0 == 0x10000) {
      return (undefined2 *)0x0;
    }
    apuStack_cc[0] = apuStack_c0[0];
    if (iStack_b0 == 0x1000) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(apuStack_c0[0],0,0x10000);
    }
    uStack0000002c = 0x10000;
    uVar8 = 1;
    puStack_d0 = param_2;
  }
  iVar1 = NtAllocateVirtualMemory(apuStack_cc,&stack0x0000002c,0x60001000,4,uVar9);
  if (iVar1 < 0) {
    if (param_2 == (undefined2 *)0x0) {
      NtFreeVirtualMemory(&puStack_d0,&stack0x00000024,0x8000,uVar9);
    }
  }
  else {
    iVar1 = (int)apuStack_cc[0] + uStack0000002c;
    lVar3 = lVar11 + 0x80;
    lVar12 = 8;
    puVar10 = (undefined4 *)((int)puStack_d0 + 0x59fU & 0xfffffff8);
    puVar4 = (undefined4 *)(puStack_d0 + 0x26);
    do {
      puVar6 = puVar10;
      *puVar4 = puVar6;
      puVar10 = puVar6 + 4;
      lVar12 = lVar12 + -1;
      puVar4 = puVar6;
    } while (lVar12 != 0);
    *puVar6 = 0;
    if ((lbl_8329EB40 & 0x800) != 0) {
      lVar3 = lVar11 + 0x68c;
      *(undefined4 **)(puStack_d0 + 0xbe) = puVar6 + 4;
      puVar10 = (undefined4 *)(*(int *)(puStack_d0 + 0xbe) + 0x60c);
    }
    *puStack_d0 = (short)(lVar3 + 0xfU >> 4);
    *(undefined1 *)((int)puStack_d0 + 5) = 1;
    *(undefined4 *)(puStack_d0 + 8) = 0xeeffeeff;
    *(uint *)(puStack_d0 + 10) = param_1;
    *(uint *)(puStack_d0 + 0xc) = param_1 & 0x6001007d;
    puStack_d0[0xb8] = 0xffff;
    puStack_d0[0x1d] = (short)puVar10 - (short)puStack_d0;
    *(undefined4 *)(puStack_d0 + 0x1e) = 0;
    uVar2 = KeGetCurrentProcessType();
    *(undefined1 *)((int)puStack_d0 + 0x17b) = uVar2;
    lVar11 = 0x80;
    *(undefined4 *)(puStack_d0 + 0x2c8) = uVar9;
    puVar7 = puStack_d0 + 0xc0;
    do {
      *(undefined2 **)puVar7 = puVar7;
      *(undefined2 **)(puVar7 + 2) = puVar7;
      puVar7 = puVar7 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    *(undefined2 **)(puStack_d0 + 0x2c) = puStack_d0 + 0x2c;
    *(undefined2 **)(puStack_d0 + 0x2e) = puStack_d0 + 0x2c;
    if (param_5 == (undefined4 *)0xffffffff) {
      RtlInitializeCriticalSection(puVar10);
      param_5 = puVar10;
    }
    *(undefined4 **)(puStack_d0 + 0x2c0) = param_5;
    iVar1 = fn_82A27888(ZEXT48(puStack_d0),(lVar3 + 0xfU & 0xfffffff0) + ZEXT48(puStack_d0),0,
                          uVar8,apuStack_cc[0],iVar1,(int)apuStack_cc[0] + uStack00000024);
    if (iVar1 != 0) {
      puStack_d0[0x1c] = 0;
      *(int *)(puStack_d0 + 0x10) = iStack_9c;
      *(int *)(puStack_d0 + 0x12) = iStack_98;
      *(uint *)(puStack_d0 + 0x14) = uStack_94 >> 4;
      *(uint *)(puStack_d0 + 0x16) = uStack_90 >> 4;
      *(int *)(puStack_d0 + 0x1a) = iStack_8c;
      *(uint *)(puStack_d0 + 0xe) = uStack_88 + 0xf >> 4;
      *(int *)(puStack_d0 + 0x2c2) = iStack_7c;
      *(undefined4 *)(puStack_d0 + 0x28) = 0x1f;
      *(undefined4 *)(puStack_d0 + 0x2a) = 0xfffffff0;
      return puStack_d0;
    }
  }
  return (undefined2 *)0x0;
}

