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
extern int fn_8280ADB0();
extern int fn_82862BC8();
extern int fn_8306B530();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_83211588;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_83211590;


void fn_8285CBC8(double param_1,undefined8 param_2,ushort *param_3)

{
  bool bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  param_1 = -param_1;
  iVar4 = 0;
  *param_3 = 0;
  iVar7 = 0;
  if (lbl_83211588 != 0) {
    iVar5 = 0;
    do {
      fn_8280ADB0(0xffffffff83211340,iVar5 + lbl_8321158C);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar7 < (int)(uint)lbl_83211588);
  }
  if (lbl_83211588 != 0) {
    dVar11 = (double)lbl_82002AE0;
    uVar6 = 1;
    do {
      iVar7 = iVar4 + lbl_8321158C;
      lVar3 = (ulonglong)*param_3 * 0x10 + (ulonglong)lbl_83211590;
      dVar9 = (double)*(float *)(iVar7 + 8);
      pfVar8 = (float *)((-(uint)(lbl_83211588 != uVar6) & uVar6) * 0xc + lbl_8321158C);
      if ((param_1 < dVar9) || (dVar10 = (double)pfVar8[2], param_1 < dVar10)) {
        if ((dVar9 <= param_1) && (param_1 < (double)pfVar8[2])) {
          fn_82862BC8(param_1,pfVar8,iVar7);
          goto LAB_8285cd20;
        }
        if (((double)pfVar8[2] <= param_1) && (param_1 < dVar9)) {
          fn_82862BC8(param_1,iVar7,pfVar8);
          uVar2 = *param_3;
          *param_3 = uVar2 + 1;
          dVar10 = (double)pfVar8[2];
          lVar3 = (ulonglong)(ushort)(uVar2 + 1) * 0x10 + (ulonglong)lbl_83211590;
          goto LAB_8285cd10;
        }
      }
      else {
LAB_8285cd10:
        fn_8306B530((double)*pfVar8,(double)pfVar8[1],dVar10,dVar11,lVar3);
LAB_8285cd20:
        *param_3 = *param_3 + 1;
      }
      iVar4 = iVar4 + 0xc;
      bVar1 = (int)uVar6 < (int)(uint)lbl_83211588;
      uVar6 = uVar6 + 1;
    } while (bVar1);
  }
  return;
}

