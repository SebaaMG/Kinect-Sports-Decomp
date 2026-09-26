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
extern int fn_82F63108();


void fn_8289AC08(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)param_1[0xe];
  if (piVar1 != (int *)param_1[0xe]) {
    do {
      if (piVar1[6] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*(int *)piVar1[6] + 4))((int *)piVar1[6],param_1,param_2,param_3,param_4,param_5)
      ;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0xe]);
  }
  piVar1 = (int *)param_1[8];
  if ((int)param_3 == 0) {
    if ((int)param_2 == 1) {
      if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x14))(), iVar2 == 0)) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x2c))(param_1,param_5);
      }
    }
    else {
      if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*(int *)param_1[8] + 0x10))(), iVar2 == 0)
         ) {
        (**(code **)(*param_1 + 0x18))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x1c))(param_1,param_5);
      }
      if ((int)param_4 == 1) {
        if (((int *)param_1[8] == (int *)0x0) ||
           (iVar2 = (**(code **)(*(int *)param_1[8] + 0x10))(), iVar2 == 0)) {
          (**(code **)(*param_1 + 8))(param_1);
        }
        else {
          (**(code **)(*param_1 + 0xc))(param_1,param_5);
        }
      }
    }
  }
  else if ((int)param_2 == 1) {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*(int *)param_1[8] + 0x14))(), iVar2 == 0))
    {
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x34))(param_1,param_5);
    }
  }
  else {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*(int *)param_1[8] + 0x10))(), iVar2 == 0))
    {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x24))(param_1,param_5);
    }
    if ((int)param_4 == 1) {
      if (((int *)param_1[8] == (int *)0x0) ||
         (iVar2 = (**(code **)(*(int *)param_1[8] + 0x10))(), iVar2 == 0)) {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x14))(param_1,param_5);
      }
    }
  }
  return;
}

