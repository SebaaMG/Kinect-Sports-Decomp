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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern unsigned int fStack_80;
extern int fn_82CE5410();
extern int fn_82D3C628();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;
extern unsigned int uStack_5c;


int * fn_825A4BD8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  undefined1 auStack_90 [16];
  float fStack_80;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [48];
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else if (piVar3[3] == 1) {
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar1 = (undefined4 *)((int)auStack_70 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    auStack_70[0] = lbl_821CA460;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    uStack_5c = auStack_70[0];
    puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    uStack_48 = auStack_70[0];
    dVar7 = (double)lbl_821CC160;
    fStack00000020 = in_register_00010010;
    fStack00000024 = in_register_00010014;
    fStack00000028 = in_register_00010018;
    (**(code **)(*piVar3 + 0x1c))(dVar7,piVar3,auStack_70,param_3,auStack_90);
    dVar5 = (double)(float)((double)fStack00000020 - (double)fStack00000024);
    dVar6 = (double)fStack_80;
    dVar4 = (double)fStack00000020;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar5 < dVar7) << 2) | (uint)(NAN(dVar5) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar4 = (double)fStack00000024;
    }
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x20);
    dVar5 = (double)(float)(dVar4 - (double)fStack00000028);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar5 < dVar7) << 2) | (uint)(NAN(dVar5) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar4 = (double)fStack00000028;
    }
    piVar3 = (int *)fn_82D3C628((double)(float)(dVar4 * dVar6));
  }
  return piVar3;
}

