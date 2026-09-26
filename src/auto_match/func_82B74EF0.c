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
extern int fn_82B6EB98();
extern int fn_82B7F990();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


uint * fn_82B74EF0(int param_1,ushort *param_2,uint *param_3,int *param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  uVar1 = *param_2;
  lVar6 = 0x1e - (ulonglong)(uint)puVar2[0x16aa];
  puVar2[0x16aa] = puVar2[0x16aa] + 1;
  fn_82B7F990(*(undefined4 *)(param_1 + 0x10),*puVar2,lVar6,uVar1 & 0x3f);
  *(undefined2 *)((int)param_3 + 2) = 0x40;
  *param_3 = *param_3 & 0xe000ffff;
  *(undefined2 *)((int)param_3 + 6) = 0;
  puVar7 = param_3 + 2;
  param_3[1] = param_3[1] & 0xff00ffff | 0x1a0000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(param_2 + 2);
  uVar3 = *puVar7;
  uVar4 = *(uint *)(param_2 + 2);
  *puVar7 = uVar3 & 0xffc0ffff | uVar4 & 0x3f0000;
  *puVar7 = uVar3 & 0xff40ffff | uVar4 & 0x3f0000 | *(uint *)(param_2 + 2) & 0x800000 | 0x400000;
  param_3[3] = param_3[3] & 0xffff8888;
  puVar7 = param_3 + 4;
  if ((*(uint *)(param_2 + 2) & 0x800000) != 0) {
    *puVar7 = *(uint *)(param_2 + 6);
    puVar7 = param_3 + 5;
  }
  *(undefined2 *)((int)puVar7 + 2) = 0;
  *puVar7 = *puVar7 & 0xff00ffff | 0x410000;
  *(undefined1 *)puVar7 = 1;
  puVar7[1] = puVar7[1] & 0xffff8898 | 0x10;
  puVar5 = puVar7 + 2;
  *(short *)((int)puVar7 + 10) = (short)lVar6;
  *puVar5 = *puVar5 & 0xff00ffff | 0x10000;
  *(undefined1 *)puVar5 = 1;
  *(undefined2 *)((int)puVar7 + 0xe) = 0x41;
  puVar7[3] = puVar7[3] & 0xe000ffff;
  *(undefined2 *)((int)puVar7 + 0x12) = 0;
  puVar7[4] = puVar7[4] & 0xff00ffff | 0x1b0000;
  puVar7[5] = *(uint *)(param_2 + 8);
  puVar5 = puVar7 + 6;
  if ((*(uint *)(param_2 + 8) & 0x400000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0xe);
    puVar5 = puVar7 + 7;
  }
  if ((*(uint *)(param_2 + 8) & 0x800000) != 0) {
    *puVar5 = *(uint *)(param_2 + 0x14);
    puVar5 = puVar5 + 1;
  }
  puVar7 = puVar5 + 1;
  *puVar5 = *(uint *)(param_2 + 8);
  if ((*(uint *)(param_2 + 8) & 0x400000) != 0) {
    *puVar7 = *(uint *)(param_2 + 0xe);
    puVar7 = puVar5 + 2;
  }
  if ((*(uint *)(param_2 + 8) & 0x800000) != 0) {
    *puVar7 = *(uint *)(param_2 + 0x14);
    puVar7 = puVar7 + 1;
  }
  uStack_4c = 0;
  uStack_50 = 2;
  fn_82B6EB98(param_1,puVar2 + 0xcd8,puVar2[3],0x8000,&uStack_50);
  *param_4 = *param_4 + 2;
  return puVar7;
}

