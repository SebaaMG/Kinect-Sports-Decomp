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
extern int fn_82A5CF28();


longlong fn_82A5CF88(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,int *param_7)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x20,0x20970006,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82A5CF28(uVar1,param_1,param_5,param_2,param_4);
  }
  if (iVar2 == 0) {
    lVar4 = -0x7ff8fff2;
  }
  else {
    piVar3 = (int *)(iVar2 + 4);
    lVar4 = (**(code **)*param_1)(param_1,param_3,piVar3,param_6);
    if (lVar4 < 0) {
      (**(code **)(*piVar3 + 4))(piVar3,0);
      fn_82A4F4E0();
    }
    else {
      *param_7 = iVar2;
    }
  }
  return lVar4;
}

