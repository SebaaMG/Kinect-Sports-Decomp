extern int *piRam83219598;
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
extern int fn_82A33FC0();
extern int fn_82A381F0();


void fn_82A38FB0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  longlong lVar2;

  piVar1 = piRam83219598;
  lVar2 = fn_82A381F0(piRam83219598 + 0x14,param_1,0);
  if (lVar2 == 0) {
    (**(code **)(*piVar1 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if ((param_3 & 0xffffffff) == 0) {
    fn_82A33FC0(piVar1,lVar2,param_6,param_7,param_5,param_8,param_2,0);
  }
  else {
    fn_82A33FC0(piVar1,lVar2,param_6,param_7,param_5,param_8,param_2,param_4);
  }
  return;
}
