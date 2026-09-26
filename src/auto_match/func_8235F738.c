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
extern int fn_8235EDE8();
extern int fn_8235F5F0();
extern int fn_8235FBC8();
extern int fn_82360050();
extern int fn_823602F0();
extern int fn_82536590();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8235F738(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (double)lbl_821CC160;
  if (((dVar7 < (double)*(float *)(param_2 + 0x2b24)) && (*(int *)(param_2 + 0x2b40) == 0)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x2b24) - param_1),
     *(float *)(param_2 + 0x2b24) = fVar1, (double)fVar1 <= dVar7)) {
    if (*(int *)(param_2 + 0x2b30) == 0) {
      fVar1 = *(float *)(param_2 + 0x610);
    }
    else {
      fVar1 = *(float *)(param_2 + 0x60c);
    }
    fn_8235EDE8((double)fVar1,param_2);
    *(float *)(param_2 + 0x2b24) = (float)dVar7;
  }
  if ((dVar7 < (double)*(float *)(param_2 + 0x2b28)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x2b28) - param_1),
     *(float *)(param_2 + 0x2b28) = fVar1, (double)fVar1 <= dVar7)) {
    if (*(int *)(param_2 + 0xc1c) != 0) {
      iVar2 = param_2 + 0x14d8;
      if (*(int *)(param_2 + 0x2b30) == 0) {
        iVar2 = param_2 + 0x14d4;
      }
      fn_82536590(iVar2,0);
    }
    *(float *)(param_2 + 0x2b28) = (float)dVar7;
  }
  fn_8235F5F0(param_1,param_2);
  if (((*(int *)(param_2 + 0x2ba0) != 0) && (*(int *)(param_2 + 0x2b20) != 0)) &&
     (*(int *)(*(int *)(param_2 + 0x2b20) + 0x19c) == 0)) {
    fn_82536590(param_2 + 0xd88,0);
    *(undefined4 *)(param_2 + 0x2ba0) = 0;
  }
  fn_8235FBC8(param_1,param_2);
  fn_82360050(param_1,param_2);
  if (*(int *)(param_2 + 0x2c9c) == 0) {
    dVar4 = (double)(float)((double)*(float *)(param_2 + 0x2ca0) - param_1);
    dVar6 = -dVar4;
    dVar5 = dVar7;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar6 < dVar7) << 2) | (uint)(NAN(dVar6) || NAN(dVar7)) << 2)) <
        0.0) {
      dVar5 = dVar4;
    }
    *(float *)(param_2 + 0x2ca0) = (float)dVar5;
    if (dVar5 != dVar7) goto code_r0x8235f8e8;
    fn_82536590(param_2 + 0x1488,0);
    uVar3 = 1;
  }
  else {
    if (((*(int *)(param_2 + 0x2c9c) != 2) || (dVar7 < (double)*(float *)(param_2 + 0x2bb8))) ||
       (dVar7 < (double)*(float *)(param_2 + 0x2b24))) goto code_r0x8235f8e8;
    fn_82536590(param_2 + 0x1484,0);
    uVar3 = 3;
  }
  *(undefined4 *)(param_2 + 0x2c9c) = uVar3;
code_r0x8235f8e8:
  fn_823602F0(param_1,param_2);
  if (*(int *)(param_2 + 0x2cc0) == 0) {
    *(float *)(param_2 + 0x2cbc) = (float)dVar7;
  }
  *(undefined4 *)(param_2 + 0x2cc0) = 0;
  return;
}

