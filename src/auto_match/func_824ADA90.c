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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_58;
extern unsigned int fStack_68;
extern unsigned int fStack_78;
extern int fn_824A62D0();
extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int iStack_28;
extern unsigned int iStack_90;
extern float lbl_8218E8E8;
extern unsigned int uStack_8c;


void fn_824ADA90(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined1 auStack_70 [8];
  float fStack_68;
  undefined1 auStack_60 [8];
  float fStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  if (*(char *)(*(int *)(param_1 + 0x3c) + 0x1d) != '\0') {
    (**(code **)*param_2)(param_2,auStack_88,&uStack_8c);
    (**(code **)(*param_2 + 4))(param_2,uStack_8c,&iStack_90);
    iVar1 = *(int *)(iStack_90 + 0x40);
    puVar2 = (undefined4 *)(in_r0 + iVar1 & 0xfffffff0);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    puVar3 = (undefined4 *)(iVar1 + 0x100U & 0xfffffff0);
    uVar21 = *puVar3;
    uVar22 = puVar3[1];
    uVar23 = puVar3[2];
    uVar24 = puVar3[3];
    puVar3 = (undefined4 *)(iVar1 + 0x200U & 0xfffffff0);
    uVar17 = *puVar3;
    uVar18 = puVar3[1];
    uVar19 = puVar3[2];
    uVar20 = puVar3[3];
    puVar3 = (undefined4 *)(iVar1 + 0x110U & 0xfffffff0);
    uVar13 = *puVar3;
    uVar14 = puVar3[1];
    uVar15 = puVar3[2];
    uVar16 = puVar3[3];
    puVar3 = (undefined4 *)(iVar1 + 0x210U & 0xfffffff0);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar3 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
    puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2[2] = uVar19;
    puVar2[3] = uVar20;
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    puVar2[2] = uVar15;
    puVar2[3] = uVar16;
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    fn_82F4EBC0(0);
    dVar5 = (double)fn_82F4ED08();
    fStack_30 = (float)dVar5;
    iVar1 = *(int *)(param_1 + 0x3c);
    iStack_28 = *(int *)(iStack_90 + 0x48);
    fStack_2c = -(((fStack_58 - fStack_68) * lbl_8218E8E8 + fStack_68) - fStack_78);
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x60 <= iVar4) {
        iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x60;
      }
      if (*(int *)(iVar4 * 0x60 + *(int *)(iVar1 + 0xc) + 0x58) == iStack_28) {
        return;
      }
    }
    fn_824A62D0(iVar1 + 4,auStack_80);
  }
  return;
}

