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
extern unsigned int *auStack_100;
extern unsigned int *auStack_140;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_8280AC48();
extern int fn_8280ACD8();
extern int fn_8280B240();
extern int fn_8280CB70();
extern int fn_8280D310();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_8201DFF0;
extern unsigned int lbl_821AAD20;


void fn_8284E9E0(double param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [128];
  
  if (*(float **)(param_4 + 0xbc) == (float *)0x0) {
    fVar1 = (float)((double)*(float *)(param_4 + 0xdc) * param_1 +
                   (double)*(float *)(param_4 + 0x84));
LAB_8284ea44:
    *(float *)(param_4 + 0x84) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x10) == (code *)0x0) {
      fVar1 = **(float **)(param_4 + 0xbc);
      goto LAB_8284ea44;
    }
    dVar6 = (double)(**(code **)(param_3 + 0x10))();
    *(float *)(param_4 + 0x84) = (float)dVar6;
  }
  if (*(float **)(param_4 + 0xc0) == (float *)0x0) {
    fVar1 = (float)((double)*(float *)(param_4 + 0xe0) * param_1 +
                   (double)*(float *)(param_4 + 0x88));
LAB_8284ea84:
    *(float *)(param_4 + 0x88) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x14) == (code *)0x0) {
      fVar1 = **(float **)(param_4 + 0xc0);
      goto LAB_8284ea84;
    }
    dVar6 = (double)(**(code **)(param_3 + 0x14))();
    *(float *)(param_4 + 0x88) = (float)dVar6;
  }
  dVar6 = (double)lbl_82002C5C;
  if (*(float **)(param_4 + 0xc4) == (float *)0x0) {
    fVar1 = (float)((double)(*(float *)(param_4 + 0xd8) * *(float *)(param_4 + 0xa8)) * param_1 +
                   (double)*(float *)(param_4 + 0x8c));
LAB_8284eae8:
    *(float *)(param_4 + 0x8c) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x18) == (code *)0x0) {
      fVar1 = ((float)((double)**(float **)(param_4 + 0xc4) + dVar6) - *(float *)(param_4 + 0xb8)) *
              *(float *)(param_4 + 0xb4);
      goto LAB_8284eae8;
    }
    dVar7 = (double)(**(code **)(param_3 + 0x18))();
    *(float *)(param_4 + 0x8c) = (float)dVar7;
  }
  if (*(float **)(param_4 + 0xd0) == (float *)0x0) {
    fVar1 = (float)((double)*(float *)(param_4 + 0xe4) * param_1 +
                   (double)*(float *)(param_4 + 0x98));
LAB_8284eb28:
    *(float *)(param_4 + 0x98) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x1c) == (code *)0x0) {
      fVar1 = **(float **)(param_4 + 0xd0);
      goto LAB_8284eb28;
    }
    dVar7 = (double)(**(code **)(param_3 + 0x1c))();
    *(float *)(param_4 + 0x98) = (float)dVar7;
  }
  if (*(float **)(param_4 + 200) == (float *)0x0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x34) * param_1 +
                   (double)*(float *)(param_4 + 0x90));
LAB_8284eb68:
    *(float *)(param_4 + 0x90) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x20) == (code *)0x0) {
      fVar1 = **(float **)(param_4 + 200);
      goto LAB_8284eb68;
    }
    dVar7 = (double)(**(code **)(param_3 + 0x20))();
    *(float *)(param_4 + 0x90) = (float)dVar7;
  }
  if (*(float **)(param_4 + 0xcc) == (float *)0x0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x38) * param_1 +
                   (double)*(float *)(param_4 + 0x94));
