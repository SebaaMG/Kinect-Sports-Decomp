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
extern int fn_83056070();
extern int fn_830560D0();


void fn_83050528(int *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  param_1[0x27] = (param_2 & 0xf) << 0x19 | param_1[0x27] & 0xe1ffffffU;
  if ((((uint)param_1[0x1d] >> 0x1b & 1) != 0) &&
     (cVar2 = (**(code **)(*param_1 + 4))(), cVar2 != '\0')) {
    if ((param_1[0x1d] & 0x2000000U) != 0) {
      return;
    }
    param_1[0x1d] = param_1[0x1d] | 0x2000000;
    fn_83056070(param_1[0x18]);
    return;
  }
  uVar1 = param_1[0x1d];
  if (param_2 == 2) {
    param_1[0x1d] = uVar1 | 0x1000000;
    if ((uVar1 & 0x2000000) == 0) {
      param_1[0x1d] = uVar1 | 0x3000000;
      fn_83056070(param_1[0x18]);
    }
  }
  else {
    param_1[0x1d] = uVar1 & 0xfeffffff;
    if ((uVar1 & 0x2000000) != 0) {
      param_1[0x1d] = uVar1 & 0xfcffffff;
      fn_830560D0(param_1[0x18]);
    }
  }
  return;
}

