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
extern int fn_823AB478();
extern int fn_82462E98();
extern int fn_82463098();
extern int fn_82463770();
extern int fn_825123E8();
extern int fn_8251CF80();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82593BC8();
extern int fn_8265C9E0();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82A1C0C8();
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_8326C2A8;
extern unsigned int lbl_8327F668;
extern unsigned int lbl_83297B44;
extern unsigned char switchdataD_82195418[];
extern unsigned int uStack_60;


void fn_82462810(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_r0;
  undefined8 uVar6;
  int iVar8;
  char cVar9;
  longlong lVar7;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uVar17;
  int aiStack_70 [4];
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  
  param_2[0x28] = param_2[0x89];
  param_2[0x44] = 1;
  iStack_58 = param_2[0x8b];
  iStack_5c = param_2[0x8a];
  puVar11 = (undefined4 *)((int)&uStack_60 + in_r0 & 0xfffffff0);
  *puVar11 = in_register_000104d0;
  puVar11[1] = in_register_000104d4;
  puVar11[2] = in_register_000104d8;
  puVar11[3] = in_vr77;
  param_2[0x44] = 1;
  puVar11 = (undefined4 *)((int)&uStack_60 + in_r0 & 0xfffffff0);
  uVar14 = puVar11[1];
  uVar15 = puVar11[2];
  uVar16 = puVar11[3];
  puVar5 = (undefined4 *)((uint)(param_2 + 0x14) & 0xfffffff0);
  *puVar5 = *puVar11;
  puVar5[1] = uVar14;
  puVar5[2] = uVar15;
  puVar5[3] = uVar16;
  uVar6 = fn_82F4EBC0(0);
  fn_82F4EEC0(&uStack_60,uVar6);
  puVar5 = (undefined4 *)param_2[0xb];
  fVar1 = lbl_821CC160;
  for (puVar11 = (undefined4 *)param_2[10]; lbl_821CC160 = fVar1, puVar11 != puVar5;
      puVar11 = puVar11 + 2) {
    fn_82463770(param_1,*puVar11);
    fVar1 = lbl_821CC160;
  }
  uVar3 = param_2[0xb8];
  if (0xc < uVar3) {
    return;
  }
  iVar8 = (uint)(switchdataD_82195418)[uVar3] * 4;
  switch(uVar3) {
  case 0:
    if (*(char *)(param_2 + 0xe) == '\0') {
      return;
    }
    cVar9 = (**(code **)(*param_2 + 0x2c))(param_2);
    if (cVar9 == '\0') {
      uVar6 = 9;
    }
    else {
      uVar6 = 3;
    }
    break;
  case 1:
    if (*(char *)(param_2 + 0xe) == '\0') {
      return;
    }
    uVar6 = 2;
    break;
  case 2:
    goto switchD_824628f0_caseD_2;
  case 3:
    cVar9 = (**(code **)(*param_2 + 0x2c))(param_2);
    if (cVar9 != '\0') {
      return;
    }
    uVar6 = 4;
    break;
  case 4:
    cVar9 = (**(code **)(*param_2 + 0x2c))(param_2);
    if (cVar9 != '\0') goto LAB_82462a48;
    fVar1 = (float)param_2[0x8c];
    param_2[0x8c] = (int)(float)((double)fVar1 - param_1);
    if (lbl_821CC160 < (float)((double)fVar1 - param_1)) {
      return;
    }
    uVar6 = 8;
    break;
  case 5:
    fn_82462E98(param_2);
    cVar9 = (**(code **)(*param_2 + 0x30))(param_2);
    if (cVar9 == '\0') {
      return;
    }
LAB_82462ad8:
    uVar6 = 6;
    break;
  case 6:
    cVar9 = (**(code **)(*param_2 + 0x30))(param_2);
    if (cVar9 == '\0') goto switchD_824628f0_caseD_a;
    if ((param_2[0x94] != 0) && (*(int *)(param_2[0x94] + 0x50) == 0)) {
      iVar8 = param_2[0x92];
      if (iVar8 == 0) {
        return;
      }
      *(undefined4 *)(iVar8 + 0x4c) = 0xd;
      fVar1 = lbl_821CC160;
      if (*(int *)(iVar8 + 0x48) != 0xd) {
        *(float *)(iVar8 + 0x80) = lbl_821CC160;
      }
      *(float *)(param_2[0x92] + 0x50) = fVar1;
      return;
    }
    uVar6 = 7;
    break;
  case 7:
    iVar4 = param_2[0x92];
    iVar2 = param_2[0x8e];
    dVar13 = (double)fVar1;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x4c) = 0xb;
      if (*(int *)(iVar4 + 0x48) != 0xb) {
        *(float *)(iVar4 + 0x80) = fVar1;
      }
      *(int *)(param_2[0x92] + 0x50) = iVar2;
    }
    cVar9 = (**(code **)(*param_2 + 0x30))(param_2);
    if (cVar9 == '\0') goto switchD_824628f0_caseD_a;
    if (*(int *)(param_2[0x94] + 0x50) == 0) goto LAB_82462ad8;
    param_2[0x8e] = (int)(float)((double)(float)param_2[0x8e] - param_1);
    if (*(char *)(param_2 + 0x91) == '\0') {
      piVar10 = param_2 + 0x90;
      *(undefined1 *)(param_2 + 0x91) = 1;
      if (piVar10 == (int *)0x0) {
        bVar12 = false;
      }
      else {
        bVar12 = *piVar10 != 0;
      }
      if (bVar12) {
        aiStack_70[0] = *piVar10;
        aiStack_70[0] =
             fn_82535298(aiStack_70,*(undefined4 *)(param_2[1] + 0x84c),0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(aiStack_70);
      }
    }
    if (dVar13 < (double)(float)param_2[0x8e]) {
      return;
    }
    uVar6 = fn_82F4EBC0(0);
    fn_82F4EEC0(&uStack_60,uVar6);
    puVar11 = (undefined4 *)((int)&uStack_60 + iVar8 & 0xfffffff0);
    uVar14 = *puVar11;
    uVar15 = puVar11[1];
    uVar16 = puVar11[2];
    uVar17 = puVar11[3];
    if (lbl_83297B44 == 0) {
      lVar7 = fn_8265C9E0(0x20);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        puVar11 = (undefined4 *)((int)lVar7 + 0x10U & 0xfffffff0);
        *puVar11 = in_register_000104d0;
        puVar11[1] = in_register_000104d4;
        puVar11[2] = in_register_000104d8;
        puVar11[3] = in_vr77;
      }
      lbl_83297B44 = (int)lVar7;
    }
    puVar11 = (undefined4 *)(lbl_83297B44 + 0x10U & 0xfffffff0);
    *puVar11 = uVar14;
    puVar11[1] = uVar15;
    puVar11[2] = uVar16;
    puVar11[3] = uVar17;
    uVar6 = 0xb;
    break;
  default:
    uVar6 = 10;
    break;
  case 10:
