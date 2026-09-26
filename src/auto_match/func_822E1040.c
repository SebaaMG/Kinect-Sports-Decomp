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
extern int fn_822315A0();
extern int fn_822BD338();
extern int fn_822C6880();
extern int fn_822C72E0();
extern int fn_822D0570();
extern int fn_822E1680();
extern int fn_8234E808();
extern int fn_82365BD8();
extern int fn_823735F0();
extern int fn_827F57E8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_822E1040(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  int *piVar6;
  longlong lVar7;
  double dVar8;
  int iStack_30;
  int iStack_2c;
  
  param_2[0x13] = (int)(float)((double)(float)param_2[0x13] - param_1);
  dVar8 = (double)lbl_821CC160;
  if (*(int *)(param_2[5] + 0x24) != 0) {
    iVar1 = *(int *)(param_2[5] + 0x118);
    if (*(int *)(param_2[4] + 0x54) != 0xb) {
      fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
      *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) =
           *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10c);
      fn_82365BD8(&iStack_30,param_2 + 6);
      for (pfVar5 = (float *)(iStack_30 + 0x18); pfVar5 != (float *)(iStack_30 + 0x60);
          pfVar5 = pfVar5 + 3) {
        pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
      }
      fn_8234E808();
      if (iStack_2c == 0) {
        return;
      }
      fn_822315A0();
      return;
    }
    fn_827F57E8(dVar8,(double)lbl_8218E8FC,*(undefined4 *)(iVar1 + 0x10));
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x108) =
         *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10c);
    fn_82365BD8(&iStack_30,param_2 + 6);
    for (pfVar5 = (float *)(iStack_30 + 0x18); pfVar5 != (float *)(iStack_30 + 0x60);
        pfVar5 = pfVar5 + 3) {
      pfVar5[2] = (float)((double)(float)((double)pfVar5[1] - (double)*pfVar5) * dVar8 +
                         (double)*pfVar5);
    }
    fn_8234E808();
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  if (param_2[0x12] == 0) {
    iVar1 = fn_822E1680(param_2);
    if (iVar1 == 0) {
      if (*(int *)(param_2[4] + 0x54) == 0xb) {
        uVar4 = 1;
      }
      else {
        if (*(int *)(param_2[4] + 0x54) == 0xf) {
          return;
        }
        uVar4 = 0;
      }
      fn_822D0570(param_2,0,uVar4,0);
    }
    else {
      piVar6 = param_2 + 0xb;
      if (0xf < (uint)param_2[0x10]) {
        piVar6 = (int *)*piVar6;
      }
      iVar1 = fn_822C72E0(*(undefined4 *)(*(int *)(param_2[5] + 0x114) + 0x20),piVar6);
      if (iVar1 != 0) {
        param_2[0x12] = 1;
        param_2[0x13] = lbl_82192604;
        *(undefined4 *)(param_2[5] + 0x1c4) = 1;
        fn_822C6880(*(undefined4 *)(param_2[2] + 0x48));
        if ((*(int *)(param_2[4] + 0x54) == 6) &&
           (iVar1 = param_2[5], iVar2 = fn_823735F0(), iVar1 == iVar2)) {
          iVar1 = param_2[0x15];
          if (iVar1 == 1) {
            uVar4 = 0xffffffff821adbe4;
          }
          else if (iVar1 == 2) {
            (**(code **)(*(int *)param_2[5] + 0x14))((int *)param_2[5],0xffffffff821adbf8);
            (**(code **)(*(int *)param_2[5] + 0x14))((int *)param_2[5],0xffffffff821adc0c);
            uVar4 = 0xffffffff821adc20;
          }
          else {
            if (iVar1 != 3) {
              return;
            }
            (**(code **)(*(int *)param_2[5] + 0x14))((int *)param_2[5],0xffffffff821adc34);
            (**(code **)(*(int *)param_2[5] + 0x14))((int *)param_2[5],0xffffffff821adc4c);
            uVar4 = 0xffffffff821adc60;
          }
          (**(code **)(*(int *)param_2[5] + 0x14))((int *)param_2[5],uVar4);
        }
      }
    }
  }
  else {
    lVar7 = (ulonglong)*(uint *)(param_2[2] + 0x20) + 4;
    cVar3 = fn_822BD338(lVar7,0xffffffff821acfe4);
    if ((cVar3 == '\0') && (cVar3 = fn_822BD338(lVar7,0xffffffff821aca8c), cVar3 == '\0')) {
      if (((double)(float)param_2[0x13] < dVar8) && (*(int *)(param_2[4] + 0x54) != 0xf)) {
        fn_822C72E0(*(undefined4 *)(param_2[2] + 0x20),0xffffffff821adbd8);
      }
    }
    else {
      *(undefined4 *)(param_2[5] + 0x1c4) = 0;
      if (*(int *)(param_2[4] + 0x54) == 0xf) {
        (**(code **)(*param_2 + 0x1c))(param_2);
      }
    }
  }
  return;
}

