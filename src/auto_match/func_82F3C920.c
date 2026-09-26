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


longlong fn_82F3C920(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piStack_30;
  int *piStack_2c;
  int aiStack_28 [10];
  
  piVar1 = *(int **)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (piVar1 == (int *)0x0) {
    lVar2 = 1;
  }
  else {
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,0xffffffff8202e618,&piStack_2c);
    if (iVar3 < 0) {
      lVar2 = -0x7fffbffb;
    }
    else {
      lVar2 = (**(code **)(*piStack_2c + 0x14))();
      if (-1 < lVar2) {
        while (iVar3 = (**(code **)(*piStack_2c + 0xc))(piStack_2c,1,&piStack_30,0), iVar3 == 0) {
          aiStack_28[0] = 0;
          lVar2 = (**(code **)(*piStack_30 + 0x20))(piStack_30,aiStack_28);
          if (lVar2 < 0) break;
          if (aiStack_28[0] == 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
          if (piStack_30 != (int *)0x0) {
            (**(code **)(*piStack_30 + 8))();
            piStack_30 = (int *)0x0;
          }
        }
      }
    }
    if (piStack_30 != (int *)0x0) {
      (**(code **)(*piStack_30 + 8))();
      piStack_30 = (int *)0x0;
    }
    if (piStack_2c != (int *)0x0) {
      (**(code **)(*piStack_2c + 8))();
    }
  }
  return lVar2;
}

