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
extern int fn_82E66280();
extern int fn_82EE88B0();


longlong fn_82EE8D98(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  int *apiStack_40 [16];
  
  apiStack_40[0] = (int *)0x0;
  if ((*(int *)(param_1 + 0x98) == 0) && (lVar2 = fn_82EE88B0(), lVar2 < 0)) {
    return lVar2;
  }
  lVar2 = fn_82E66280(param_1,param_2,param_3,apiStack_40);
  if (-1 < lVar2) {
    piVar1 = *(int **)(param_1 + 0xa0);
    if (param_4 == 0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,apiStack_40[0]);
    }
    else {
      lVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_4,apiStack_40[0],param_5);
      if (lVar2 < 0) {
        return lVar2;
      }
    }
    (**(code **)(*apiStack_40[0] + 8))();
  }
  return lVar2;
}

