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
extern int fn_82E50CB8();
extern int fn_82E50F10();


longlong fn_82E39F70(int param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *apiStack_50 [2];
  longlong lStack_48;
  longlong alStack_40 [8];
  
  fn_82E50CB8(param_1 + 8);
  piStack_5c = (int *)0x0;
  piStack_58 = (int *)0x0;
  piStack_60 = (int *)0x0;
  apiStack_50[0] = (int *)0x0;
  piStack_54 = (int *)0x0;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (longlong *)0x0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x6c) == 0) {
      lVar1 = -0x3ff2c94e;
    }
    else {
      lStack_48 = 0;
      alStack_40[0] = 0;
      lVar1 = (**(code **)*param_2)(param_2,0xffffffff8215ed68,&piStack_5c);
      if (-1 < lVar1) {
        lVar1 = (**(code **)(*piStack_5c + 0x28))(piStack_5c,&piStack_58);
        if (-1 < lVar1) {
          lVar1 = (**(code **)*piStack_58)(piStack_58,0xffffffff82154c18,&piStack_60);
          if (-1 < lVar1) {
            lVar1 = (**(code **)(*piStack_60 + 0x10))(piStack_60,0xffffffff820ed018,0,apiStack_50);
            if (-1 < lVar1) {
              lVar1 = (**(code **)(*piStack_60 + 0x10))(piStack_60,0xffffffff821549b8,0,&piStack_54)
              ;
              if (-1 < lVar1) {
                lVar1 = (**(code **)(*apiStack_50[0] + 0x14))(apiStack_50[0],0,&lStack_48);
                if ((-1 < lVar1) &&
                   (lVar1 = (**(code **)(*piStack_54 + 0x14))(piStack_54,0,alStack_40), -1 < lVar1))
                {
                  *param_3 = alStack_40[0] + lStack_48;
                }
              }
            }
          }
        }
      }
      if (piStack_5c != (int *)0x0) {
        (**(code **)(*piStack_5c + 8))();
        piStack_5c = (int *)0x0;
      }
      if (piStack_58 != (int *)0x0) {
        (**(code **)(*piStack_58 + 8))();
        piStack_58 = (int *)0x0;
      }
      if (piStack_60 != (int *)0x0) {
        (**(code **)(*piStack_60 + 8))();
        piStack_60 = (int *)0x0;
      }
      if (piStack_54 != (int *)0x0) {
        (**(code **)(*piStack_54 + 8))();
        piStack_54 = (int *)0x0;
      }
      if (apiStack_50[0] != (int *)0x0) {
        (**(code **)(*apiStack_50[0] + 8))();
        apiStack_50[0] = (int *)0x0;
      }
    }
  }
  fn_82E50F10(param_1 + 8);
  return lVar1;
}

