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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822E53F8();
extern int fn_822E5558();
extern int fn_822F15F8();
extern int fn_822F1D80();
extern int fn_822F1F58();
extern int fn_822F9B78();
extern int fn_82397F88();
extern int fn_82539560();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD028;
extern unsigned int lbl_831CD02C;
extern unsigned int lbl_831CD218;
extern unsigned int lbl_831CD284;
extern unsigned int lbl_831CD288;
extern unsigned int lbl_83265A28;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_822F0E08(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 *puVar4;
  char cVar7;
  int iVar5;
  int iVar6;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  byte bVar12;
  double dVar13;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 in_vr12 [16];
  float fStack_90;
  int iStack_8c;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_70 [112];
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 1) {
    puVar4 = (undefined4 *)fn_822F9B78(auStack_80,*(undefined4 *)(param_1 + 0x18));
    (**(code **)(*(int *)*puVar4 + 4))();
    if (iStack_7c != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = lbl_831CD028;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      puVar8 = &lbl_831CD218;
      iVar6 = *(int *)(iVar5 + 0x2d8);
      fVar9 = *(float *)(iVar6 + 0x174);
      dVar13 = (double)fn_82539560((double)(*(float *)(*(int *)(iVar5 + 0x2e0) + 0x94) +
                                            *(float *)(iVar6 + 0x170)),
                                    (double)(fVar9 * lbl_831CD284),(double)(fVar9 * lbl_831CD288),
                                    (double)lbl_821CC160,(double)lbl_821CA460);
      dVar13 = dVar13 * (double)(float)((double)*(float *)(puVar8 + 0x68) -
                                       (double)*(float *)(puVar8 + 100)) +
               (double)*(float *)(puVar8 + 100);
    }
    else {
      dVar13 = (double)**(float **)(param_1 + 0x14);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_90 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      dVar13 = (double)(float)((double)(*(float **)(param_1 + 0x14))[1] - dVar13) *
               (double)(fStack_90 - lbl_821CA460) + dVar13;
    }
    *(float *)(param_1 + 0x28) = (float)dVar13;
    fn_822F15F8(&fStack_90,param_1);
    fVar9 = 0.0;
    iVar5 = 0;
    if ((iStack_8c != 0) && (cVar7 = fn_8223AAC0(iStack_8c), cVar7 != '\0')) {
      fVar9 = fStack_90;
      iVar5 = iStack_8c;
    }
    iVar6 = *(int *)(param_1 + 0xc);
    fVar10 = 0.0;
    iVar11 = 0;
    if ((iVar5 != 0) && (cVar7 = fn_8223AAC0(iVar5), cVar7 != '\0')) {
      fVar10 = fVar9;
      iVar11 = iVar5;
    }
    iVar2 = *(int *)(iVar6 + 0x2b0);
    *(int *)(iVar6 + 0x2b0) = iVar11;
    *(float *)(iVar6 + 0x2ac) = fVar10;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x108) = lbl_831CD02C;
    fn_82230110(auStack_70,0xffffffff821adec4);
    fn_822E53F8(*(undefined4 *)(param_1 + 0xc),auStack_70);
    fn_82230300(auStack_70,1,0);
    if (iStack_8c != 0) {
      fn_822315A0(iStack_8c);
    }
  }
  bVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0;
  bVar12 = bVar1 << 1;
  if ((bVar1) || (iVar5 = fn_82397F88(*(undefined4 *)(param_1 + 0x10)), iVar5 != 0)) {
    iVar6 = fn_822F1F58(&fStack_90,param_1);
    iVar5 = *(int *)(param_1 + 0xc);
    puVar4 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
    uVar14 = puVar4[1];
    uVar15 = puVar4[2];
    uVar16 = puVar4[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(0xffffffff82192950,0x60);
    vectorRotateLeftImmediateMaskInsert128
              (*(undefined1 (*) [16])(in_r0 + iVar5 + 0x290 & 0xfffffff0),in_vr12,1,0);
    if (!(bool)(bVar12 >> 1 & 1)) {
      puVar3 = (undefined4 *)(in_r0 + iVar5 + 0x290 & 0xfffffff0);
      *puVar3 = *puVar4;
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      *(undefined4 *)(iVar5 + 0x2a4) = 0;
      *(undefined4 *)(iVar5 + 0x2a8) = 0;
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x2a4) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    fn_822F1D80(param_1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x274) = 1;
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  if ((iVar5 != 2) && (iVar5 != 1)) {
    fn_822E5558(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

