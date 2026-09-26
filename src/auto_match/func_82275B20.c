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
extern int fn_82275C58();
extern int fn_82275F90();
extern int fn_8265CA20();
extern unsigned int iStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82275B20(longlong param_1,undefined8 param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int aiStack_80 [8];
  int aiStack_60 [24];
  
  if ((int)(param_4 * 2) <= param_5) {
    lVar4 = ((ulonglong)param_4 & 0x1fffffff) * 8;
    lVar3 = param_1;
    do {
      iStack_90 = param_3[4];
      lVar2 = lVar4 + lVar3;
      uStack_a0 = 0;
      uStack_9c = 0;
      param_1 = lVar4 + lVar2;
      uStack_98 = 0;
      uStack_94 = 0;
      iVar1 = fn_82275F90(aiStack_80,lVar3,lVar2,lVar2,param_1,&uStack_a0);
      param_3[4] = *(int *)(iVar1 + 0x10);
      if (aiStack_80[0] != 0) {
        fn_8265CA20(aiStack_80[0]);
      }
      param_5 = param_5 + param_4 * -2;
      lVar3 = param_1;
    } while ((int)(param_4 * 2) <= param_5);
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if ((int)param_4 < param_5) {
    iStack_90 = param_3[4];
    lVar3 = ((ulonglong)param_4 & 0x1fffffff) * 8 + param_1;
    fn_82275F90(aiStack_60,param_1,lVar3,lVar3,param_2,&uStack_a0);
  }
  else {
    iStack_90 = param_3[4];
    fn_82275C58(aiStack_60,param_1,param_2,&uStack_a0);
  }
  if (aiStack_60[0] != 0) {
    fn_8265CA20();
  }
  iVar1 = *param_3;
  if (iVar1 != 0) {
    for (; iVar1 != param_3[2]; iVar1 = iVar1 + 8) {
    }
    fn_8265CA20();
  }
  return;
}

