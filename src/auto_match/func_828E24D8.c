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
extern unsigned int *auStack_2c;
extern int fn_828D81E8();
extern int fn_828E2248();
extern int fn_828E2460();
extern unsigned int uStack_30;


void fn_828E24D8(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 uStack_30;
  undefined1 auStack_2c [44];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0x1c;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_828D81E8(auStack_2c,param_1,param_2 * 0x1c + (ulonglong)*param_1);
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_828E2460(param_1,param_2 - (longlong)(int)uVar1);
    fn_828E2248(param_1[1],param_2 - (longlong)((int)(param_1[1] - *param_1) / 0x1c),0,param_1 + 3
                  ,0,uStack_30);
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x1c) * 0x1c + param_1[1];
  }
  return;
}

