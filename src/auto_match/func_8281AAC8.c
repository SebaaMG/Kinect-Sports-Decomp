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


short fn_8281AAC8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_1 + 0x108);
  sVar3 = sVar1;
  if (sVar1 == -1) {
    sVar1 = *(short *)(param_1 + 0x84);
    sVar3 = sVar1;
  }
  while (sVar2 = sVar3, sVar2 != -1) {
    sVar1 = sVar2;
    sVar3 = *(short *)(sVar2 * 0x40 + param_2 + 0x2c);
  }
  return sVar1;
}

