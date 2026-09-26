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
extern int fn_82571CC8();
extern int fn_825721E0();
extern unsigned int lbl_83296D90;
extern unsigned int lbl_83296D94;


void fn_82571780(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  lbl_83296D90 = 0;
  lbl_83296D94 = 0xffffffff;
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xffffffbf;
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x28);
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    fn_82571CC8(param_1,param_1,param_2,param_3 + 0x60,param_4);
  }
  *(undefined1 *)(param_3 + 0xc0) = 0;
  if (*(char *)(param_3 + 0x130) != '\0') {
    fn_82571CC8(param_1,param_1,param_2,param_3 + 0xd0,param_4);
  }
  *(undefined1 *)(param_3 + 0x130) = 0;
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(uint *)(param_3 + 8);
    for (uVar5 = (ulonglong)*(uint *)(param_3 + 4); (uVar5 & 0xffffffff) < (ulonglong)uVar1;
        uVar5 = uVar5 + 0x60) {
      fn_82571CC8(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(uint *)(param_3 + 0x1c);
    for (uVar5 = (ulonglong)*(uint *)(param_3 + 0x18); (uVar5 & 0xffffffff) < (ulonglong)uVar1;
        uVar5 = uVar5 + 0x60) {
      fn_82571CC8(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(uint *)(param_3 + 0x30);
    for (uVar5 = (ulonglong)*(uint *)(param_3 + 0x2c); (uVar5 & 0xffffffff) < (ulonglong)uVar1;
        uVar5 = uVar5 + 0x50) {
      fn_825721E0(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(uint *)(param_3 + 0x44);
    for (uVar5 = (ulonglong)*(uint *)(param_3 + 0x40); (uVar5 & 0xffffffff) < (ulonglong)uVar1;
        uVar5 = uVar5 + 0x50) {
      fn_825721E0(param_1,param_1,param_2,uVar5,param_4);
    }
  }
  *(undefined2 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x18);
  *(undefined2 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined2 *)(param_3 + 0x3c) = 0;
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_3 + 0x40);
  *(undefined2 *)(param_3 + 0x50) = 0;
  iVar3 = (int)param_2;
  puVar2 = (undefined4 *)(iVar3 + 0x1c0U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar2 = (undefined4 *)(iVar3 + 0x120U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar2 = (undefined4 *)(iVar3 + 0x160U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar4 = (undefined4 *)(param_1 + 0xf0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  return;
}