switchD_824628f0_caseD_a:
    uVar6 = 5;
    break;
  case 0xb:
    iVar8 = fn_828EB518(0);
    if ((lbl_83265988 == 0) || (lbl_83265988 != iVar8)) {
      if ((iVar8 == 0) ||
         ((*(char *)(iVar8 + 0xd8) != '\0' || (cVar9 = fn_828EA610(iVar8), cVar9 != '\0')))) {
        fn_82A1C0C8(1,0);
        fn_825123E8();
        cVar9 = '\0';
        lbl_832659D4 = 1;
        lbl_8326C2A8 = 0;
      }
      else {
        if (lbl_832659CD != '\0') {
          fn_825123E8();
        }
        cVar9 = fn_82593BC8(0,iVar8,0);
      }
    }
    else {
      lbl_8327F668 = fn_823AB478();
      cVar9 = '\x01';
    }
    if (cVar9 == '\0') {
      return;
    }
    uVar6 = 0xc;
    break;
  case 0xc:
    if (param_2[0x9e] != 0) {
      uStack_60 = 0;
      iStack_5c = 0;
      iStack_58 = 0;
      fn_8251CF80(param_2 + 0x9e,0,&uStack_60);
      return;
    }
LAB_82462a48:
    uVar6 = 3;
  }
  fn_82463098(param_2,uVar6);
switchD_824628f0_caseD_2:
  return;
}

