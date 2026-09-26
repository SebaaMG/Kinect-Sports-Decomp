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
extern unsigned int iStack_2c;


longlong fn_82E2D8C0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int *piStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  *param_3 = 0;
  piStack_30 = (int *)0x0;
  iStack_2c = 0;
  aiStack_28[0] = 0;
  lVar1 = (**(code **)*param_2)(param_2,0xffffffff82154c18,&piStack_30);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*piStack_30 + 0xc))(piStack_30,0xffffffff82154b18,&iStack_2c);
    if (((-1 < lVar1) &&
        (lVar1 = (**(code **)(*piStack_30 + 0xc))(piStack_30,0xffffffff820f8f08,aiStack_28),
        -1 < lVar1)) && ((iStack_2c != 0 || (aiStack_28[0] != 0)))) {
      *param_3 = 1;
    }
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 8))();
  }
  return lVar1;
}

