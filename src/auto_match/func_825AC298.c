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
extern unsigned int *auStack_120;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_f0;
extern int fn_82236140();
extern int fn_822CB020();
extern int fn_825AD9E8();
extern int fn_825ADE10();
extern int fn_825AE918();
extern int fn_825AEC98();
extern int fn_8265CA20();
extern int fn_828B00A0();
extern int fn_828C4318();
extern int fn_828E9D28();
extern int fn_82F68CC0();
extern unsigned int iStack_108;
extern unsigned int iStack_d8;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_70;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_825AC298(int *param_1,ulonglong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_00010010;
  undefined4 uVar10;
  undefined4 in_register_00010014;
  undefined4 uVar11;
  undefined4 in_register_00010018;
  undefined4 uVar12;
  undefined4 in_vr1;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int aiStack_140 [4];
  int aiStack_130 [4];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_f0 [16];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  lVar3 = (**(code **)(*param_1 + 8))();
  if ((((param_4 == 1) && (param_5 == 1)) && (param_3 == 0)) &&
     ((param_2 & 0xffffffff) == (lVar3 + 0x1ecU & 0xffffffff))) {
    fn_825AD9E8(aiStack_140,lVar3 + 0x248);
    fn_822CB020(aiStack_130,lVar3 + 0x29c);
    uVar4 = fn_82236140(lVar3 + 0x2f0);
    uStack_e0 = (undefined4)uVar4;
    iStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 3;
    fn_828E9D28(auStack_f0,uVar4,3);
    fn_825AE918(auStack_f0);
    uVar13 = in_vr1;
    uVar12 = in_register_00010018;
    uVar11 = in_register_00010014;
    uVar10 = in_register_00010010;
    if (iStack_d8 != 0) {
      fn_8265CA20();
    }
    iStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uVar4 = fn_82236140(lVar3 + 0x344);
    uStack_110 = (undefined4)uVar4;
    iStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 3;
    fn_828E9D28(auStack_120,uVar4,3);
    fn_825AEC98(auStack_120);
    if (iStack_108 != 0) {
      fn_8265CA20();
    }
    iStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    puVar1 = (undefined4 *)((int)aiStack_140 + in_r0 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)aiStack_130 + in_r0 & 0xfffffff0);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar14;
    puVar1[1] = uVar15;
    puVar1[2] = uVar16;
    puVar1[3] = uVar17;
    puVar1 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    uStack_70 = fn_828C4318(lVar3 + 0x398);
    aiStack_140[2] = param_1[0x3c];
    aiStack_140[0] = param_1[0x39];
    aiStack_130[1] = 0;
    iVar6 = param_1[0x3d] + aiStack_140[2];
    aiStack_140[1] = 0;
    aiStack_130[0] = aiStack_140[0];
    aiStack_130[2] = iVar6;
    iVar5 = fn_825ADE10(auStack_c8,aiStack_140,aiStack_130);
    if (*(int *)(iVar5 + 8) == iVar6) {
      fn_82F68CC0(param_1 + 0x24,auStack_b0,0x50);
      *(undefined1 *)(param_1 + 0x38) = 1;
      fn_828B00A0((ulonglong)(uint)param_1[4] + 0x278);
    }
  }
  return;
}

