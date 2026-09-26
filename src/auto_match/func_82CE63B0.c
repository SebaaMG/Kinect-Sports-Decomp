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
extern int fn_82F68CC0();


void fn_82CE63B0(int *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int aiStack_30 [12];
  
  aiStack_30[0] = param_2[1] << 1;
  if (param_2[1] == 0) {
    aiStack_30[0] = 1;
  }
  if ((param_2[2] & 0x80000000) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x14))
                      (param_1,*param_2,param_2[2] & 0x3fffffff,aiStack_30,param_3);
    *param_2 = uVar1;
    param_2[2] = aiStack_30[0];
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1,aiStack_30,param_3);
    fn_82F68CC0(uVar1,*param_2,(longlong)(int)param_3 * (longlong)(int)param_2[1]);
    *param_2 = uVar1;
    param_2[2] = aiStack_30[0];
  }
  return;
}

