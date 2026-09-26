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
extern int fn_82E6FC88();
extern int fn_82E704F0();
extern int fn_82E70780();


longlong fn_82E71868(int *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *apiStack_60 [2];
  longlong lStack_58;
  longlong alStack_50 [10];
  
  apiStack_60[0] = (int *)0x0;
  if (param_3 == (longlong *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    lVar4 = fn_82E704F0(param_1,param_2,apiStack_60,alStack_50);
    piVar2 = apiStack_60[0];
    if (-1 < lVar4) {
      lVar4 = fn_82E70780(param_1,param_2,apiStack_60[0],alStack_50[0],apiStack_60);
      if (-1 < lVar4) {
        lStack_58 = 0;
        iVar1 = *piVar2;
        uVar3 = (**(code **)(*param_1 + 0x34))(param_1);
        lVar4 = (**(code **)(iVar1 + 0x2c))
                          (piVar2,apiStack_60[0],*(undefined2 *)(param_1 + 2),uVar3,&lStack_58);
        if (-1 < lVar4) {
          *param_3 = lStack_58 + alStack_50[0];
          lVar4 = fn_82E6FC88(param_1);
          if ((-1 < lVar4) && (param_4 != (undefined4 *)0x0)) {
            *param_4 = piVar2;
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return lVar4;
}

