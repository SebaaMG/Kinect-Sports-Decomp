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


uint fn_830379D8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + 4U & 0xfffffffc;
  RtlEnterCriticalSection(param_1 + 0xc);
  uVar1 = *param_1;
  if (param_1[1] < uVar1) {
    if ((int)(uVar1 - param_1[1]) < (int)uVar2) {
LAB_83037a70:
      RtlLeaveCriticalSection(param_1 + 0xc);
      return 0;
    }
  }
  else if ((int)(param_1[4] - param_1[1]) < (int)uVar2) {
    if (((uVar1 == param_1[1]) || (uVar1 != param_1[3])) &&
       ((int)uVar2 <= (int)(uVar1 - param_1[2]))) {
      return param_1[2];
    }
    goto LAB_83037a70;
  }
  return param_1[1];
}

