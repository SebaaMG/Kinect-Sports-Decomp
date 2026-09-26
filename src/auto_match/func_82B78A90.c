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
extern int fn_82B6E130();
extern int fn_82B6EA60();
extern int fn_82B6EAE8();
extern int fn_82B7F8E0();
extern unsigned int lbl_821AAD20;


uint * fn_82B78A90(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar3;
  undefined2 uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar4 = fn_82B6EA60();
  uVar5 = fn_82B6EA60(param_1);
  uVar9 = fn_82B6E130(*(undefined4 *)(param_1 + 0x14),1000);
  uVar10 = fn_82B6E130(*(undefined4 *)(param_1 + 0x14),0x3e9);
  uVar11 = fn_82B6E130(*(undefined4 *)(param_1 + 0x14),0x3ea);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x5aa8);
  lVar8 = 0x1e - (ulonglong)uVar2;
  *(uint *)(*(int *)(param_1 + 0x1c) + 0x5aa8) = uVar2 + 1;
  iVar3 = fn_82B7F8E0(uVar9,*(undefined4 *)(param_1 + 0x10),**(undefined4 **)(param_1 + 0x1c),
                            lVar8,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bcb);
  }
  iVar3 = fn_82B7F8E0(uVar10,*(undefined4 *)(param_1 + 0x10),**(undefined4 **)(param_1 + 0x1c)
                            ,lVar8,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bd1);
  }
  iVar3 = fn_82B7F8E0(uVar11,*(undefined4 *)(param_1 + 0x10),**(undefined4 **)(param_1 + 0x1c)
                            ,lVar8,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bd7);
  }
  iVar3 = fn_82B7F8E0((double)lbl_821AAD20,*(undefined4 *)(param_1 + 0x10),
                            **(undefined4 **)(param_1 + 0x1c),lVar8,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x2bdd);
  }
  uVar6 = fn_82B6EAE8(param_1,(ulonglong)uVar1 + 0x4180,0,0x17);
  *(undefined2 *)((int)param_2 + 2) = 3;
  *param_2 = *param_2 & 0xe000ffff;
  *(undefined2 *)((int)param_2 + 6) = uVar5;
  puVar7 = param_2 + 2;
  param_2[1] = param_2[1] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_2 + 10) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar7 = 1;
  param_2[3] = param_2[3] & 0xffff9999 | 0x1111;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  param_2[4] = param_2[4] & 0xff00ffff | 0x500000;
  param_2[5] = param_2[5] & 0xffff0000 | 0x8888;
  *(undefined2 *)((int)param_2 + 0x1a) = 0x49;
  param_2[6] = param_2[6] & 0xe000ffff;
  *(undefined2 *)((int)param_2 + 0x1e) = uVar4;
  param_2[7] = param_2[7] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_2 + 0x22) = uVar5;
  param_2[8] = param_2[8] & 0xff00ffff | 0x40000;
  puVar7 = param_2 + 9;
  *(short *)((int)param_2 + 0x26) = (short)lVar8;
  *puVar7 = *puVar7 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar7 = 1;
  *(undefined2 *)((int)param_2 + 0x2a) = 0x40;
  param_2[10] = param_2[10] & 0xe000ffff;
  *(undefined2 *)((int)param_2 + 0x2e) = uVar6;
  param_2[0xb] = param_2[0xb] & 0xff00ffff | 0x440000;
  param_2[0xc] = 0x15;
  *(undefined2 *)((int)param_2 + 0x36) = 0;
  param_2[0xd] = param_2[0xd] & 0xff00ffff | 0x500000;
  param_2[0xe] = param_2[0xe] & 0xffff8888;
  *(undefined2 *)((int)param_2 + 0x3e) = uVar6;
  param_2[0xf] = param_2[0xf] & 0xff00ffff | 0x40000;
  *(undefined2 *)((int)param_2 + 0x42) = uVar4;
  param_2[0x10] = param_2[0x10] & 0xff00ffff | 0x40000;
  return param_2 + 0x11;
}

