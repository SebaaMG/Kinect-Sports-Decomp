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
extern unsigned int *auStack_2c;
extern int fn_82E242C8();


longlong fn_82E24AA8(int param_1,ulonglong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piStack_30;
  undefined4 auStack_2c [11];
  
  piVar1 = *(int **)(param_1 + 0x10c);
  auStack_2c[0] = 0;
  piStack_30 = (int *)0x0;
  if ((param_2 & 0xffffffff) == 0) {
    lVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,param_3);
  }
  else {
    lVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_3,param_2,0);
  }
  if (-1 < lVar2) {
    while (iVar3 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x1c))
                             (*(int **)(param_1 + 0x10c),auStack_2c,&piStack_30), -1 < iVar3) {
      if (piStack_30 == (int *)0x0) {
        return lVar2;
      }
      lVar2 = fn_82E242C8(param_1);
      if ((lVar2 < 0) ||
         (lVar2 = (**(code **)(**(int **)(param_1 + 0x100) + 0x30))
                            (*(int **)(param_1 + 0x100),piStack_30), lVar2 < 0)) break;
      if (piStack_30 != (int *)0x0) {
        (**(code **)(*piStack_30 + 8))();
        piStack_30 = (int *)0x0;
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
  }
  return lVar2;
}

