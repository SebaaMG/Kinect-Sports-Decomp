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
extern int fn_828B3E88();
extern int fn_828D57B0();
extern int fn_828D68F8();
extern int fn_828D6D60();
extern int fn_828D7598();
extern unsigned int uStack_48;


int * fn_828D7958(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int *apiStack_50 [2];
  undefined4 uStack_48;
  
  if (param_1 != param_2) {
    uVar1 = param_2[4];
    if (uVar1 == 0) {
      fn_828B3E88();
    }
    else {
      aiStack_60[1] = 0;
      if ((uint)param_1[4] < uVar1) {
        iVar3 = *param_2;
        iVar4 = param_2[3];
        aiStack_60[0] = iVar3;
        aiStack_60[2] = iVar4;
        fn_828D57B0(apiStack_50,aiStack_60);
        aiStack_60[0] = *param_1;
        aiStack_60[2] = param_1[3];
        aiStack_60[1] = 0;
        aiStack_70[0] = 0;
        aiStack_70[1] = 0;
        if ((apiStack_50[0] != (int *)0x0) && ((int *)*apiStack_50[0] != (int *)0x0)) {
          aiStack_70[0] = *(int *)*apiStack_50[0];
        }
        aiStack_80[1] = 0;
        aiStack_70[2] = uStack_48;
        aiStack_80[0] = iVar3;
        aiStack_80[2] = iVar4;
        fn_828D68F8(apiStack_50,aiStack_80,aiStack_70,aiStack_60);
        aiStack_60[1] = 0;
        aiStack_60[2] = param_2[4] + param_2[3];
        aiStack_70[0] = 0;
        aiStack_70[1] = 0;
        aiStack_60[0] = *param_2;
        if ((apiStack_50[0] != (int *)0x0) && ((int *)*apiStack_50[0] != (int *)0x0)) {
          aiStack_70[0] = *(int *)*apiStack_50[0];
        }
        aiStack_70[2] = uStack_48;
        aiStack_80[0] = 0;
        aiStack_80[2] = param_1[4] + param_1[3];
        aiStack_80[1] = 0;
        if (((int *)*param_1 != (int *)0x0) && (piVar2 = *(int **)*param_1, piVar2 != (int *)0x0)) {
          aiStack_80[0] = *piVar2;
        }
        fn_828D7598(param_1,aiStack_80,aiStack_70,aiStack_60);
      }
      else {
        aiStack_60[2] = param_2[3];
        aiStack_70[0] = *param_2;
        aiStack_80[0] = *param_1;
        aiStack_70[2] = aiStack_60[2] + uVar1;
        aiStack_80[2] = param_1[3];
        aiStack_80[1] = 0;
        aiStack_70[1] = 0;
        aiStack_60[0] = aiStack_70[0];
        fn_828D68F8(apiStack_50,aiStack_60,aiStack_70,aiStack_80);
        aiStack_80[0] = 0;
        aiStack_80[1] = 0;
        aiStack_80[2] = param_1[4] + param_1[3];
        if (((int *)*param_1 != (int *)0x0) && (piVar2 = *(int **)*param_1, piVar2 != (int *)0x0)) {
          aiStack_80[0] = *piVar2;
        }
        aiStack_70[0] = 0;
        aiStack_70[1] = 0;
        if ((apiStack_50[0] != (int *)0x0) && ((int *)*apiStack_50[0] != (int *)0x0)) {
          aiStack_70[0] = *(int *)*apiStack_50[0];
        }
        aiStack_70[2] = uStack_48;
        fn_828D6D60(apiStack_50,param_1,aiStack_70,aiStack_80);
      }
    }
  }
  return param_1;
}

