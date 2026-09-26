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
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern unsigned int iStack_80;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D11F60(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_d0 [20];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_90 [16];
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
LAB_82d11f7c:
  iVar10 = (param_2 + param_3 >> 1) * 0x40 + param_1;
  puVar1 = (undefined4 *)(iVar10 + 0x10U & 0xfffffff0);
  uVar11 = puVar1[1];
  uVar13 = puVar1[2];
  uVar15 = puVar1[3];
  iVar3 = (int)in_r0;
  puVar2 = (undefined4 *)((uint)(auStack_90 + iVar3) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar11;
  puVar2[2] = uVar13;
  puVar2[3] = uVar15;
  uStack_7c = *(undefined4 *)(iVar10 + 0x24);
  uStack_78 = *(undefined4 *)(iVar10 + 0x28);
  uStack_74 = *(undefined4 *)(iVar10 + 0x2c);
  uStack_70 = *(undefined4 *)(iVar10 + 0x30);
  uStack_6c = *(undefined4 *)(iVar10 + 0x34);
  iVar10 = param_2;
  iVar4 = param_3;
LAB_82d11fd8:
  piVar5 = (int *)(iVar10 * 0x40 + param_1 + 0x20);
  do {
    iVar6 = 0;
    piVar7 = &iStack_80;
    piVar8 = piVar5;
LAB_82d11ff0:
    if (*piVar7 <= *piVar8) {
      if (*piVar8 <= *piVar7) break;
      goto LAB_82d12018;
    }
    iVar10 = iVar10 + 1;
    piVar5 = piVar5 + 0x10;
  } while( true );
  iVar6 = iVar6 + 1;
  piVar8 = piVar8 + 1;
  piVar7 = piVar7 + 1;
  if (2 < iVar6) {
LAB_82d12018:
    piVar5 = (int *)(iVar4 * 0x40 + param_1 + 0x20);
    goto LAB_82d12024;
  }
  goto LAB_82d11ff0;
LAB_82d12024:
  iVar6 = 0;
  piVar7 = &iStack_80;
  piVar8 = piVar5;
LAB_82d12030:
  if (*piVar8 <= *piVar7) {
    if (*piVar7 <= *piVar8) goto code_r0x82d12044;
    goto LAB_82d12058;
  }
  iVar4 = iVar4 + -1;
  piVar5 = piVar5 + -0x10;
  goto LAB_82d12024;
code_r0x82d12044:
  iVar6 = iVar6 + 1;
  piVar8 = piVar8 + 1;
  piVar7 = piVar7 + 1;
  if (2 < iVar6) {
LAB_82d12058:
    if (iVar10 <= iVar4) {
      if (iVar4 != iVar10) {
        iVar9 = iVar4 * 0x40 + param_1;
        iVar6 = iVar10 * 0x40 + param_1;
        uVar11 = *(undefined4 *)(iVar9 + 0x20);
        uStack_b4 = *(undefined4 *)(iVar9 + 0x2c);
        uStack_bc = *(undefined4 *)(iVar9 + 0x24);
        uStack_b8 = *(undefined4 *)(iVar9 + 0x28);
        puVar1 = (undefined4 *)(iVar3 + iVar9 + 0x10 & 0xfffffff0);
        uVar15 = *puVar1;
        uVar12 = puVar1[1];
        uVar14 = puVar1[2];
        uVar16 = puVar1[3];
        puVar1 = (undefined4 *)(iVar3 + iVar6 + 0x10 & 0xfffffff0);
        uVar13 = puVar1[1];
        uVar17 = puVar1[2];
        uVar18 = puVar1[3];
        uStack_b0 = *(undefined4 *)(iVar9 + 0x30);
        puVar2 = (undefined4 *)(iVar3 + iVar9 + 0x10 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        uVar13 = *(undefined4 *)(iVar6 + 0x20);
        puVar1 = (undefined4 *)((uint)(auStack_d0 + iVar3) & 0xfffffff0);
        *puVar1 = uVar15;
        puVar1[1] = uVar12;
        puVar1[2] = uVar14;
        puVar1[3] = uVar16;
        uStack_ac = *(undefined4 *)(iVar9 + 0x34);
        *(undefined4 *)(iVar9 + 0x20) = uVar13;
        *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar6 + 0x24);
        *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar6 + 0x28);
        *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar6 + 0x2c);
        *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar6 + 0x30);
        puVar1 = (undefined4 *)((uint)(auStack_d0 + iVar3) & 0xfffffff0);
        uVar13 = *puVar1;
        uVar15 = puVar1[1];
        uVar12 = puVar1[2];
        uVar14 = puVar1[3];
        *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
        puVar1 = (undefined4 *)(iVar3 + iVar6 + 0x10 & 0xfffffff0);
        *puVar1 = uVar13;
        puVar1[1] = uVar15;
        puVar1[2] = uVar12;
        puVar1[3] = uVar14;
        *(undefined4 *)(iVar6 + 0x20) = uVar11;
        *(undefined4 *)(iVar6 + 0x24) = uStack_bc;
        *(undefined4 *)(iVar6 + 0x28) = uStack_b8;
        *(undefined4 *)(iVar6 + 0x2c) = uStack_b4;
        *(undefined4 *)(iVar6 + 0x30) = uStack_b0;
        *(undefined4 *)(iVar6 + 0x34) = uStack_ac;
      }
      iVar4 = iVar4 + -1;
      iVar10 = iVar10 + 1;
      if (iVar10 <= iVar4) goto LAB_82d11fd8;
    }
    if (param_2 < iVar4) {
      fn_82D11F60(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar10;
    if (param_3 <= iVar10) {
      return;
    }
    goto LAB_82d11f7c;
  }
  goto LAB_82d12030;
}

