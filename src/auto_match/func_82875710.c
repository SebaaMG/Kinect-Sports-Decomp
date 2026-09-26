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
extern int fn_82875118();
extern int fn_828754A8();
extern int fn_82875500();
extern int fn_82875698();
extern unsigned int uStack_30;


void fn_82875710(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uStack_30;
  
  uVar2 = param_1[1];
  uVar1 = (int)(uVar2 - *param_1) / 0x70;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    if ((param_2 * 0x70 + (ulonglong)*param_1 & 0xffffffff) != (ulonglong)uVar2) {
      uVar3 = fn_828754A8((ulonglong)uVar2);
      fn_82875118(uVar3,param_1[1],param_1 + 3);
      param_1[1] = (uint)uVar3;
    }
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_82875698(param_1,param_2 - (longlong)(int)uVar1);
    fn_82875500(param_1[1],param_2 - (longlong)((int)(param_1[1] - *param_1) / 0x70),0,param_1 + 3
                  ,0,uStack_30);
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x70) * 0x70 + param_1[1];
  }
  return;
}

