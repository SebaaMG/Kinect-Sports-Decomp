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
extern int fn_82EE00A8();
extern int fn_83143A60();


void fn_82F339C0(int param_1,int *param_2,uint param_3,ulonglong param_4,ulonglong param_5)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (((int)param_5 != 0) && (param_2 != (int *)0x0)) {
    uVar2 = (ulonglong)param_3 / (param_5 & 0xffffffff);
    trapWord(6,param_5,0);
    if ((param_4 & 0x100) == 0) {
      if ((param_4 & 0x200) == 0) {
        if ((param_4 & 0x400) == 0) {
          if ((param_4 & 0x800) == 0) {
            if (((param_4 & 0x20) != 0) && (piVar1 = *(int **)(param_1 + -4), piVar1 != (int *)0x0))
            {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
                param_2 = (int *)((int)param_2 + (int)param_5);
              }
            }
          }
          else {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              fn_83143A60(param_2);
              param_2 = param_2 + 4;
            }
          }
        }
        else {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            if ((int *)*param_2 != (int *)0x0) {
              (**(code **)(*(int *)*param_2 + 8))();
            }
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          if ((int *)*param_2 != (int *)0x0) {
            (**(code **)(*(int *)*param_2 + 8))();
          }
          param_2 = param_2 + 1;
        }
      }
    }
    else if (uVar2 != 0) {
      param_2 = param_2 + -1;
      do {
        param_2 = param_2 + 1;
        fn_82EE00A8(*param_2);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

