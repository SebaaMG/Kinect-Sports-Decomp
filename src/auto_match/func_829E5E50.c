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
extern int fn_829E5AB0();
extern int fn_829E5DD0();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82057B94;
extern unsigned int lbl_821AAD20;


undefined8
fn_829E5E50(double param_1,double param_2,int *param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,float *param_8,int *param_9,int *param_10)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  
  iVar6 = *param_3;
  if ((iVar6 == 0) || (param_5 != param_3[0xd] * param_3[0xc])) {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    dVar8 = (double)fn_829E5AB0(param_3);
    if (ABS((float)(dVar8 - param_1)) <= (float)(param_1 * param_2)) {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)(dVar8 < param_1) & 2) + 1;
    }
    pfVar5 = (float *)(*(int *)(iVar6 + 4) + -4);
    lVar7 = 5;
    fVar1 = lbl_821AAD20;
    do {
      pfVar5 = pfVar5 + 1;
      fVar1 = *pfVar5 + fVar1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    dVar10 = (double)(fVar1 * lbl_82002C2C);
    if (iVar4 == 2) {
      iVar6 = 3;
    }
    else {
      dVar9 = (double)lbl_82057B94;
      if ((double)lbl_82057B94 <= dVar10) {
        dVar9 = dVar10;
      }
      cVar3 = fn_829E5DD0(dVar9,param_3);
      if (cVar3 == '\0') {
        iVar6 = ((uint)LZCOUNT((uint)(lbl_82005344 < (float)(dVar8 / extraout_f1))) >> 5 ^ 1) + 1;
      }
      else {
        iVar6 = 0;
      }
    }
    param_3[0x11] = (int)(float)dVar10;
    uVar2 = 0;
    *param_8 = (float)dVar8;
    *param_9 = iVar4;
    *param_10 = iVar6;
  }
  return uVar2;
}

