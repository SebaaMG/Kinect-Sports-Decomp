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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_825319C0();
extern unsigned int lbl_82192734;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82331480(double param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fStack_30;
  float fStack_2c;
  
  fVar3 = lbl_82192734;
  fStack_30 = (float)(param_1 * (double)*(float *)(param_2 + 0xac) +
                     (double)*(float *)(param_2 + 0xa4));
  pfVar7 = (float *)(param_2 + 0xac);
  pfVar4 = (float *)(param_2 + 0xa4);
  bVar6 = false;
  fStack_2c = (float)((double)*(float *)(param_2 + 0xb0) * param_1 +
                     (double)*(float *)(param_2 + 0xa8));
  if ((fStack_30 < *(float *)(param_2 + 0xb4)) || (*(float *)(param_2 + 0xb8) < fStack_30)) {
    bVar6 = true;
    *pfVar7 = *pfVar7 * lbl_82192734;
  }
  if ((fStack_2c < *(float *)(param_2 + 0xbc)) || (*(float *)(param_2 + 0xc0) < fStack_2c)) {
    bVar6 = true;
    *(float *)(param_2 + 0xb0) = *(float *)(param_2 + 0xb0) * fVar3;
  }
  if (bVar6) {
    fStack_30 = (float)(param_1 * (double)*pfVar7 + (double)*pfVar4);
    fStack_2c = (float)((double)*(float *)(param_2 + 0xb0) * param_1 +
                       (double)*(float *)(param_2 + 0xa8));
  }
  *(ulonglong *)pfVar4 = CONCAT44(fStack_30,fStack_2c);
  fn_825319C0((double)*(float *)(param_2 + 0xa0),pfVar4,param_3,
                    *(undefined4 *)(param_2 + 0x74));
  iVar1 = *(int *)(param_2 + 0x10);
  iVar5 = fn_825279F8(iVar1);
  if ((iVar5 == 0) || (iVar5 == 3)) {
    puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs39,in_vs45); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs42,auVar8); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar8); memcpy(auVar8, &_vt2, 16); }
    vectorConditionalSelect(auVar8,in_vs32,in_vs44);
    puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_00010430;
    puVar2[1] = in_register_00010434;
    puVar2[2] = in_register_00010438;
    puVar2[3] = in_vr67;
  }
  puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(undefined4 *)(iVar1 + 0x170) = 0;
  puVar2 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  fn_82528948(iVar1);
  return;
}

