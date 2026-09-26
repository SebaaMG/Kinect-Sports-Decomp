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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8280A5D8();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_820069B4;
extern unsigned int lbl_8201DCBC;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13C0;


void fn_827EE1F8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  uVar1 = fn_82F6A544();
  dVar6 = extraout_f1;
  fn_82810240(param_4,param_3,auStack_70);
  dVar3 = (double)fn_82810280(param_2,auStack_70);
  dVar7 = (double)lbl_821AAD20;
  dVar8 = (double)(float)(dVar3 * dVar7);
  if (dVar7 <= dVar3) {
    if ((((double)lbl_820069B4 <= dVar3) &&
        (dVar4 = (double)fn_82810280(uVar1,auStack_70), dVar8 <= dVar4)) && (dVar4 <= dVar3)) {
      fn_82810240(uVar1,param_2,auStack_80);
      dVar5 = (double)fn_82810280(param_4,auStack_80);
      if ((dVar8 <= dVar5) && ((double)(float)(dVar5 + dVar4) <= dVar3)) {
        dVar8 = (double)fn_82810280(param_3,auStack_80);
        if (lbl_831F13C0 == 0) {
          if (dVar8 <= (double)(float)(dVar3 * dVar6)) goto LAB_827ee3a8;
        }
        else if (dVar8 <= (double)(float)(dVar3 * dVar6)) {
          bVar2 = dVar8 < dVar7;
          goto LAB_827ee3a4;
        }
      }
    }
  }
  else if (((dVar3 <= (double)lbl_8201DCBC) &&
           (dVar4 = (double)fn_82810280(uVar1,auStack_70), dVar4 <= dVar8)) && (dVar3 <= dVar4)) {
    fn_82810240(uVar1,param_2,auStack_80);
    dVar5 = (double)fn_82810280(param_4,auStack_80);
    if ((dVar5 <= dVar8) && (dVar3 <= (double)(float)(dVar5 + dVar4))) {
      dVar8 = (double)fn_82810280(param_3,auStack_80);
      if (lbl_831F13C0 == 0) {
        bVar2 = dVar8 < (double)(float)(dVar3 * dVar6);
LAB_827ee3a4:
        if (!bVar2) {
LAB_827ee3a8:
          dVar6 = (double)fn_8280A5D8(dVar3);
          *param_6 = (float)(dVar6 * dVar8);
          uVar1 = 1;
          goto LAB_827ee2f8;
        }
      }
      else if (((double)(float)(dVar3 * dVar6) <= dVar8) && (dVar8 <= dVar7)) goto LAB_827ee3a8;
    }
  }
  uVar1 = 0;
LAB_827ee2f8:
  fn_82F6A590(uVar1);
  return;
}

