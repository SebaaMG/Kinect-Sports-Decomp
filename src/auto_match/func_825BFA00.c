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
extern int fn_82535F50();
extern int fn_825529B0();
extern int fn_825C0078();
extern int fn_825C01C0();
extern int fn_825C04E0();
extern int fn_825C0C00();
extern int fn_825C0F18();
extern int fn_825C1138();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D4598;
extern unsigned int lbl_831D45A8;
extern unsigned int lbl_831D45DC;
extern unsigned int lbl_8328224C;
extern unsigned int stack0x00000040;


void fn_825BFA00(int *param_1,undefined8 param_2,int param_3,undefined8 param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  int iVar7;
  undefined8 uVar8;
  bool bVar10;
  int iVar9;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  iVar11 = param_1[0x16];
  uVar2 = *(uint *)(param_3 + 0x4c);
  puVar3 = (undefined4 *)((uint)(&stack0x00000040 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  fVar1 = lbl_821CC160;
  if (iVar11 != 0) {
    fVar4 = (float)param_1[0x16] - *(float *)(param_3 + 0xb3c);
    fVar6 = -fVar4;
    fVar5 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar6 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar6) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar5 = fVar4;
    }
    param_1[0x16] = (int)fVar5;
  }
  if (param_7 == 0) {
    if ((0 < param_1[0x13]) ||
       (bVar10 = false, *(int *)(*(int *)(*(int *)(param_3 + 0x4c) + 0x844) + 0x358) != 0)) {
      bVar10 = true;
    }
    iVar11 = 0;
    if ((float)param_1[0x16] <= fVar1 && !bVar10) goto LAB_825bfafc;
  }
  iVar11 = 1;
LAB_825bfafc:
  lVar12 = (ulonglong)uVar2 + 0x84c;
  if (*param_1 != 0) {
    fn_825C01C0(param_1,lVar12);
  }
  if ((iVar11 != 0) || (uVar8 = 0, param_1[0x14] != 0)) {
    uVar8 = 1;
  }
  fn_825C0C00(param_1,param_5,param_6,param_3,lVar12,uVar8);
  if ((iVar11 != 0) || (uVar8 = 0, param_1[0x14] != 0)) {
    uVar8 = 1;
  }
  fn_825C0F18(param_1,param_2,param_5,param_6,param_3,uVar8);
  if ((iVar11 != 0) || (uVar8 = 0, param_1[0x14] != 0)) {
    uVar8 = 1;
  }
  fn_825C04E0(param_1,param_2,param_5,param_6,param_3,lVar12,uVar8);
  if ((iVar11 != 0) || (uVar8 = 0, param_1[0x14] != 0)) {
    uVar8 = 1;
  }
  fn_825C1138(param_1,param_4,param_3,uVar8);
  if (iVar11 == 0) {
    iVar7 = param_1[2];
    fVar1 = lbl_831D45A8;
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 0)) && (*(int *)(iVar7 + 0x54) == 0)) {
      fVar1 = lbl_831D45DC;
    }
    dVar16 = (double)fVar1;
    if (*param_1 != 0) {
      iVar7 = 0;
      dVar15 = (double)lbl_82195530;
      dVar16 = dVar15;
      if (0 < param_1[0xb]) {
        dVar14 = (double)lbl_821CC160;
        iVar9 = 0;
        do {
          dVar13 = (double)*(float *)(iVar9 + *param_1 + 0x28);
          dVar16 = (double)fVar1;
          if (dVar13 == dVar14) break;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x40;
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)(((double)(float)(dVar13 - dVar15) < dVar14) << 2) |
                        (uint)(NAN((double)(float)(dVar13 - dVar15)) || NAN(dVar14)) << 2)) < 0.0) {
            dVar15 = dVar13;
          }
          dVar16 = dVar15;
        } while (iVar7 < param_1[0xb]);
      }
    }
    while ((param_5 < param_6 &&
           ((((*param_5 & 4) != 0 || (lbl_831D4598 <= lbl_8328224C)) ||
            (iVar7 = fn_825C0078(dVar16,param_1,param_2,param_3,param_5), iVar7 == 0))))) {
      param_5 = param_5 + 3;
    }
  }
  iVar7 = fn_825529B0(param_1 + 4);
  if ((iVar7 != 0) && (iVar11 == 0)) {
    fn_82535F50(param_1[4],&stack0x00000040);
  }
  param_1[0xc] = (uint)LZCOUNT(iVar11) >> 5;
  return;
}

