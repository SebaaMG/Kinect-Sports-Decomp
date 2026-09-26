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
extern unsigned int *auStack_30;
extern int fn_825AFF08();
extern int fn_828F3E40();
extern unsigned int iStack_40;
extern unsigned int lbl_821C65D0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C0768;
extern unsigned int lbl_831C076C;
extern unsigned int lbl_8326C070;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82590AE0(double param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  undefined8 uVar6;
  int in_r0;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 in_register_00010450;
  undefined4 in_register_00010454;
  undefined4 in_register_00010458;
  undefined4 in_vr69;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined4 *)((uint)(&lbl_8326C070 + in_r0) & 0xfffffff0);
  uVar9 = *puVar1;
  uVar11 = puVar1[1];
  uVar13 = puVar1[2];
  uVar15 = puVar1[3];
  puVar1 = (undefined4 *)((int)aiStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar11;
  puVar1[2] = uVar13;
  puVar1[3] = uVar15;
  puVar1 = (undefined4 *)((int)&iStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar11;
  puVar1[2] = uVar13;
  puVar1[3] = uVar15;
  fn_825AFF08((double)(float)((double)lbl_831C0768 * param_1),aiStack_50);
  fn_825AFF08((double)(float)((double)lbl_831C076C * param_1),&iStack_40);
  uVar9 = lbl_821CC160;
  aiStack_60[3] = lbl_821CC160;
  aiStack_50[3] = lbl_821CC160;
  uVar6 = CONCAT44(aiStack_50[2],lbl_821CC160);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010450;
  puVar1[1] = in_register_00010454;
  puVar1[2] = in_register_00010458;
  puVar1[3] = in_vr69;
  aiStack_60[0] = iStack_40;
  aiStack_60[1] = uStack_3c;
  aiStack_60[2] = uStack_38;
  fn_828F3E40(4,auStack_30,CONCAT44(aiStack_50[0],aiStack_50[1]),uVar6,
                    CONCAT44(iStack_40,uStack_3c),CONCAT44(uStack_38,uVar9),0xffffffff8326c080,
                    0xffffffff8326c0c0);
  lVar8 = 3;
  iVar7 = 0;
  pfVar2 = (float *)((uint)(&lbl_821C65D0 + in_r0) & 0xfffffff0);
  fVar10 = *pfVar2;
  fVar12 = pfVar2[1];
  fVar14 = pfVar2[2];
  fVar16 = pfVar2[3];
  do {
    piVar3 = (int *)((int)aiStack_60 + iVar7);
    piVar4 = (int *)((int)aiStack_50 + iVar7);
    iVar7 = iVar7 + 4;
    pfVar2 = (float *)(in_r0 + *piVar3 & 0xfffffff0);
    fVar17 = pfVar2[1];
    fVar18 = pfVar2[2];
    fVar19 = pfVar2[3];
    pfVar5 = (float *)(in_r0 + *piVar4 & 0xfffffff0);
    *pfVar5 = fVar10 * *pfVar2;
    pfVar5[1] = fVar12 * fVar17;
    pfVar5[2] = fVar14 * fVar18;
    pfVar5[3] = fVar16 * fVar19;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

