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


short fn_82F11878(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,int *param_4,
                   longlong param_5)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = *param_3;
  sVar2 = 2;
  sVar4 = 0;
  param_2[1] = 0;
  *param_2 = uVar1;
  if (1 < (int)param_5) {
    param_5 = param_5 + -1;
    do {
      param_4 = param_4 + 1;
      if (param_3[*param_4] == 0) {
        sVar4 = sVar4 + 1;
      }
      else {
        sVar3 = sVar2 + 1;
        param_2[sVar2] = param_3[*param_4];
        sVar2 = sVar2 + 2;
        param_2[sVar3] = sVar4;
        sVar4 = 0;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return sVar2;
}

