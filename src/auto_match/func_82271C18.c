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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8226A7C0();
extern int fn_8226C610();
extern int fn_82275128();
extern int fn_8265C9E0();
extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821A7E4C;
extern unsigned int lbl_821A7E60;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D1024;
extern unsigned int lbl_831D1044;
extern unsigned int lbl_831D1048;
extern unsigned int lbl_831D1050;
extern unsigned int lbl_831D1054;
extern unsigned int lbl_831D1058;
extern unsigned int lbl_831D105C;
extern unsigned int lbl_831D1060;
extern unsigned int lbl_831D1064;
extern unsigned int lbl_831D1068;
extern unsigned int lbl_831D106C;
extern unsigned int lbl_831D1070;
extern unsigned int lbl_831D1074;
extern unsigned int lbl_831D1084;
extern unsigned int lbl_831D1088;
extern unsigned int lbl_831D108C;
extern unsigned int lbl_831D1090;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;


void fn_82271C18(undefined8 param_1,ulonglong param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  char cStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  iVar4 = fn_82F6A548();
  dVar12 = (double)lbl_831D1024;
  if (*(int *)(iVar4 + 0x50) != 0) {
    uVar3 = 0;
    goto LAB_82271ff8;
  }
  if (param_4 != 0) {
    dVar14 = (double)(float)(dVar12 + (double)lbl_821917B4);
    iVar5 = fn_82275128();
    if ((double)*(float *)(iVar5 + 0xc) < dVar14) {
      *(float *)(iVar5 + 0xc) = (float)dVar14;
    }
  }
  *(undefined4 *)(iVar4 + 0xb8) = param_3;
  *(uint *)(iVar4 + 0xbc) = (uint)LZCOUNT(*(undefined4 *)(iVar4 + 0xbc)) >> 5;
  if ((int)param_2 == 3) {
    uVar10 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (int)uVar10;
    param_2 = (ulonglong)((-uVar10 & ~uVar10 & 0xffffffff) >> 0x1f != 0);
  }
  uStack_78 = (longlong)*(int *)(*(int *)(iVar4 + 0x4c) + 0x48);
  dVar15 = (double)uStack_78;
  dVar14 = (double)(longlong)*(int *)(*(int *)(iVar4 + 0x4c) + 0x4c);
  if ((param_2 & 0xffffffff) == 0) {
    fVar1 = (float)(dVar15 * (double)lbl_8218E8E8);
    dVar13 = (double)fVar1;
    cStack_70 = '\x01' - (lbl_831D1088 == 0);
    uStack_78 = CONCAT44(fVar1,(float)(dVar14 * (double)lbl_8218E8E8));
    uStack_6c = lbl_831D1084;
    uStack_68 = lbl_831D108C;
    uStack_64 = lbl_831D1090;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0(dVar13);
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    puVar6 = (undefined4 *)fn_8265C9E0(0x34);
    uVar2 = lbl_831D1074;
    uVar7 = lbl_831D1070;
    if (puVar6 == (undefined4 *)0x0) {
LAB_82271fe0:
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)((int)&uStack_78 + 4);
      puVar6[6] = 0xffffffff;
      lVar11 = 5;
      puVar8 = puVar6;
      do {
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar9;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      puVar6[0xb] = uVar2;
      puVar6[10] = uVar7;
      fVar1 = lbl_821CC160;
      *puVar6 = &lbl_821A7E4C;
      *(longlong *)(puVar6 + 7) = uStack_78;
      puVar6[0xc] = fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((float)(dVar14 - dVar15) < fVar1) << 2) |
                    (uint)(NAN((float)(dVar14 - dVar15)) || NAN(fVar1)) << 2)) < 0.0) {
        dVar14 = dVar15;
      }
      puVar6[9] = (float)(dVar14 / dVar12);
    }
LAB_82271fe4:
    *(undefined4 **)(iVar4 + 0x50) = puVar6;
  }
  else if ((param_2 & 0xffffffff) == 1) {
    dVar13 = (double)lbl_831D1058;
    cStack_70 = '\x01' - (lbl_831D1064 == 0);
    fStack_80 = lbl_831D1050;
    fStack_7c = lbl_831D1054;
    uStack_78 = CONCAT44(lbl_831D1058,lbl_831D105C);
    uStack_6c = lbl_831D1060;
    uStack_68 = lbl_831D1068;
    uStack_64 = lbl_831D106C;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0();
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    uVar10 = fn_8265C9E0(0x44);
    if ((uVar10 & 0xffffffff) == 0) {
      uVar7 = 0;
    }
    else {
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)(((float)(dVar14 - dVar15) < lbl_821CC160) << 2) |
                    (uint)(NAN((float)(dVar14 - dVar15)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        dVar14 = dVar15;
      }
      uVar7 = fn_8226A7C0((double)(float)(dVar14 / dVar12),(double)lbl_831D1044,
                           (double)lbl_831D1048,uVar10,&uStack_78,&fStack_80);
    }
    *(undefined4 *)(iVar4 + 0x50) = uVar7;
  }
  else if ((param_2 & 0xffffffff) < 3) {
    fStack_80 = (float)(dVar15 * (double)lbl_8218E8E8);
    dVar13 = (double)fStack_80;
    fStack_7c = (float)(dVar14 * (double)lbl_8218E8E8);
    cStack_70 = '\x01' - (lbl_831D1088 == 0);
    uStack_6c = lbl_831D1084;
    uStack_68 = lbl_831D108C;
    uStack_64 = lbl_831D1090;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0(dVar13);
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((float)(dVar14 - dVar15) < lbl_821CC160) << 2) |
                  (uint)(NAN((float)(dVar14 - dVar15)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      dVar14 = dVar15;
    }
    puVar6 = (undefined4 *)fn_8265C9E0(0x34);
    uVar2 = lbl_831D1074;
    uVar7 = lbl_831D1070;
    if (puVar6 == (undefined4 *)0x0) goto LAB_82271fe0;
    puVar9 = (undefined4 *)((int)&uStack_78 + 4);
    puVar6[6] = 0xffffffff;
    lVar11 = 5;
    puVar8 = puVar6;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar6[9] = (float)(dVar14 / dVar12);
    puVar6[10] = uVar7;
    puVar6[0xb] = uVar2;
    puVar6[0xc] = (float)dVar14;
    *puVar6 = &lbl_821A7E60;
    *(ulonglong *)(puVar6 + 7) = CONCAT44(fStack_80,fStack_7c);
    goto LAB_82271fe4;
  }
  fn_8226C610(*(undefined4 *)(iVar4 + 0x4c),*(undefined4 *)(iVar4 + 0x50));
  uVar3 = 1;
LAB_82271ff8:
  fn_82F6A594(uVar3);
  return;
}

