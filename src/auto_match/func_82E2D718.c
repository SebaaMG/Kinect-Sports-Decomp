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
extern int fn_82E57548();


longlong fn_82E2D718(int param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piStack_30;
  int *piStack_2c;
  int *apiStack_28 [10];
  
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  apiStack_28[0] = (int *)0x0;
  lVar2 = (**(code **)*param_2)(param_2,0xffffffff82154c18,&piStack_30);
  if (-1 < lVar2) {
    iVar3 = (**(code **)(*piStack_30 + 0x10))(piStack_30,0xffffffff82154a98,0,&piStack_2c);
    if (iVar3 < 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_82E57548(piStack_2c,apiStack_28);
      if (-1 < lVar2) {
        if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x1d8) + 8))();
          *(undefined4 *)(param_1 + 0x1d8) = 0;
        }
        piVar1 = apiStack_28[0];
        apiStack_28[0] = (int *)0x0;
        *(int **)(param_1 + 0x1d8) = piVar1;
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
    piStack_30 = (int *)0x0;
  }
  if (piStack_2c != (int *)0x0) {
    (**(code **)(*piStack_2c + 8))();
    piStack_2c = (int *)0x0;
  }
  if (apiStack_28[0] != (int *)0x0) {
    (**(code **)(*apiStack_28[0] + 8))();
  }
  return lVar2;
}

