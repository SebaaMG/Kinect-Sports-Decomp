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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern int fn_82A2A378();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();
extern unsigned int uStack_58;
extern unsigned int uStack_60;


ulonglong fn_82F3ECC8(int *param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong auStack_50 [10];
  
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar5 = 0xffffffff80070057;
    goto LAB_82f3ef68;
  }
  (**(code **)(*param_1 + 0x14))(param_1,auStack_50,0);
  if (0xffffffff < auStack_50[0]) {
    return 0xffffffffc00d3a9a;
  }
  *param_4 = (uint)auStack_50[0];
  if (param_3 < (uint)auStack_50[0]) {
    return 0xffffffffc00d36b1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 6);
  uStack_60 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                       (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                       (uint)*(byte *)((int)param_1 + 0x11) << 8 | (uint)*(byte *)(param_1 + 4),
                       CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                *(ushort *)((int)param_1 + 0x16) << 8 |
                                *(ushort *)((int)param_1 + 0x16) >> 8));
  fn_82F68CC0(param_2,&uStack_60,0x10);
  uVar2 = *(ulonglong *)(param_1 + 8);
  uStack_60 = ((((U64)(uStack_60)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar2)) & ((U64)0xFFFFFFFF)) << 32));
  uStack_60 = ((((U64)(uStack_60)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  *(ulonglong *)(param_2 + 0x10) =
       ((uVar2 & 0xff) << 0x18 |
       (uVar2 & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_60) >> 32) & 0xFFFFFFFF) >> 0x18)) << 0x20 |
       ((ulonglong)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
       ((ulonglong)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
       (ulonglong)((((U64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_60) >> 0) & 0xFFFFFFFF) >> 0x18);
  *(uint *)(param_2 + 0x18) =
       (uint)*(byte *)((int)param_1 + 0x4b) << 0x18 | (uint)*(byte *)((int)param_1 + 0x4a) << 0x10 |
       (uint)*(byte *)((int)param_1 + 0x49) << 8 | (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_2 + 0x1c) =
       (uint)*(byte *)((int)param_1 + 0x5b) << 0x18 | (uint)*(byte *)((int)param_1 + 0x5a) << 0x10 |
       (uint)*(byte *)((int)param_1 + 0x59) << 8 | (uint)*(byte *)(param_1 + 0x16);
  uStack_60 = uVar2;
  fn_82F68CC0(param_2 + 0x20,param_1[0x13],param_1[0x16]);
  pbVar6 = (byte *)(param_1 + 0x17);
  puVar7 = (uint *)(param_2 + 0x20 + param_1[0x16]);
  *puVar7 = (uint)*(byte *)((int)param_1 + 0x5f) << 0x18 |
            (uint)*(byte *)((int)param_1 + 0x5e) << 0x10 | (uint)*(byte *)((int)param_1 + 0x5d) << 8
            | (uint)*pbVar6;
  puVar7 = puVar7 + 1;
  if (param_1[0x14] == 0) {
code_r0x82f3eed8:
    pbVar6 = (byte *)(param_1 + 0x18);
    *puVar7 = (uint)*(byte *)((int)param_1 + 99) << 0x18 |
              (uint)*(byte *)((int)param_1 + 0x62) << 0x10 |
              (uint)*(byte *)((int)param_1 + 0x61) << 8 | (uint)*pbVar6;
    if (param_1[0x15] == 0) goto LAB_82f3ef68;
    uVar3 = fn_82E50BE8(*(undefined4 *)pbVar6,0,0,0,0);
    if (uVar3 == 0) {
      uVar5 = 0xffffffff8007000e;
      goto LAB_82f3ef68;
    }
    iVar1 = fn_82A2A378(0,0,param_1[0x15],0xffffffffffffffff,uVar3,*(undefined4 *)pbVar6,0,0);
    if (iVar1 != 0) {
      fn_82F68CC0(puVar7 + 1,uVar3,*(undefined4 *)pbVar6);
      goto LAB_82f3ef68;
    }
  }
  else {
    uVar4 = fn_82E50BE8(*(undefined4 *)pbVar6,0,0,0,0);
    if (uVar4 == 0) {
      return 0xffffffff8007000e;
    }
    iVar1 = fn_82A2A378(0,0,param_1[0x14],0xffffffffffffffff,uVar4,*(undefined4 *)pbVar6,0,0);
    if (iVar1 != 0) {
      fn_82F68CC0(puVar7,uVar4,*(undefined4 *)pbVar6);
      puVar7 = (uint *)((int)puVar7 + *(int *)pbVar6);
      goto code_r0x82f3eed8;
    }
  }
  uVar5 = thunk_FUN_82a2b798();
  if (0 < (int)uVar5) {
    uVar5 = uVar5 & 0xffff | 0x80070000;
  }
LAB_82f3ef68:
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  return uVar5;
}

