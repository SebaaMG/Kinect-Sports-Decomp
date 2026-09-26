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
extern int fn_82330AD8();
extern int fn_82520780();
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_825319C0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821B0988;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined4 *
fn_82331698(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,float *param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 in_vs32 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  
  fn_82330AD8(param_1,param_2,param_4,param_3,param_7,param_8);
  *param_1 = &lbl_821B0988;
  dVar9 = (double)lbl_821CA460;
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  dVar8 = (double)lbl_8218E8E8;
  lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
  *(ulonglong *)(param_1 + 0x28) =
       CONCAT44((param_6[1] - *param_6) *
                (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar9) + *param_6,
                (param_6[3] - param_6[2]) *
                (float)((double)(float)(uVar5 & 0x7fffff | 0x3f800000) - dVar9) + param_6[2]);
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar5 * 0x19660d + 0x3c6ef35f;
  *(ulonglong *)(param_1 + 0x2a) =
       CONCAT44(((float)param_5[6] - (float)param_5[5]) *
                (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar9) +
                (float)param_5[5],
                ((float)param_5[6] - (float)param_5[5]) *
                (float)((double)(float)(uVar5 & 0x7fffff | 0x3f800000) - dVar9) + (float)param_5[5])
  ;
  param_1[0x2c] = *param_5;
  param_1[0x2d] = param_5[1];
  param_1[0x2e] = param_5[4];
  param_1[0x2f] = param_1[0x2d];
  param_1[0x30] = param_5[2];
  fVar1 = (float)param_5[3];
  param_1[0x31] = fVar1;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0x32] = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar9) * fVar1;
  param_1[0x33] = param_5[7];
  uVar11 = param_5[8];
  param_1[0x35] = 3;
  param_1[0x34] = uVar11;
  param_1[0x36] = *param_6;
  param_1[0x37] = param_6[1];
  param_1[0x38] = param_6[2];
  param_1[0x39] = param_6[3];
  iVar3 = fn_82520780(dVar8,0xffffffff83265a28,0x3c6ef35f,0x3c6ef35f,0x3c6ef35f,0x3c6ef35f);
  dVar7 = (double)lbl_82192734;
  dVar6 = dVar7;
  if (iVar3 != 0) {
    dVar6 = dVar9;
  }
  param_1[0x2a] = (float)(dVar6 * (double)(float)param_1[0x2a]);
  iVar3 = fn_82520780(dVar8,0xffffffff83265a28);
  if (iVar3 == 0) {
    dVar9 = dVar7;
  }
  param_1[0x2b] = (float)((double)(float)param_1[0x2b] * dVar9);
  fn_825319C0((double)(float)param_1[0x2f],param_1 + 0x28);
  iVar3 = param_1[4];
  iVar4 = fn_825279F8(iVar3);
  if ((iVar4 == 0) || (iVar4 == 3)) {
    puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar10); memcpy(auVar10, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar10); memcpy(auVar10, &_vt2, 16); }
    vectorConditionalSelect(auVar10,in_vs45,in_vs44);
    puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar2 = in_register_00010430;
    puVar2[1] = in_register_00010434;
    puVar2[2] = in_register_00010438;
    puVar2[3] = in_vr67;
  }
  puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  *(undefined4 *)(iVar3 + 0x170) = 0;
  puVar2 = (undefined4 *)(iVar3 + 0x60U & 0xfffffff0);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  fn_82528948(iVar3);
  return param_1;
}

