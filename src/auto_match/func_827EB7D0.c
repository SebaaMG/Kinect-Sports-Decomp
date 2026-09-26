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
extern int fn_82809558();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;


void fn_827EB7D0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,float *param_8,
                  undefined8 param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = fn_82F6A548();
  dVar7 = (double)lbl_821AAD20;
  *param_7 = lbl_821AAD20;
  *param_8 = (float)extraout_f1;
  dVar5 = extraout_f1;
  fn_82810328(param_5,uVar3,param_9);
  dVar4 = (double)fn_82810308(param_9);
  dVar6 = (double)lbl_8201DCB8;
  if (dVar6 < dVar4) {
    dVar4 = (double)fn_82809558();
    *param_10 = (float)dVar4;
    fVar2 = lbl_82021540;
    if ((((double)(float)(dVar4 - param_2) <= -dVar5) || (dVar5 <= (double)(float)(dVar4 + param_2))
        ) && (((double)(float)(dVar4 - dVar5) <= -param_2 ||
              (param_2 <= (double)(float)(dVar4 + dVar5))))) {
      if (dVar6 < dVar4) {
        dVar6 = (double)(float)(dVar4 * dVar4);
        dVar4 = (double)(float)(dVar4 * (double)lbl_82005344);
        fVar1 = (float)((double)(float)((double)(float)(dVar5 * dVar5) + dVar6) -
                       (double)(float)(param_2 * param_2));
        *param_7 = (float)((double)(float)((double)(float)(dVar6 - (double)(float)(param_2 * param_2
                                                                                  )) +
                                          (double)(float)(dVar5 * dVar5)) / dVar4);
        if (dVar7 <= (double)((float)((double)(float)(dVar6 * dVar5) * dVar5) * fVar2 -
                             fVar1 * fVar1)) {
          dVar5 = (double)fn_82809558();
          *param_8 = (float)(dVar5 / dVar4);
          uVar3 = 1;
          goto LAB_827eb8f4;
        }
      }
      uVar3 = 0;
      goto LAB_827eb8f4;
    }
  }
  else {
    *param_10 = (float)dVar4;
  }
  uVar3 = 0xffffffffffffffff;
LAB_827eb8f4:
  fn_82F6A594(uVar3);
  return;
}

