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
extern int fn_827F9F70();
extern int fn_827F9F98();
extern int fn_827F9FA8();
extern int fn_827FF940();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_827FFE40(void)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  int *piVar5;
  ulonglong uVar4;
  short sVar6;
  ulonglong uVar7;
  float *pfVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uStack_80;
  ulonglong uStack_78;
  
  piVar5 = (int *)fn_82F6A540();
  dVar15 = extraout_f1;
  dVar9 = (double)fn_827F9F98();
  uVar4 = fn_827F9FA8(piVar5);
  dVar10 = (double)fn_827F9F70(piVar5);
  dVar13 = (double)(longlong)(int)(uVar4 & 0xffff);
  uStack_80 = (ulonglong)(dVar13 * dVar10);
  uVar7 = uStack_80 & 0xffff;
  dVar10 = (double)fn_827FF940(piVar5,uVar7,&uStack_80);
  cVar1 = *(char *)(*(int *)(*piVar5 + 0x30) + 0x1c);
  pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF);
  if (cVar1 != '\0') {
    pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF) + 1;
  }
  cVar2 = *(char *)(*(int *)(*piVar5 + 0x30) + 0x1d);
  if (cVar2 != '\0') {
    pfVar8 = pfVar8 + 1;
  }
  dVar11 = (double)*pfVar8;
  dVar14 = (double)lbl_821AAD20;
  uVar3 = uVar7 & 0xffff;
  if (dVar15 < (double)(float)((double)(float)piVar5[0x34] - dVar11)) {
    do {
      uVar3 = uVar3 + 1 & 0xffff;
      if ((uVar4 & 0xffff) <= uVar3) goto LAB_827fff60;
      dVar10 = (double)fn_827FF940(piVar5,uVar3,&uStack_80);
      pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF);
      if (cVar1 != '\0') {
        pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF) + 1;
      }
      if (cVar2 != '\0') {
        pfVar8 = pfVar8 + 1;
      }
      dVar15 = (double)(float)(dVar15 - (double)(float)((double)*pfVar8 - dVar11));
      dVar11 = (double)*pfVar8;
    } while (dVar14 < dVar15);
    uStack_80 = (ulonglong)((int)uVar3 - (int)(uVar7 & 0xffff));
    dVar9 = (double)(float)((double)(longlong)uStack_80 / dVar13) * dVar9;
  }
  else {
LAB_827fff60:
    dVar12 = (double)(float)piVar5[0x34];
    uVar4 = 0;
    dVar15 = (double)(float)(dVar15 - (double)(float)(dVar12 - dVar11));
    uStack_78 = (longlong)(dVar15 / dVar12) & 0xffffffff;
    dVar11 = -(double)(float)((double)uStack_78 * dVar12 - dVar15);
    dVar15 = (double)(float)((double)(float)((double)lbl_82002AE0 - dVar10) + (double)uStack_78);
    dVar10 = dVar14;
    sVar6 = fn_827F9FA8(piVar5);
    if (sVar6 != 0) {
      do {
        fn_827FF940(piVar5,uVar4,&uStack_80);
        pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF);
        if (*(char *)(*(int *)(*piVar5 + 0x30) + 0x1c) != '\0') {
          pfVar8 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF) + 1;
        }
        if (*(char *)(*(int *)(*piVar5 + 0x30) + 0x1d) != '\0') {
          pfVar8 = pfVar8 + 1;
        }
        dVar12 = (double)*pfVar8;
        dVar11 = (double)(float)(dVar11 - (double)(float)(dVar12 - dVar14));
        if (dVar11 <= dVar10) {
          dVar15 = (double)(float)((double)(float)((double)uVar4 / dVar13) + dVar15);
          uStack_78 = uVar4;
          break;
        }
        uVar4 = uVar4 + 1 & 0xffff;
        uVar7 = fn_827F9FA8(piVar5);
        dVar14 = dVar12;
      } while (uVar4 < (uVar7 & 0xffff));
    }
    dVar9 = dVar9 * dVar15;
  }
  fn_82F6A58C((double)(float)dVar9);
  return;
}

