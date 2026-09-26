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
extern int fn_827F9E08();
extern int fn_82800E98();
extern int fn_82800EC0();
extern int fn_828114A8();
extern unsigned int iStack_5c;
extern unsigned int lbl_821AAD20;


void fn_82801600(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                  float *param_5,ulonglong param_6,int param_7,undefined8 param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  ushort in_stack_00000056;
  int iStack_5c;
  float *pfStack_58;
  
  uVar3 = (longlong)(int)(param_9 & 0xffff) * (longlong)(int)(uint)in_stack_00000056;
  iVar2 = fn_827F9E08();
  if (iVar2 != 0) {
    if (iVar2 != 1) goto LAB_8280168c;
    pfStack_58 = (float *)(*(int *)(param_7 + 8) * (uint)*param_4 * 4 + *(int *)(param_4 + 2));
  }
  iStack_5c = *(int *)(param_7 + 4) * (uint)*param_4 * 4 + *(int *)(param_4 + 2);
LAB_8280168c:
  iVar2 = fn_827F9E08(param_2);
  if (iVar2 == 0) {
    if (uVar3 != 0) {
      uVar4 = 0;
      iVar2 = iStack_5c - (int)param_5;
      dVar6 = (double)lbl_821AAD20;
      do {
        dVar5 = (double)fn_82800E98(param_1,dVar6,(double)*(float *)(iVar2 + (int)param_5),dVar6,
                                      dVar6);
        *param_5 = (float)dVar5;
        param_5 = param_5 + 1;
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar3);
    }
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      iVar2 = iStack_5c - (int)pfStack_58;
      iVar1 = (int)param_5 - (int)pfStack_58;
      dVar6 = (double)lbl_821AAD20;
      do {
        dVar5 = (double)fn_82800EC0(param_1,dVar6,(double)*(float *)(iVar2 + (int)pfStack_58),
                                      (double)*pfStack_58,dVar6);
        *(float *)(iVar1 + (int)pfStack_58) = (float)dVar5;
        pfStack_58 = pfStack_58 + 1;
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar3);
    }
  }
  if (((param_6 & 0xffffffff) != 0) && (uVar4 = 0, uVar3 != 0)) {
    do {
      fn_828114A8(param_6,uVar4);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < uVar3);
  }
  return;
}

