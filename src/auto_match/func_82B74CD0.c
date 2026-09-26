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
extern int fn_82B7F8E0();


uint * fn_82B74CD0(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x5aa8);
  lVar7 = 0x1e - (ulonglong)uVar1;
  *(uint *)(*(int *)(param_1 + 0x1c) + 0x5aa8) = uVar1 + 1;
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x34),*(undefined4 *)(param_1 + 0x10),
                            **(undefined4 **)(param_1 + 0x1c),lVar7,0);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22c1);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x10),
                            **(undefined4 **)(param_1 + 0x1c),lVar7,1);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22c7);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x3c),*(undefined4 *)(param_1 + 0x10),
                            **(undefined4 **)(param_1 + 0x1c),lVar7,2);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22cd);
  }
  iVar3 = fn_82B7F8E0((double)*(float *)(param_2 + 0x40),*(undefined4 *)(param_1 + 0x10),
                            **(undefined4 **)(param_1 + 0x1c),lVar7,3);
  if (iVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da8d4,0xffffffff820da3b8,0x22d3);
  }
  *(undefined2 *)((int)param_4 + 2) = 0x40;
  *param_4 = *param_4 & 0xe000ffff;
  puVar5 = param_4 + 2;
  *(short *)((int)param_4 + 6) = (short)*(undefined4 *)(param_3 + 4);
  uVar1 = param_4[1];
  uVar2 = *(uint *)(param_3 + 4) & 0x3f0000;
  param_4[1] = uVar1 & 0xffc0ffff | uVar2;
  param_4[1] = uVar1 & 0xff00ffff | uVar2 | *(uint *)(param_3 + 4) & 0x800000;
  if ((*(uint *)(param_3 + 4) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_3 + 0xc);
    puVar5 = param_4 + 3;
  }
  *(short *)((int)puVar5 + 2) = (short)*(undefined4 *)(param_2 + 0x50);
  *puVar5 = *puVar5 & 0xff00ffff | 0x40000;
  puVar4 = puVar5 + 1;
  *(short *)((int)puVar5 + 6) = (short)lVar7;
  *puVar4 = *puVar4 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar4 = 1;
  puVar6 = puVar5 + 2;
  puVar4 = puVar5 + 3;
  *(short *)((int)puVar5 + 10) = (short)*(undefined4 *)(param_3 + 4);
  uVar1 = *puVar6;
  uVar2 = *(uint *)(param_3 + 4) & 0x3f0000;
  *puVar6 = uVar1 & 0xffc0ffff | uVar2;
  *puVar6 = uVar1 & 0xff00ffff | uVar2 | *(uint *)(param_3 + 4) & 0x800000;
  if ((*(uint *)(param_3 + 4) & 0x800000) != 0) {
    *puVar4 = *(uint *)(param_3 + 0xc);
    puVar4 = puVar5 + 4;
  }
  return puVar4;
}

