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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82E05480();


void fn_82E05640(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  int aiStack_60 [24];
  
  for (lVar6 = (longlong)((int)param_2 >> 1) + (ulonglong)((int)param_2 < 0 && (param_2 & 1) != 0);
      0 < lVar6; lVar6 = lVar6 + -1) {
    fn_82E05480(param_1,lVar6,param_2,param_3);
  }
  if (0 < (int)param_2) {
    piVar5 = param_1 + param_2 * 3;
    do {
      piVar7 = piVar5 + -3;
      if (*param_1 != 0) {
        fn_82CE4040();
      }
      iVar1 = *param_1;
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      if (param_1 != piVar7) {
        iVar4 = *piVar7;
        if (iVar4 != 0) {
          fn_82CE4040(iVar4);
        }
        if (*param_1 != 0) {
          fn_82CE4118();
        }
        *param_1 = iVar4;
      }
      param_1[1] = piVar5[-2];
      param_1[2] = piVar5[-1];
      if (piVar7 != aiStack_60) {
        if (iVar1 != 0) {
          fn_82CE4040(iVar1);
        }
        if (*piVar7 != 0) {
          fn_82CE4118();
        }
        *piVar7 = iVar1;
      }
      piVar5[-2] = iVar2;
      param_2 = param_2 - 1;
      piVar5[-1] = iVar3;
      fn_82E05480(param_1,1,param_2,param_3);
      if (iVar1 != 0) {
        fn_82CE4118(iVar1);
      }
      piVar5 = piVar7;
    } while (0 < (int)param_2);
  }
  return;
}

