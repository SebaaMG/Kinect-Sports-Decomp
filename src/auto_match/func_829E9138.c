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
#define TBLr 0
extern unsigned int *auStack_4c;
extern int fn_8240D928();
extern int fn_829EDB80();
extern int fn_82A1DDC0();
extern __int64 lRam83218a30;
extern unsigned int lbl_82002D08;
extern unsigned int uStack_50;


longlong fn_829E9138(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4,
                      float *param_5,ulonglong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (undefined4 *)0x0)) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    *param_4 = 0;
    if ((param_5 != (float *)0x0) && ((param_6 & 0xffffffff) != 0)) {
      pfVar6 = param_5 + -1;
      uVar7 = param_6;
      uVar2 = param_6 & 0xffffffff;
      while (uVar2 != 0) {
        pfVar6 = pfVar6 + 1;
        *pfVar6 = 0.0;
        uVar7 = uVar7 - 1;
        uVar2 = uVar7;
      }
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar4 = -0x7fff0001;
    }
    else {
      uStack_50 = 0;
      lVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20),&uStack_50);
      if (-1 < lVar4) {
        uVar7 = fn_8240D928(*(undefined4 *)(param_1 + 0x20));
        if ((uVar7 & 0xffffffff) != 0) {
          fn_82A1DDC0(uVar7,param_2,(param_3 & 0x3fffffff) << 2);
          lVar1 = TBLr;
          lRam83218a30 = lRam83218a30 - lVar1;
          iVar5 = fn_829EDB80(*(undefined4 *)(param_1 + 0x20),auStack_4c);
          lVar1 = TBLr;
          lRam83218a30 = lVar1 + lRam83218a30;
          if (iVar5 != 0) {
            *param_4 = auStack_4c[0];
            fVar3 = lbl_82002D08;
            if (param_5 == (float *)0x0) {
              return lVar4;
            }
            if ((param_6 & 0xffffffff) == 0) {
              return lVar4;
            }
            iVar5 = iVar5 - (int)param_5;
            do {
              *param_5 = (float)(longlong)*(int *)(iVar5 + (int)param_5) * fVar3;
              param_5 = param_5 + 1;
              param_6 = param_6 - 1;
            } while (param_6 != 0);
            return lVar4;
          }
        }
        lVar4 = -0x7fffbffb;
      }
    }
  }
  return lVar4;
}

