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


undefined8 fn_829A1750(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_2 + 0x6e);
  cVar2 = *(char *)(param_2 + 0x6f);
  *param_3 = (uint)bVar1;
  if (cVar2 == '\x01') {
    if (*(uint *)(param_1 + 0x28) <= (uint)bVar1) {
      return 0xffffffff80004005;
    }
    uVar3 = 1;
  }
  else {
    if (cVar2 != '\x03') {
      return 0xffffffff80004005;
    }
    if (*(uint *)(param_1 + 0x3c) <= (uint)bVar1) {
      return 0xffffffff80004005;
    }
    uVar3 = 3;
  }
  *param_4 = uVar3;
  return 0;
}

