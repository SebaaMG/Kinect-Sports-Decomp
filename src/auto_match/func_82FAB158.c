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
extern int fn_82FAA780();
extern int fn_82FAAA98();
extern int fn_82FAAF20();


undefined8
fn_82FAB158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int aiStack_40 [16];
  
  uVar1 = fn_82FAAA98(param_1,param_4,param_3,param_6,param_7);
  if ((uVar1 & 0xffffffff) != 0) {
    aiStack_40[2] = (int)uVar1;
    aiStack_40[0] = param_5 - (int)param_6;
    aiStack_40[1] = 0;
    uVar2 = fn_82FAA780(param_2,aiStack_40);
    if ((int)uVar2 == 1) {
      return uVar2;
    }
    fn_82FAAF20(param_1,uVar1);
  }
  return 2;
}

