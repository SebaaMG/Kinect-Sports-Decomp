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
extern int fn_8266CB08();
extern int fn_828729F8();


uint * fn_8266E458(uint *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_828729F8(param_1,(int)(param_2[1] - *param_2) / 0xc);
  if (cVar2 != '\0') {
    uVar3 = (ulonglong)*param_2;
    uVar1 = param_2[1];
    uVar4 = (ulonglong)*param_1;
    if (uVar3 != uVar1) {
      do {
        if ((uVar4 & 0xffffffff) != 0) {
          fn_8266CB08(uVar4,uVar3);
        }
        uVar3 = uVar3 + 0xc;
        uVar4 = uVar4 + 0xc;
      } while ((uVar3 & 0xffffffff) != (ulonglong)uVar1);
    }
    param_1[1] = (uint)uVar4;
  }
  return param_1;
}

