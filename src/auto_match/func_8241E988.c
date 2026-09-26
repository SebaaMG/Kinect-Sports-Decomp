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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_830;
extern int fn_8229AAF8();
extern int fn_8229D4E8();
extern int fn_82358FD8();
extern int fn_82417F58();
extern int fn_82528EE0();
extern int fn_82536590();
extern unsigned int lbl_82193A00;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8241E988(double param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  fVar4 = lbl_821CC160;
  uVar1 = param_2[0xb3];
  if (uVar1 == 0) {
    piVar7 = (int *)(param_2[6] * 0x1ac + param_2[2]);
    if (piVar7[10] == 0) {
      return;
    }
    iVar6 = fn_82417F58(param_2);
    if (((((param_2 == *(uint **)(*param_2 + 0x2b20)) && (iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x24) != 0)) &&
        (piVar7 = *(int **)(**(int **)(*param_2 + 8) + *piVar7 * 4),
        *(undefined4 *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x1c) = 1, *(int *)(iVar6 + 0x74) != 0))
       && ((*(int *)(*param_2 + 0xa0) == 0 || (*(int *)(*(int *)(*param_2 + 0xa0) + 0x40) != 1)))) {
      param_2[0xb3] = 2;
      param_2[0xb5] = *(uint *)(param_2[6] * 0x1ac + param_2[2] + 0x30);
    }
    *(undefined4 *)(param_2[6] * 0x1ac + param_2[2] + 0x28) = 0;
    return;
  }
  if (uVar1 == 1) {
    fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
    fVar3 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
    }
    param_2[0xb4] = (uint)fVar3;
    if (fVar3 != fVar4) {
      return;
    }
    lVar5 = fn_82417F58(param_2);
    if (lVar5 != 0) {
      uVar1 = param_2[0xb5];
      if (param_2 == *(uint **)(*param_2 + 0x2b20)) {
        iVar6 = *(int *)(*param_2 + 0xd4);
        fn_82358FD8(*(undefined4 *)(iVar6 + 0x1c),auStack_830,0x400,
                          lbl_82193A00);
        fn_82528EE0(auStack_1030,0x400,0xffffffff821aa638,uVar1);
        fn_8229D4E8(*(undefined4 *)(iVar6 + 0x14),lVar5 + 0x30,auStack_830,auStack_1030);
      }
    }
    fn_82536590((ulonglong)*param_2 + 0x1494,0);
    fn_82536590((ulonglong)*param_2 + 0xe38,0);
    param_2[0xb3] = 3;
    uVar1 = *(uint *)(*param_2 + 0x708);
  }
  else if (uVar1 < 3) {
    uVar1 = *param_2;
    if (((*(int *)(uVar1 + 0xc14) != 0) &&
        ((*(int *)(uVar1 + 0x2bb0) != 3 || (*(float *)(uVar1 + 0x2b34) != lbl_821CC160)))) &&
       (*(int *)(uVar1 + 0x2b3c) != 0)) {
      return;
    }
    if (*(int *)(uVar1 + 0x2b30) != 0) {
      fVar4 = *(float *)(uVar1 + 0x614);
    }
    if (fVar4 < *(float *)(uVar1 + 0x2bb8)) {
      return;
    }
    if (lbl_821CC160 < *(float *)(uVar1 + 0x2b24)) {
      return;
    }
    if (param_2[0x9f] != 0) {
      return;
    }
    if (*(int *)(uVar1 + 0x2b40) != 0) {
      return;
    }
    param_2[0xb3] = 1;
    uVar1 = *(uint *)(uVar1 + 0x704);
  }
  else {
    if (uVar1 != 3) {
      if (4 < uVar1) {
        return;
      }
      fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
      fVar3 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
      }
      param_2[0xb4] = (uint)fVar3;
      if (fVar3 != fVar4) {
        return;
      }
      param_2[0xb3] = 0;
      return;
    }
    fVar2 = -(float)((double)(float)param_2[0xb4] - param_1);
    fVar3 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = (float)((double)(float)param_2[0xb4] - param_1);
    }
    param_2[0xb4] = (uint)fVar3;
    if (fVar3 != fVar4) {
      return;
    }
    if (param_2 == *(uint **)(*param_2 + 0x2b20)) {
      fn_8229AAF8(*(undefined4 *)(*param_2 + 0xd4));
    }
    param_2[0xb3] = 4;
    uVar1 = *(uint *)(*param_2 + 0x70c);
  }
  param_2[0xb4] = uVar1;
  return;
}

