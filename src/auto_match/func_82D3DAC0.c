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
extern unsigned int *auStack_60;
extern unsigned int lbl_82132D70;
extern unsigned int lbl_821AAD20;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D3DAC0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 in_register_000100a4;
  undefined4 in_register_000100a8;
  undefined4 in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  undefined1 auStack_60 [96];
  
  dVar8 = (double)lbl_821AAD20;
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x18) + 0x1c))
            (dVar8,(int *)**(undefined4 **)(param_1 + 0x18),0xffffffff8323b1d0,param_3,param_2);
  iVar5 = (int)in_r0;
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 0x1c)) {
    iVar7 = 0x10;
    do {
      piVar1 = *(int **)(iVar7 + *(int *)(param_1 + 0x18));
      (**(code **)(*piVar1 + 0x1c))(dVar8,piVar1,0xffffffff8323b1d0,param_3,auStack_60);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x10;
      iVar5 = (int)in_r0;
      pfVar2 = (float *)((uint)(auStack_60 + iVar5) & 0xfffffff0);
      in_register_000100c0 = *pfVar2;
      in_register_000100c4 = pfVar2[1];
      in_register_000100c8 = pfVar2[2];
      in_vr12 = pfVar2[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs32,in_vs44); memcpy(in_vs42, &_vt0, 16); }{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs45,in_vs43); memcpy(in_vs41, &_vt1, 16); }
      puVar3 = (undefined4 *)(iVar5 + (int)param_2 & 0xfffffff0);
      *puVar3 = in_register_000100a0;
      puVar3[1] = in_register_000100a4;
      puVar3[2] = in_register_000100a8;
      puVar3[3] = in_vr10;
      puVar3 = (undefined4 *)(iVar5 + (int)param_2 + 0x10 & 0xfffffff0);
      *puVar3 = in_register_00010090;
      puVar3[1] = in_register_00010094;
      puVar3[2] = in_register_00010098;
      puVar3[3] = in_vr9;
    } while (iVar6 < *(int *)(param_1 + 0x1c));
  }
  vectorAddFloatingPoint(in_vs32,in_vs45);
  pfVar2 = (float *)((uint)(&lbl_82132D70 + iVar5) & 0xfffffff0);
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  pfVar4 = (float *)(param_1 + 0x40U & 0xfffffff0);
  *pfVar4 = *pfVar2 * in_register_000100c0;
  pfVar4[1] = fVar9 * in_register_000100c4;
  pfVar4[2] = fVar10 * in_register_000100c8;
  pfVar4[3] = fVar11 * in_vr12;
  pfVar2 = (float *)((uint)(&lbl_82132D70 + iVar5) & 0xfffffff0);
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  vectorSubtractFloatingPoint(in_vs41,in_vs42);
  pfVar4 = (float *)(param_1 + 0x30U & 0xfffffff0);
  *pfVar4 = *pfVar2 * in_register_00010080;
  pfVar4[1] = fVar9 * in_register_00010084;
  pfVar4[2] = fVar10 * in_register_00010088;
  pfVar4[3] = fVar11 * in_vr8;
  return;
}

