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
extern int fn_82E7B810();


longlong fn_82E439A0(int param_1)

{
  longlong lVar1;
  int *piStack_30;
  int *apiStack_2c [11];
  
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  piStack_30 = (int *)0x0;
  apiStack_2c[0] = (int *)0x0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))
                    (*(int **)(param_1 + 0x18),0xffffffff820ed018,&piStack_30);
  if (-1 < lVar1) {
    lVar1 = (**(code **)**(undefined4 **)(param_1 + 0x18))
                      (*(undefined4 **)(param_1 + 0x18),0xffffffff82154c18,apiStack_2c);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(*apiStack_2c[0] + 0x14))(apiStack_2c[0],piStack_30,0);
      if (-1 < lVar1) {
        lVar1 = (**(code **)*piStack_30)(piStack_30,0xffffffff82154c58,param_1 + 0x7c);
        if (-1 < lVar1) {
          lVar1 = (**(code **)*piStack_30)(piStack_30,0xffffffff82154c18,param_1 + 0x1c);
          if (-1 < lVar1) {
            if (piStack_30 != (int *)0x0) {
              (**(code **)(*piStack_30 + 8))();
              piStack_30 = (int *)0x0;
            }
            lVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x1c))
                              (*(int **)(param_1 + 0x18),0xffffffff821549b8,&piStack_30);
            if (-1 < lVar1) {
              lVar1 = (**(code **)(*apiStack_2c[0] + 0x14))(apiStack_2c[0],piStack_30,0);
              if ((-1 < lVar1) &&
                 (lVar1 = (**(code **)*piStack_30)(piStack_30,0xffffffff82154c68,param_1 + 0x80),
                 -1 < lVar1)) {
                lVar1 = fn_82E7B810(param_1 + 0x10);
              }
            }
          }
        }
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
    piStack_30 = (int *)0x0;
  }
  if (apiStack_2c[0] != (int *)0x0) {
    (**(code **)(*apiStack_2c[0] + 8))();
  }
  return lVar1;
}

