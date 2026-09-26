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
extern int fn_8256E1D8();
extern int fn_8266D210();


void fn_8266D668(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  while ((puVar2 = param_4, puVar1 = param_3, param_1 != param_2 &&
         (puVar2 = param_2, puVar1 = param_1, param_3 != param_4))) {
    iVar4 = param_5 + -0xc;
    if ((uint)param_4[-1] < (uint)param_2[-1]) {
      fn_8256E1D8(iVar4,param_2[-3],param_2[-2]);
      uVar3 = param_2[-1];
      param_2 = param_2 + -3;
    }
    else {
      fn_8256E1D8(iVar4,param_4[-3],param_4[-2]);
      uVar3 = param_4[-1];
      param_4 = param_4 + -3;
    }
    *(undefined4 *)(param_5 + -4) = uVar3;
    param_5 = iVar4;
  }
  fn_8266D210(puVar1,puVar2,param_5);
  return;
}

