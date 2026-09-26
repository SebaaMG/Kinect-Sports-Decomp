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
extern int fn_82EF0D10();


longlong fn_82E7C7B0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  short asStack_30 [2];
  int *apiStack_2c [11];
  
  apiStack_2c[0] = (int *)0x0;
  lVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                    (*(int **)(param_1 + 4),0xffffffff82154ab8,0,apiStack_2c);
  if (((int)lVar2 != -0x3ff2c92b) && (-1 < (int)lVar2)) {
    asStack_30[0] = 0;
    lVar2 = fn_82EF0D10(apiStack_2c[0],asStack_30);
    piVar1 = apiStack_2c[0];
    if (-1 < lVar2) {
      if (asStack_30[0] == 0) {
        lVar2 = -0x3ff2c92b;
      }
      else {
        apiStack_2c[0] = (int *)0x0;
        *param_2 = piVar1;
      }
    }
  }
  if (apiStack_2c[0] != (int *)0x0) {
    (**(code **)(*apiStack_2c[0] + 8))();
  }
  return lVar2;
}

