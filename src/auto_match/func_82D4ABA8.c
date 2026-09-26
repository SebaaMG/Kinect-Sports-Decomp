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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int lbl_82137484;


void fn_82D4ABA8(int param_1,uint param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_000100d0;
  undefined4 uVar12;
  undefined4 in_register_000100d4;
  undefined4 uVar13;
  undefined4 in_register_000100d8;
  undefined4 uVar14;
  undefined4 in_vr13;
  undefined4 uVar15;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined2 *)
             ((*(int *)((param_2 >> (0x20 - *(uint *)(param_1 + 0x20) & 0x3f)) * 0x38 +
                        *(int *)(param_1 + 0x24) + 0x34) +
              (0xffffffffU >> (*(uint *)(param_1 + 0x20) & 0x3f) & param_2)) * 2 +
             *(int *)(param_1 + 0x30));
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    param_3[4] = *(undefined4 *)(param_1 + 0x40);
    param_3[2] = 0;
    param_3[3] = 3;
    *param_3 = &lbl_82137484;
    *(undefined2 *)((int)param_3 + 6) = 1;
    *(undefined2 *)(param_3 + 5) = uVar4;
    *(undefined1 *)((int)param_3 + 0x16) = uVar1;
    puVar2 = (undefined4 *)((int)param_3 + in_r0 + 0x50 & 0xfffffff0);
    *puVar2 = in_register_000100d0;
    puVar2[1] = in_register_000100d4;
    puVar2[2] = in_register_000100d8;
    puVar2[3] = in_vr13;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
  }
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(param_3 + 8) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (undefined4 *)((uint)(param_3 + 0xc) & 0xfffffff0);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  puVar2[2] = uVar14;
  puVar2[3] = uVar15;
  puVar2 = (undefined4 *)((uint)(param_3 + 0x10) & 0xfffffff0);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  return;
}

