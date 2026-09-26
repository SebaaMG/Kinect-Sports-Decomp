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
extern unsigned int fStack00000044;
extern unsigned int fStack0000004c;
extern int fn_82CE5458();
extern int fn_82D931B8();
extern int fn_82D9B4D8();
extern int fn_82D9D340();
extern int fn_82D9D520();
extern int fn_82DBAF20();
extern unsigned int lbl_82057560;
extern unsigned int lbl_820579A8;
extern unsigned int stack0x00000044;
extern unsigned int stack0x0000004c;


void fn_82D8B4B8(undefined8 param_1,double param_2,double param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,float *param_8,
                  undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fStack00000044;
  float fStack0000004c;
  int in_stack_00000054;
  
  fStack00000044 = (float)param_2;
  fStack0000004c = (float)param_3;
  if ((param_4 - 1U & 0xffffffff) < 7) {
    if ((int)(param_4 - 1U) == 0) {
      fVar1 = param_8[5];
      fVar2 = param_8[10];
      fVar3 = *param_8;
      fVar4 = fVar2;
      if (fVar1 - fVar2 < 0.0) {
        fVar4 = fVar1;
        fVar1 = fVar2;
      }
      fVar2 = fVar3;
      if (fVar3 - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      if (fVar3 - fVar4 < 0.0) {
        fVar4 = fVar3;
      }
      if (fVar4 <= fVar2 * lbl_820579A8) {
LAB_82d8b540:
        if (in_stack_00000054 != 0) {
          piVar5 = (int *)fn_82D9B4D8();
          goto LAB_82d8b650;
        }
      }
      else if (in_stack_00000054 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82D931B8(in_stack_00000054,param_5,param_6,0);
      }
    }
    else if (param_4 == 2) {
      if (in_stack_00000054 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82D931B8(in_stack_00000054,param_5,param_6,0);
      }
    }
    else {
      if (param_4 == 3) goto LAB_82d8b540;
      if (param_4 == 4) {
        fStack00000044 = lbl_82057560;
        fStack0000004c = lbl_82057560;
        if (in_stack_00000054 != 0) {
          piVar5 = (int *)fn_82D9D340();
          goto LAB_82d8b650;
        }
      }
      else {
        if (param_4 == 5) goto LAB_82d8b634;
        if (param_4 == 6) {
          if (in_stack_00000054 != 0) {
            piVar5 = (int *)fn_82DBAF20();
            goto LAB_82d8b650;
          }
        }
        else if (in_stack_00000054 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82D931B8(in_stack_00000054,param_5,param_6,0);
        }
      }
    }
  }
  else {
LAB_82d8b634:
    if (in_stack_00000054 != 0) {
      piVar5 = (int *)fn_82D9D520();
      goto LAB_82d8b650;
    }
  }
  piVar5 = (int *)0x0;
LAB_82d8b650:
  if ((int)param_4 != 4) {
    (**(code **)(*piVar5 + 0x1c))(piVar5,param_8);
    (**(code **)(*piVar5 + 0x2c))(piVar5,param_9);
    (**(code **)(*piVar5 + 0xc))(param_1,piVar5);
  }
  fn_82CE5458(piVar5 + 0x2f,&stack0x00000044);
  fn_82CE5458((int)piVar5 + 0xbd,&stack0x0000004c);
  return;
}

