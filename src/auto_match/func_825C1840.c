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
extern int fn_825C1C70();
extern int fn_825C2240();
extern int fn_82611068();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_825C1840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 extraout_f1;
  undefined8 uVar7;
  
  iVar5 = fn_82F6DA1C();
  fVar4 = lbl_821CC160;
  if (*(int *)(iVar5 + 0x14) != 0) {
    fVar1 = *(float *)(iVar5 + 0x14) - *(float *)((int)param_2 + 0xb3c);
    fVar3 = -fVar1;
    fVar2 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar2 = fVar1;
    }
    *(float *)(iVar5 + 0x14) = fVar2;
  }
  uVar7 = extraout_f1;
  if ((int)param_8 == 0) {
    if ((0 < *(int *)(iVar5 + 0x10)) ||
       (*(int *)(*(int *)(*(int *)((int)param_2 + 0x4c) + 0x844) + 0x358) != 0)) {
      param_8 = 1;
    }
    if (*(float *)(iVar5 + 0x14) <= fVar4 && param_8 == 0) {
      uVar6 = 0;
      fn_825C1C70(iVar5,param_2,param_3,param_4,param_7);
      goto LAB_825c1944;
    }
  }
  uVar6 = 1;
LAB_825c1944:
  fn_825C2240(iVar5,param_2,param_3,param_4,uVar6,param_7);
  fn_82611068(uVar7,iVar5 + 0x1c,param_5);
  *(uint *)(iVar5 + 0x18) = (uint)LZCOUNT(uVar6) >> 5;
  fn_82F6DCB4();
  return;
}

