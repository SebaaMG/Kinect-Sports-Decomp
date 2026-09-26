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
extern int fn_826E8488();
extern int fn_826E8560();
extern int fn_826E8610();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_821AAD20;


void fn_826E8C68(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  float *pfVar6;
  longlong lVar7;
  double dVar8;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  iVar4 = fn_826E8560();
  iVar5 = fn_826E8560(param_1);
  uVar3 = fn_826E8488(param_1,4);
  fVar1 = lbl_82002AE0;
  if (iVar5 == 0) {
    pfVar6 = param_2 + -2;
    lVar7 = 4;
    do {
      pfVar6 = pfVar6 + 2;
      *pfVar6 = fVar1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    iVar5 = fn_826E8610(param_1,uVar3);
    dVar8 = (double)lbl_8200D4C0;
    *param_2 = (float)((double)(longlong)iVar5 * dVar8);
    iVar5 = fn_826E8610(param_1,uVar3);
    param_2[2] = (float)((double)(longlong)iVar5 * dVar8);
    iVar5 = fn_826E8610(param_1,uVar3);
    fVar1 = lbl_82002AE0;
    param_2[6] = lbl_82002AE0;
    param_2[4] = (float)((double)(longlong)iVar5 * dVar8);
  }
  fVar2 = lbl_821AAD20;
  dVar8 = (double)fVar1;
  if (iVar4 == 0) {
    param_2 = param_2 + -1;
    lVar7 = 4;
    do {
      param_2 = param_2 + 2;
      *param_2 = fVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  else {
    iVar4 = fn_826E8610(param_1,uVar3);
    param_2[1] = (float)(longlong)iVar4;
    iVar4 = fn_826E8610(param_1,uVar3);
    param_2[3] = (float)(longlong)iVar4;
    iVar4 = fn_826E8610(param_1,uVar3);
    param_2[7] = (float)dVar8;
    param_2[5] = (float)(longlong)iVar4;
  }
  return;
}

