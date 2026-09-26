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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEE070();
extern int fn_82EEE588();
extern int fn_82F41938();
extern int fn_82F41B20();
extern int fn_82F41BD0();
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000044;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;


longlong fn_82EEEAD0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,uint param_7,short *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack0000003c;
  uint uStack00000044;
  int in_stack_00000054;
  short asStack_60 [2];
  int aiStack_5c [23];
  
  aiStack_5c[0] = 0;
  iVar2 = 0;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  if (param_1[0x1d] == 0) {
    lVar3 = -0x7fff0001;
    goto LAB_82eeecd0;
  }
  iVar2 = fn_82E50BE8(0x68,0,0,0,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82F41938();
  }
  if (iVar2 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    *(short *)(iVar2 + 0x14) = (short)param_2;
    *(int *)(iVar2 + 0x3c) = (int)param_4;
    *(short *)(iVar2 + 0x40) = (short)param_5;
    lVar3 = fn_82F41BD0(iVar2,param_3);
    if (-1 < lVar3) {
      lVar3 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 4) + 0x10))
                        ((int)param_1 + *(int *)(param_1[1] + 4) + 4,param_4,&stack0x0000003c,
                         &stack0x00000044,aiStack_5c);
      iVar1 = in_stack_00000054;
      if (-1 < lVar3) {
        if (((in_stack_00000054 == 0) && ((int)param_4 == 1)) && (0xffff < uStack00000044)) {
          lVar3 = -0x7ff8ffa9;
        }
        else {
          lVar3 = (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 4) + 0x38))
                            ((int)param_1 + *(int *)(param_1[1] + 4) + 4,param_3,param_2);
          if (-1 < lVar3) {
            if ((int)lVar3 == 1) {
              lVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_5);
              if (-1 < lVar3) {
                if ((int)lVar3 != 0) goto LAB_82eeec5c;
                lVar3 = -0x3ff2c94e;
              }
            }
            else {
LAB_82eeec5c:
              lVar3 = fn_82EEE070(param_1,iVar2,uStack0000003c,uStack00000044,1,param_3,iVar1);
              if ((-1 < lVar3) && (iVar2 = 0, param_8 != (short *)0x0)) {
                asStack_60[0] = 0;
                lVar3 = fn_82EEE588(param_1,param_2,asStack_60,iVar1);
                if (-1 < lVar3) {
                  *param_8 = asStack_60[0] + -1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (aiStack_5c[0] != 0) {
    fn_82E4FE40();
  }
LAB_82eeecd0:
  aiStack_5c[0] = 0;
  if (iVar2 != 0) {
    fn_82F41B20(iVar2);
    fn_82E4FE40(iVar2);
  }
  return lVar3;
}

