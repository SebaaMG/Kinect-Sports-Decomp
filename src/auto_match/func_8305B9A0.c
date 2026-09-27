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
extern int fn_82F655D8();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820380A0;
extern float lbl_8217E670;
extern unsigned int lbl_8217E678;
extern unsigned int lbl_8217E680;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8305B9A0(undefined8 param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  iVar1 = fn_82F6A530();
  dVar11 = -extraout_f1;
  dVar8 = lbl_82005758 / (double)(longlong)(param_4 + -1);
  dVar14 = lbl_82005758;
  dVar4 = (double)fn_82F655D8(param_2 * lbl_82005778,lbl_8217E680);
  dVar10 = dVar11 * lbl_820380A0;
  dVar12 = (dVar14 - dVar4) * lbl_8217E670 + lbl_82002C40;
  uVar9 = lbl_82015618;
  dVar5 = lbl_82005720;
  dVar4 = (double)fn_82F655D8(lbl_82015618,dVar11 * lbl_82005720);
  dVar5 = (double)fn_82F655D8(uVar9,dVar10 * dVar5);
  iVar3 = 0;
  if (0 < param_4) {
    pfVar2 = (float *)(iVar1 + -4);
    dVar10 = lbl_82005710;
    uVar9 = lbl_8217E678;
    uVar13 = lbl_82005730;
    do {
      dVar11 = dVar4;
      if (dVar10 < (double)(longlong)iVar3 * dVar8) {
        dVar11 = (double)fn_82F655D8(dVar14 - (double)(longlong)iVar3 * dVar8,uVar13);
        dVar6 = (double)fn_82F655D8(dVar14 - (dVar14 - dVar11),uVar13);
        dVar6 = dVar14 - dVar6;
        dVar7 = (double)fn_82F655D8(dVar6,uVar9);
        dVar11 = dVar4;
        dVar6 = (double)fn_82F655D8(dVar6,dVar14 / dVar12 - dVar14);
        dVar4 = dVar6 + dVar5;
        if (dVar7 < dVar6 + dVar5) {
          dVar4 = dVar7;
        }
      }
      if (dVar4 < dVar14) {
        dVar4 = dVar14;
      }
      if (dVar11 < dVar4) {
        dVar4 = dVar11;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = (float)dVar4;
      dVar4 = dVar11;
    } while (iVar3 < param_4);
  }
  fn_82F6A57C();
  return;
}

