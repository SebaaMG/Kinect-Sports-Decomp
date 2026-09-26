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
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C72E0();
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E5FA8();
extern int fn_82522588();
extern int fn_8255AE78();
extern int fn_8265C9E0();
extern int fn_827F6210();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821AE598;
extern unsigned int lbl_821CC160;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_822F67E8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int in_r0;
  undefined4 *puVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  byte bVar11;
  double dVar12;
  undefined1 in_vs32 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs45 [16];
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
  undefined1 in_vr12 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  
  dVar12 = (double)*(float *)(param_2 + 0xb0);
  *(float *)(param_2 + 0xb0) = (float)(dVar12 - param_1);
  bVar10 = false;
  iStack_60 = 0;
  if (*(int *)(param_2 + 0x58) != 0) {
    fn_827F6210((double)*(float *)(param_2 + 0x50),
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x118) + 0xc) + 0x110));
    if ((double)lbl_821CC160 < (double)*(float *)(param_2 + 0xb0)) {
      return;
    }
    if (dVar12 <= (double)lbl_821CC160) {
      return;
    }
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 700) = 1;
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xb4) - param_1);
  *(float *)(param_2 + 0xb4) = fVar1;
  dVar12 = (double)lbl_821CC160;
  if ((double)fVar1 < dVar12) {
    bVar10 = true;
    puVar6 = (undefined4 *)fn_822E5FA8(auStack_58,*(undefined4 *)(param_2 + 0xc));
    if ((*(int *)(*(int *)*puVar6 + 0x18c) == 0) || (*(int *)(*(int *)*puVar6 + 0x1a4) != 0)) {
      bVar5 = true;
      goto LAB_822f687c;
    }
  }
  bVar5 = false;
LAB_822f687c:
  if ((bVar10) && (iStack_54 != 0)) {
    fn_822315A0();
  }
  if (bVar5) {
    fn_82522588(&iStack_60,(ulonglong)*(uint *)(param_2 + 0x44) + 0x4c);
    iVar2 = iStack_60;
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                      *(undefined4 *)(iStack_60 + 0xc));
    puVar6 = (undefined4 *)fn_8265C9E0(0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 1;
      puVar6[2] = 1;
      *puVar6 = &lbl_821AE598;
      if (puVar6 + 3 != (undefined4 *)0x0) {
        puVar6[3] = *(undefined4 *)(iVar2 + 0x14);
        puVar6[4] = *(undefined4 *)(iVar2 + 0x18);
        puVar6[5] = *(undefined4 *)(iVar2 + 0x1c);
        puVar6[6] = *(undefined4 *)(iVar2 + 0x20);
      }
    }
    iVar2 = *(int *)(param_2 + 0xc);
    puVar8 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    if ((puVar6 != (undefined4 *)0x0) && (cVar7 = fn_8223AAC0(puVar6), cVar7 != '\0')) {
      puVar8 = puVar6 + 3;
      puVar9 = puVar6;
    }
    iVar3 = *(int *)(iVar2 + 0x2c4);
    *(undefined4 **)(iVar2 + 0x2c4) = puVar9;
    *(undefined4 **)(iVar2 + 0x2c0) = puVar8;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    bVar11 = (puVar6 == (undefined4 *)0x0) << 1;
    if (puVar6 != (undefined4 *)0x0) {
      fn_822315A0(puVar6);
    }
    piVar4 = *(int **)(*(int *)(param_2 + 0xc) + 0x1c);
    fn_8255AE78((double)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x14));
    iVar2 = *(int *)(param_2 + 0xc);
    puVar6 = (undefined4 *)(iVar2 + 0x80U & 0xfffffff0);
    uVar14 = puVar6[1];
    uVar15 = puVar6[2];
    uVar16 = puVar6[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs32,in_vs33); memcpy(auVar13, &_vt0, 16); }
    loadVectorLeftIndexed128(0xffffffff82192950,0x60);
    vectorSubtractFloatingPoint(in_vs45,auVar13);
    vectorRotateLeftImmediateMaskInsert128
              (*(undefined1 (*) [16])(in_r0 + iVar2 + 0x290 & 0xfffffff0),in_vr12,1,0);
    if (!(bool)(bVar11 >> 1 & 1)) {
      puVar8 = (undefined4 *)(in_r0 + iVar2 + 0x290 & 0xfffffff0);
      *puVar8 = *puVar6;
      puVar8[1] = uVar14;
      puVar8[2] = uVar15;
      puVar8[3] = uVar16;
      *(undefined4 *)(iVar2 + 0x2a4) = 0;
      *(undefined4 *)(iVar2 + 0x2a8) = 0;
    }
    *(undefined4 *)(param_2 + 0x58) = 1;
    *(float *)(param_2 + 0xb4) = (float)dVar12;
    iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 0x14);
    puVar6 = (undefined4 *)(iVar2 + 0x120U & 0xfffffff0);
    uVar14 = puVar6[1];
    uVar15 = puVar6[2];
    uVar16 = puVar6[3];
    puVar8 = (undefined4 *)(iVar2 + 0x100U & 0xfffffff0);
    uVar25 = *puVar8;
    uVar26 = puVar8[1];
    uVar27 = puVar8[2];
    uVar28 = puVar8[3];
    puVar8 = (undefined4 *)(in_r0 + iVar2 + 0xf0 & 0xfffffff0);
    uVar21 = *puVar8;
    uVar22 = puVar8[1];
    uVar23 = puVar8[2];
    uVar24 = puVar8[3];
    puVar8 = (undefined4 *)(iVar2 + 0x110U & 0xfffffff0);
    uVar17 = *puVar8;
    uVar18 = puVar8[1];
    uVar19 = puVar8[2];
    uVar20 = puVar8[3];
    puVar8 = (undefined4 *)(param_2 + 0x90U & 0xfffffff0);
    *puVar8 = *puVar6;
    puVar8[1] = uVar14;
    puVar8[2] = uVar15;
    puVar8[3] = uVar16;
    puVar6 = (undefined4 *)(param_2 + 0x70U & 0xfffffff0);
    *puVar6 = uVar25;
    puVar6[1] = uVar26;
    puVar6[2] = uVar27;
    puVar6[3] = uVar28;
    puVar6 = (undefined4 *)(in_r0 + param_2 + 0x60 & 0xfffffff0);
    *puVar6 = uVar21;
    puVar6[1] = uVar22;
    puVar6[2] = uVar23;
    puVar6[3] = uVar24;
    puVar6 = (undefined4 *)(param_2 + 0x80U & 0xfffffff0);
    *puVar6 = uVar17;
    puVar6[1] = uVar18;
    puVar6[2] = uVar19;
    puVar6[3] = uVar20;
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  else {
    fn_822E5640(*(undefined4 *)(param_2 + 0xc));
    fn_822E5710(*(undefined4 *)(param_2 + 0xc));
  }
  return;
}

