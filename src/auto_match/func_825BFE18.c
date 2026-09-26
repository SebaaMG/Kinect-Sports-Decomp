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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82552B50();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D45A8;
extern unsigned int lbl_8328224C;
extern unsigned int lbl_83282250;


void fn_825BFE18(int *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  param_1[0x12] = 0;
  fn_82552B50(param_1 + 0xf,1);
  dVar8 = (double)lbl_821CC160;
  if (*param_1 != 0) {
    iVar6 = 0;
    do {
      if ((double)*(float *)(iVar6 + *param_1 + 0x28) != dVar8) {
        lbl_8328224C = lbl_8328224C + -1;
      }
      fn_82552B50(iVar6 + *param_1,1);
      fn_82552B50(iVar6 + *param_1 + 0x18,1);
      fn_82552B50(iVar6 + *param_1 + 0xc,1);
      *(float *)(iVar6 + *param_1 + 0x28) = (float)dVar8;
      iVar2 = iVar6 + *param_1;
      iVar6 = iVar6 + 0x40;
      *(undefined4 *)(iVar2 + 0x24) = 0xffffffff;
    } while (iVar6 < 0xc0);
  }
  if (param_1[1] != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + param_1[1] + 0x28) != 0) {
        lbl_83282250 = lbl_83282250 + -1;
      }
      fn_82552B50(iVar6 + param_1[1],1);
      fn_82552B50(iVar6 + param_1[1] + 0xc,1);
      *(undefined4 *)(iVar6 + param_1[1] + 0x18) = 0xffffffff;
      *(float *)(iVar6 + param_1[1] + 0x1c) = (float)dVar8;
      *(float *)(iVar6 + param_1[1] + 0x20) = (float)dVar8;
      *(undefined4 *)(iVar6 + param_1[1] + 0x28) = 0;
      iVar2 = iVar6 + param_1[1];
      iVar6 = iVar6 + 0x2c;
      *(undefined1 *)(iVar2 + 0x24) = 0;
    } while (iVar6 < 0x84);
  }
  param_1[0xc] = 0;
  fn_82552B50(param_1 + 4,1);
  fn_82552B50(param_1 + 7,1);
  param_1[10] = 0;
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    fn_82552B50(iVar6,1);
    fn_82552B50(iVar6 + 0xc,1);
    *(float *)(iVar6 + 0x1c) = (float)dVar8;
    *(undefined1 *)(iVar6 + 0x18) = 0;
    *(float *)(iVar6 + 0x50) = (float)dVar8;
    *(undefined4 *)(iVar6 + 0x24) = 0;
    *(undefined4 *)(iVar6 + 0x54) = 0;
    puVar3 = (undefined4 *)(iVar6 + 0x30U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    puVar3 = (undefined4 *)(iVar6 + 0x40U & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    *(undefined4 *)(iVar6 + 0x28) = 0xffffffff;
  }
  pfVar1 = (float *)param_1[3];
  param_1[0x18] = (int)(float)dVar8;
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = (float)dVar8;
    pfVar1[2] = (float)dVar8;
    pfVar1[1] = 0.0;
    pfVar1[3] = (float)dVar8;
    pfVar4 = pfVar1 + 0xf;
    pfVar5 = pfVar1 + 5;
    lVar7 = 3;
    do {
      pfVar4[-0xb] = (float)dVar8;
      pfVar5[2] = 0.0;
      pfVar5[4] = -(_seed_nan);
      pfVar5 = pfVar5 + 3;
      *pfVar5 = 0.0;
      pfVar4 = pfVar4 + 1;
      *pfVar4 = 0.0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    pfVar1[0x14] = (float)dVar8;
    pfVar1[0x13] = -(_seed_nan);
    pfVar1[0x15] = (float)dVar8;
    fn_82552B50(pfVar1 + 0x16,1);
    pfVar1[0x1a] = (float)dVar8;
    pfVar1[0x19] = 0.0;
    fn_82552B50(pfVar1 + 0x1b,1);
    pfVar1[0x1e] = 0.0;
  }
  iVar6 = lbl_831D45A8;
  param_1[0x15] = 0;
  param_1[0x17] = iVar6;
  return;
}

