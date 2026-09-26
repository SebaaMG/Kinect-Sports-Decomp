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
extern int fn_82E2BBA0();
extern int fn_82E50338();


undefined8 fn_82E2BCF0(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  RtlEnterCriticalSection(param_1 + 8);
  uVar2 = fn_82E2BBA0(param_1,param_2);
  sVar1 = *param_3;
  if ((((sVar1 == 5) || (sVar1 == 0xd)) || (sVar1 == 0x13)) ||
     (((sVar1 == 0x15 || (sVar1 == 0x1f)) || ((sVar1 == 0x48 || (sVar1 == 0x1011)))))) {
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      uVar3 = fn_82E50338(uVar2,param_3);
    }
  }
  else {
    uVar3 = 0xffffffffc00d36bd;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar3;
}

