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
extern unsigned int *auStack_3c;
extern int fn_82E32040();
extern int fn_82E44C10();
extern int fn_82E44F90();


longlong fn_82E46080(longlong param_1,undefined2 param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piStack_40;
  uint auStack_3c [15];
  
  piStack_40 = (int *)0x0;
  lVar4 = 0;
  if (param_3 == (undefined4 *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    lVar1 = fn_82E44F90(param_1 + 0x84,param_2,auStack_3c);
    piVar2 = (int *)(-(uint)(lVar1 != 0) & auStack_3c[0]);
    if (piVar2 == (int *)0x0) {
      lVar4 = fn_82E32040(&piStack_40);
      if (-1 < lVar4) {
        iVar3 = fn_82E44C10(param_1 + 0x84,param_2,piStack_40);
        if (iVar3 == 0) {
          lVar4 = -0x7ff8fff2;
        }
        else {
          *param_3 = piStack_40;
          if (piStack_40 != (int *)0x0) {
            (**(code **)(*piStack_40 + 4))();
          }
          piStack_40 = (int *)0x0;
        }
      }
    }
    else {
      *param_3 = piVar2;
      (**(code **)(*piVar2 + 4))();
    }
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))();
    }
  }
  return lVar4;
}