LAB_8284eba8:
    *(float *)(param_4 + 0x94) = fVar1;
  }
  else {
    if (*(code **)(param_3 + 0x24) == (code *)0x0) {
      fVar1 = **(float **)(param_4 + 0xcc);
      goto LAB_8284eba8;
    }
    dVar7 = (double)(**(code **)(param_3 + 0x24))();
    *(float *)(param_4 + 0x94) = (float)dVar7;
  }
  fVar3 = lbl_82005344;
  fVar2 = lbl_82005340;
  fVar1 = *(float *)(param_4 + 0x84);
  if (fVar1 <= lbl_82005344) {
    if (fVar1 < lbl_82005340) {
      fVar1 = fVar1 + lbl_82005344;
      goto LAB_8284ebdc;
    }
  }
  else {
    fVar1 = fVar1 - lbl_82005344;
LAB_8284ebdc:
    *(float *)(param_4 + 0x84) = fVar1;
  }
  fVar1 = *(float *)(param_4 + 0x88);
  if (fVar1 <= fVar3) {
    if (fVar1 < fVar2) {
      fVar1 = fVar1 + fVar3;
      goto LAB_8284ec00;
    }
  }
  else {
    fVar1 = fVar1 - fVar3;
LAB_8284ec00:
    *(float *)(param_4 + 0x88) = fVar1;
  }
  dVar7 = (double)*(float *)(param_4 + 0x98);
  dVar5 = (double)lbl_8201543C;
  dVar9 = (double)lbl_821AAD20;
  if (dVar7 <= dVar5) {
    if (dVar7 < dVar9) {
      dVar7 = dVar7 + dVar5;
      goto LAB_8284ec34;
    }
  }
  else {
    dVar7 = dVar7 - dVar5;
LAB_8284ec34:
    *(float *)(param_4 + 0x98) = (float)dVar7;
  }
  dVar7 = (double)*(float *)(param_4 + 0x90);
  if (dVar7 <= dVar5) {
    if (dVar7 < dVar9) {
      dVar7 = dVar7 + dVar5;
      goto LAB_8284ec58;
    }
  }
  else {
    dVar7 = dVar7 - dVar5;
LAB_8284ec58:
    *(float *)(param_4 + 0x90) = (float)dVar7;
  }
  dVar7 = (double)*(float *)(param_4 + 0x94);
  if (dVar7 <= dVar5) {
    if (dVar7 < dVar9) {
      dVar7 = dVar7 + dVar5;
      goto LAB_8284ec7c;
    }
  }
  else {
    dVar7 = dVar7 - dVar5;
LAB_8284ec7c:
    *(float *)(param_4 + 0x94) = (float)dVar7;
  }
  dVar7 = (double)lbl_8200533C;
  if (*(int *)(param_4 + 0xd4) == 2) {
    if (*(int *)(param_2 + 0x58) == 0) {
      dVar5 = (double)*(float *)(param_4 + 0x8c);
      if (((double)*(float *)(param_2 + 0x50) < dVar5) &&
         (*(float *)(param_4 + 0xa8) == lbl_82002AE0)) {
        *(float *)(param_4 + 0x8c) = (float)(dVar5 - (double)*(float *)(param_4 + 0xb4));
        goto LAB_8284ed1c;
      }
      if ((dVar5 < dVar9) && (*(float *)(param_4 + 0xa8) == lbl_8200133C)) {
        dVar8 = (double)*(float *)(param_4 + 0xb4);
        *(float *)(param_4 + 0xa8) = lbl_82002AE0;
LAB_8284edac:
        fVar1 = (float)(dVar8 + dVar5);
        goto LAB_8284edb0;
      }
    }
    else {
      fVar1 = (float)((double)*(float *)(param_4 + 0xb4) * dVar6);
      if ((*(float *)(param_4 + 0x8c) <= *(float *)(param_2 + 0x50) - fVar1) ||
         (*(float *)(param_4 + 0xa8) != lbl_82002AE0)) {
        if ((*(float *)(param_4 + 0x8c) < fVar1) && (*(float *)(param_4 + 0xa8) == lbl_8200133C)) {
          *(float *)(param_4 + 0xa8) = lbl_82002AE0;
        }
      }
      else {
LAB_8284ed1c:
        *(float *)(param_4 + 0xa8) = lbl_8200133C;
      }
    }
  }
  else {
    dVar5 = (double)*(float *)(param_4 + 0x8c);
    if (*(int *)(param_2 + 0x58) == 0) {
      dVar8 = (double)*(float *)(param_2 + 0x50);
      if (dVar5 <= dVar8) {
        if (dVar5 < dVar9) goto LAB_8284edac;
        goto LAB_8284edb4;
      }
      fVar1 = (float)(dVar5 - dVar8);
    }
    else {
      dVar8 = (double)*(float *)(param_2 + 0x50);
      if (dVar5 <= -(double)(float)((double)*(float *)(param_4 + 0xb4) * dVar6 - dVar8)) {
        if ((double)(float)((double)*(float *)(param_4 + 0xb4) * dVar7) <= dVar5) goto LAB_8284edb4;
        fVar1 = (float)(dVar8 + dVar5);
      }
      else {
        fVar1 = (float)(dVar5 - dVar8);
      }
    }
LAB_8284edb0:
    *(float *)(param_4 + 0x8c) = fVar1;
  }
LAB_8284edb4:
  if (*(int *)(param_2 + 0x58) == 0) {
    iVar4 = (int)(*(float *)(param_4 + 0xb0) * *(float *)(param_4 + 0x8c));
    *(int *)(param_4 + 0xa4) = iVar4;
    if (iVar4 < *(int *)(param_2 + 0x48)) {
      if (-1 < iVar4) goto LAB_8284ee00;
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x48) + -1;
    }
    *(int *)(param_4 + 0xa4) = iVar4;
  }
LAB_8284ee00:
  if ((((double)*(float *)(param_4 + 0x98) == dVar9) &&
      ((double)*(float *)(param_4 + 0x94) == dVar9)) &&
     ((double)*(float *)(param_4 + 0x90) == dVar9)) {
    fn_8280B240((double)*(float *)(param_4 + 0x84),(double)*(float *)(param_4 + 0x88),
                 (double)*(float *)(param_4 + 0x8c),param_4);
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      fn_8280ACD8(auStack_c0);
    }
    else {
      fn_8280B240(dVar7,dVar7,dVar9);
    }
    dVar7 = (double)lbl_8201DFF0;
    fn_8280D310((double)(float)((double)*(float *)(param_4 + 0x98) * dVar7),auStack_140,0x7a);
    if ((double)*(float *)(param_4 + 0x90) != dVar9) {
      fn_8280D310((double)(float)((double)*(float *)(param_4 + 0x90) * dVar7),auStack_100,0x78
                       );
      fn_8280CB70(auStack_140,auStack_100,auStack_140);
    }
    if ((double)*(float *)(param_4 + 0x94) != dVar9) {
      fn_8280D310((double)(float)((double)*(float *)(param_4 + 0x94) * dVar7),auStack_100,0x79
                       );
      fn_8280CB70(auStack_140,auStack_100,auStack_140);
    }
    fn_8280CB70(auStack_140,auStack_c0,auStack_100);
    if (*(int *)(param_2 + 0x30) == 0) {
      fn_8280AC48(auStack_100,auStack_140);
    }
    else {
      fn_8280B240(dVar6,dVar6,dVar9,auStack_c0);
      fn_8280CB70(auStack_c0,auStack_100,auStack_140);
    }
    fn_8280B240((double)*(float *)(param_4 + 0x84),(double)*(float *)(param_4 + 0x88),
                 (double)*(float *)(param_4 + 0x8c),auStack_80);
    fn_8280CB70(auStack_80,auStack_140,param_4);
  }
  return;
}

