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
extern unsigned int *auStack_88;
extern unsigned int *auStack_a4;
extern unsigned int *auStack_c0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_fc;
extern int fn_82809CB0();
extern int fn_83066690();
extern int fn_830666A8();
extern int fn_83066810();
extern int fn_83067128();
extern int fn_83067488();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_821AAD20;


bool fn_83068CE0(int *param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char acStack_120 [16];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  float afStack_d0 [4];
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [28];
  undefined1 auStack_88 [136];
  
  fn_83067128(&fStack_110);
  for (iVar5 = *param_1; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    fn_83067488(&fStack_110,iVar5 + 0x10);
  }
  dVar12 = (double)lbl_821AAD20;
  dVar10 = (double)lbl_82002AE0;
  dVar11 = (double)lbl_8200533C;
  fn_83066690(dVar10,dVar12,dVar12,(double)(float)((double)(fStack_104 + fStack_110) * dVar11),
               auStack_c0);
  fn_83066690(dVar12,dVar10,dVar12,(double)(float)((double)(fStack_100 + fStack_10c) * dVar11),
               auStack_a4);
  fn_83066690(dVar12,dVar12,dVar10,(double)(float)((double)(fStack_fc + fStack_108) * dVar11),
               auStack_88);
  iVar5 = 0;
  pfVar7 = afStack_d0;
  puVar4 = auStack_c0;
  do {
    iVar9 = *param_1;
    iVar8 = 0;
    iVar6 = 0;
    if (iVar9 == 0) {
LAB_83068e78:
      acStack_120[iVar5] = '\0';
    }
    else {
      do {
        iVar1 = fn_83066810((double)*param_3,puVar4,iVar9 + 0x10);
        if (iVar1 == 2) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        iVar9 = *(int *)(iVar9 + 4);
      } while (iVar9 != 0);
      if ((iVar8 == 0) || (iVar6 == 0)) goto LAB_83068e78;
      acStack_120[iVar5] = '\x01';
      if (iVar8 < iVar6) {
        lVar3 = (longlong)iVar8;
        lVar2 = (longlong)iVar6;
        lStack_f0 = lVar3;
        lStack_e8 = lVar2;
      }
      else {
        lVar3 = (longlong)iVar6;
        lVar2 = (longlong)iVar8;
        lStack_e0 = lVar2;
        lStack_d8 = lVar3;
      }
      *pfVar7 = (float)lVar2 / (float)lVar3;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x1c;
    pfVar7 = pfVar7 + 1;
    if (2 < iVar5) {
      iVar5 = -1;
      iVar9 = 0;
      pfVar7 = afStack_d0;
      dVar11 = (double)lbl_8200133C;
      do {
        if ((acStack_120[iVar9] != '\0') &&
           ((dVar12 = (double)fn_82809CB0((double)(float)((double)*pfVar7 - dVar10)), iVar5 == -1
            || (dVar12 < dVar11)))) {
          dVar11 = dVar12;
          iVar5 = iVar9;
        }
        iVar9 = iVar9 + 1;
        pfVar7 = pfVar7 + 1;
      } while (iVar9 < 3);
      if (-1 < iVar5) {
        fn_830666A8(param_4,auStack_c0 + iVar5 * 0x1c);
      }
      return -1 < iVar5;
    }
  } while( true );
}

