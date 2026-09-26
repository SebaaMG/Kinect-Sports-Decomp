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
extern unsigned int *auStack_30;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_828F10B0();
extern int fn_82CE5990();
extern int fn_82D80A40();
extern int fn_82D93168();


void fn_825F2A38(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  for (puVar1 = (uint *)*param_1; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    uVar2 = puVar1[1];
    fn_82D80A40(*(undefined4 *)(uVar2 + 8));
    fn_82D93168(uVar2 + 0xe0);
    fn_82CE5990(auStack_80,auStack_60);
    iVar6 = (int)in_r0;
    puVar3 = (undefined4 *)((uint)(auStack_80 + iVar6) & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar3 = (undefined4 *)((uint)(auStack_30 + iVar6) & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar4 = (undefined4 *)(*puVar1 * 0x80 + param_1[7] & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar11;
    puVar4[2] = uVar12;
    puVar4[3] = uVar13;
    uVar2 = param_1[7];
    puVar3 = (undefined4 *)((uint)(auStack_70 + iVar6) & 0xfffffff0);
    *puVar3 = uVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    fn_828F10B0(((ulonglong)*puVar1 & 0x1ffffff) * 0x80 + (ulonglong)uVar2 + 0x18,auStack_70,4);
    iVar6 = (int)in_r0;
    puVar3 = (undefined4 *)((uint)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)(*puVar1 * 0x80 + param_1[7] + 0x20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x38) =
         *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x3a) = *(undefined2 *)(iVar5 + 0x1a);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x3c) = *(undefined2 *)(iVar5 + 0x1c);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x3e) = *(undefined2 *)(iVar5 + 0x1e);
    puVar3 = (undefined4 *)((uint)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)(*puVar1 * 0x80 + param_1[7] + 0x40 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x58) =
         *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x5a) = *(undefined2 *)(iVar5 + 0x1a);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x5c) = *(undefined2 *)(iVar5 + 0x1c);
    iVar5 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar5 + 0x5e) = *(undefined2 *)(iVar5 + 0x1e);
    puVar3 = (undefined4 *)((uint)(auStack_30 + iVar6) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (undefined4 *)(*puVar1 * 0x80 + param_1[7] + 0x60 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x78) =
         *(undefined2 *)(param_1[7] + *puVar1 * 0x80 + 0x18);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar6 + 0x7a) = *(undefined2 *)(iVar6 + 0x1a);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar6 + 0x7c) = *(undefined2 *)(iVar6 + 0x1c);
    iVar6 = *puVar1 * 0x80 + param_1[7];
    *(undefined2 *)(iVar6 + 0x7e) = *(undefined2 *)(iVar6 + 0x1e);
  }
  return;
}

