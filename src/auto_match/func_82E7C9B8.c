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


longlong fn_82E7C9B8(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piStack_50;
  int *piStack_4c;
  int *apiStack_48 [2];
  longlong lStack_40;
  longlong lStack_38;
  longlong alStack_30 [6];
  
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  apiStack_48[0] = (int *)0x0;
  lStack_38 = 0;
  lStack_40 = 0;
  alStack_30[0] = 0;
  if (param_2 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    lVar2 = (*(code *)**(undefined4 **)*param_1)
                      ((undefined4 *)*param_1,0xffffffff82154c18,&piStack_50);
    if (-1 < lVar2) {
      lVar2 = (**(code **)(*piStack_50 + 0x10))(piStack_50,0xffffffff820ed018,0,&piStack_4c);
      if (-1 < lVar2) {
        lVar2 = (**(code **)(*piStack_50 + 0x10))(piStack_50,0xffffffff821549b8,0,apiStack_48);
        if (-1 < lVar2) {
          lVar2 = (**(code **)(*piStack_4c + 0x14))(piStack_4c,0,&lStack_38);
          if (-1 < lVar2) {
            lVar2 = (**(code **)(*apiStack_48[0] + 0x14))(apiStack_48[0],&lStack_40,alStack_30);
            if (-1 < lVar2) {
              lVar1 = alStack_30[0] - lStack_40;
              lVar2 = (**(code **)(*param_2 + 0x58))
                                (param_2,0xffffffff8214c1b0,lStack_40 + lStack_38);
              if (-1 < lVar2) {
                lVar2 = (**(code **)(*param_2 + 0x58))(param_2,0xffffffff8214c1c0,lVar1);
              }
            }
          }
        }
      }
    }
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 8))();
      piStack_50 = (int *)0x0;
    }
    if (piStack_4c != (int *)0x0) {
      (**(code **)(*piStack_4c + 8))();
      piStack_4c = (int *)0x0;
    }
    if (apiStack_48[0] != (int *)0x0) {
      (**(code **)(*apiStack_48[0] + 8))();
    }
  }
  return lVar2;
}

