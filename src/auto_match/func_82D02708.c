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


undefined8 fn_82D02708(char *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*param_1 != '\0') && (param_1[8] != '\0')) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (0x32 < (int)uVar1) {
    uVar2 = (longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f);
    uVar2 = (uVar2 & 0xffffffff) + ((uVar2 & 0xffffffff) >> 0x1f);
    if ((((ulonglong)uVar1 == uVar2 + (uVar2 & 0x7fffffff) * 2) && (param_1[8] != '\0')) &&
       (param_1[param_2 + 9] == '\0')) {
      param_1[param_2 + 9] = '\x01';
      *param_1 = '\x01';
      return 0;
    }
  }
  return 1;
}

