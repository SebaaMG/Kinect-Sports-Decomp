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
extern int fn_82524548();
extern int fn_82526260();
extern int fn_8265C990();
extern int fn_827EFAE8();
extern int fn_82A1F238();
extern unsigned int iStack_3c;
extern unsigned int lbl_8218E8E8;


void fn_82525400(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  longlong lVar4;
  uint *puVar5;
  double dVar6;
  int iStack_3c;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else if (param_1[0x26e] != 0) {
    fn_82524548(param_1);
    param_1[0x26e] = 0;
  }
  if (param_1[0x2da] != 0) {
    piVar3 = param_1 + 0x637;
    puVar5 = (uint *)0x831c2114;
    dVar6 = (double)lbl_8218E8E8;
    do {
      pfVar2 = (float *)fn_827EFAE8(param_1[0x2da],*puVar5 & 0xffff);
      puVar5 = puVar5 + 1;
      iStack_3c = (int)(longlong)((double)*pfVar2 - dVar6);
      piVar3 = piVar3 + 1;
      *piVar3 = iStack_3c;
    } while ((int)puVar5 < -0x7ce3ded8);
    if (param_1[0x63b] == 0xb) {
      iVar1 = 0xc;
    }
    else {
      if (param_1[0x63b] != 0xc) goto LAB_825254e0;
      iVar1 = 0xb;
    }
    param_1[0x63c] = iVar1;
  }
LAB_825254e0:
  if (((ulonglong)(uint)param_1[0x2c3] != 0) &&
     (lVar4 = (ulonglong)(uint)param_1[0x2c3] - 1, param_1[0x2c3] = (int)lVar4, lVar4 == 0)) {
    if (param_1[0x2c4] == 0) {
      if (param_1[0x2c1] != 0) {
        fn_8265C990(param_1[0x2c1],0x21006000);
        param_1[0x2c1] = 0;
      }
      if (param_1[0x2c2] == 0) {
        return;
      }
      fn_82A1F238();
    }
    else {
      if (param_1[0x2c1] == 0) {
        return;
      }
      if (param_1[0x2c2] == 0) {
        return;
      }
      piVar3 = param_1 + 0x172;
      if (param_1[0x26d] != 1) {
        piVar3 = param_1 + 0x78;
      }
      fn_82526260(piVar3);
      param_1[0x2c1] = 0;
    }
    param_1[0x2c2] = 0;
  }
  return;
}

