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
extern int fn_8267B890();
extern int fn_82758A28();
extern int fn_827AF4D0();


int fn_82757D58(int *param_1)

{
  int *piVar3;
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1[0x55] == 0) {
    piVar3 = (int *)(**(code **)(*param_1 + 0x40))();
    uVar1 = (**(code **)(*piVar3 + 0xd8))();
    lVar2 = fn_8267B890(uVar1,0xa4,0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      fn_827AF4D0(lVar2);
      fn_82758A28(lVar2 + 0x1c);
    }
    param_1[0x55] = (int)lVar2;
  }
  return param_1[0x55];
}

