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
extern unsigned int *auStack_48;
extern int fn_82E5A018();


longlong fn_82E7CF08(int param_1,short param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  short asStack_50 [2];
  int *piStack_4c;
  uint auStack_48 [18];
  
  auStack_48[0] = 0;
  piStack_4c = (int *)0x0;
  asStack_50[0] = 0;
  if (param_3 == (undefined4 *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    lVar2 = -0x7fff0001;
  }
  else {
    lVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                      (*(int **)(param_1 + 4),0xffffffff820f8f08,auStack_48);
    if (-1 < lVar2) {
      uVar1 = 0;
      if (auStack_48[0] != 0) {
        do {
          if (piStack_4c != (int *)0x0) {
            (**(code **)(*piStack_4c + 8))();
            piStack_4c = (int *)0x0;
          }
          lVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                            (*(int **)(param_1 + 4),0xffffffff820f8f08,uVar1,&piStack_4c);
          if ((lVar2 < 0) || (lVar2 = fn_82E5A018(piStack_4c,asStack_50), lVar2 < 0))
          goto LAB_82e7d01c;
          if (asStack_50[0] == param_2) {
            *param_3 = piStack_4c;
            if (piStack_4c == (int *)0x0) {
              return lVar2;
            }
            (**(code **)(*piStack_4c + 4))();
            goto LAB_82e7d01c;
          }
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffffffff) < (ulonglong)auStack_48[0]);
      }
      lVar2 = -0x3ff2c92b;
    }
LAB_82e7d01c:
    if (piStack_4c != (int *)0x0) {
      (**(code **)(*piStack_4c + 8))();
    }
  }
  return lVar2;
}

