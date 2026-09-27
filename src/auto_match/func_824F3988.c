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
#define ZEXT48(x) ((U64)((U32)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_824F5230();
extern int fn_82560100();
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_82837D98();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954D4;
extern unsigned int lbl_82195928;
extern unsigned int lbl_82195BE0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824F3988(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar5;
  ulonglong in_r10;
  int iVar6;
  int *piVar7;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 in_vr0 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar16 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar17 [16];
  undefined4 in_stack_00000054;
  int in_stack_00000064;
  undefined4 uStack_cc;
  struct { undefined4 first; undefined4 second; } stack_pair_c0;

  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;

  uVar4 = ZEXT48(&stack0x00000000);
  iVar5 = fn_82F6A52C();
  fVar1 = lbl_821954D4;
  if ((*(int *)(iVar5 + 0xc) != 0) && (*(char *)(iVar5 + 0x74) != '\x01')) {
    dVar11 = (double)lbl_821CC160;
    dVar10 = extraout_f1;
    if ((in_r10 & 0xff) != 0) {
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
      dVar8 = (double)lbl_821917C0;
      loadVectorLeftIndexed128(in_r0,uVar4 + 0x24);
      loadVectorLeftIndexed128(in_r0,uVar4 + 0x1c);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar16, &_vt0, 16); }
      loadVectorLeftIndexed128(in_r0,uVar4 + 0x2c);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar17, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar16,auVar17,3,2); memcpy(auVar16, &_vt2, 16); }
      memcpy((void *)((const void *)((int)&stack_pair_c0.first + (int)in_r0 & 0xfffffff0)), auVar16, 16);
      if (dVar8 <= param_4) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar6 = (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                             (double)lbl_821CA460) * fVar1);
        if ((double)lbl_821CA460 <= param_4) {
          iVar6 = 0x1a - iVar6;
        }
        else {
          iVar6 = 0x17 - iVar6;
        }
      }
      else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar6 = 0x14 - (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * fVar1)
        ;
      }
      fn_82560100(dVar11,*(undefined4 *)(iVar5 + 8),iVar6 * 4 + iVar5,uVar4 - 0xc0,
                        0xffffffff83260000,in_stack_00000054,0,0,0);
    }
    iVar6 = lbl_8320A898;
    piVar7 = *(int **)(iVar5 + 0xc);
    dVar8 = (double)(float)(param_4 * (double)lbl_82195BE0);
    *(undefined4 *)(lbl_8320A898 + 0x2ed8) = 0;
    *(ulonglong *)(iVar6 + 0x10) = *(ulonglong *)(iVar6 + 0x10) | 0x80000;
    iVar6 = *(int *)(lbl_8320A898 + 0x3148);
    uStack_b0 = *(undefined4 *)(lbl_8320A898 + 0x3228);
    uStack_ac = *(undefined4 *)(lbl_8320A898 + 0x322c);
    uStack_cc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3224);
    uStack_b4 = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x321c);
    stack_pair_c0.second = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3218);
    stack_pair_c0.first = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(lbl_8320A898 + 0x3220);
    uStack_b8 = uStack_cc;
    if (iVar6 != 0) {
      fn_8262FE50(iVar6);
    }
    iVar2 = *(int *)(lbl_8320A898 + 0x3158);
    if (iVar2 != 0) {
      fn_8262FE50(iVar2);
    }
    fn_8263A1B8(lbl_8320A898,0,*(undefined4 *)(iVar5 + 0x38));
    fn_8263A508(lbl_8320A898,0);
    if (piVar7 != (int *)0x0) {
      dVar12 = (double)lbl_82195928;
      dVar13 = (double)lbl_8218E8E8;
      do {
        iVar3 = *(int *)(*piVar7 + 4);
        if (*(float *)(iVar3 + 0x50) <= *(float *)(iVar3 + 0x58)) {
          fVar1 = *(float *)(iVar3 + 0x58);
        }
        else {
          fVar1 = *(float *)(iVar3 + 0x50);
        }
        iVar3 = *(int *)(*piVar7 + 4);
        dVar15 = (double)(float)(dVar10 - (double)*(float *)(iVar3 + 0xa0));
        dVar14 = (double)(float)(param_3 - (double)*(float *)(iVar3 + 0xa8));
        if ((SQRT((float)(dVar14 * dVar14 + (double)(float)(dVar15 * dVar15))) <
             (float)((double)fVar1 * dVar12 + dVar8)) && (dVar11 < param_4)) {
          fn_82631920(lbl_8320A898,*(undefined4 *)(iVar5 + 0x14));
          fn_82631578(lbl_8320A898,*(undefined4 *)(iVar5 + 0x18));
          if (in_stack_00000064 == 0) {
            fn_82837D98(*(undefined4 *)(*(int *)(iVar5 + 0x3c) + 0x14),0,uVar4 - 0xd0);
          }
          dVar9 = (double)*(float *)(*(int *)(*piVar7 + 4) + 0x50);
          fn_824F5230((double)(float)(dVar15 / (double)(float)(dVar9 * dVar13)),
                            -(double)(float)(dVar14 / (double)(float)((double)*(float *)(*(int *)(*
                                                  piVar7 + 4) + 0x58) * dVar13)),
                            (double)(float)(param_4 / dVar9),param_5,param_6);
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
    }
    fn_8263A1B8(lbl_8320A898,0,iVar6);
    fn_8263A508(lbl_8320A898,iVar2);
    fn_82639EA8(lbl_8320A898,uVar4 - 0xc0);
  }
  fn_82F6A578();
  return;
}
