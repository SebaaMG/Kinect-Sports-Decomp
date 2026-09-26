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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A766C0();


longlong fn_82A76808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 *param_5)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x9c,0x20970006,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82A766C0(uVar1,param_3,param_2,param_4);
  }
  if (piVar2 == (int *)0x0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    lVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,param_1);
    if (lVar3 < 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,0);
      fn_82A4F4E0();
    }
    else {
      *param_5 = piVar2;
    }
  }
  return lVar3;
}

