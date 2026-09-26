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


void fn_82E69118(undefined4 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  
  *param_1 = param_2;
  uVar5 = 0x20 - param_3;
  param_1[2] = param_2;
  bVar1 = param_2[1];
  bVar2 = param_2[2];
  bVar3 = param_2[3];
  cVar4 = *param_2;
  param_1[1] = 0;
  param_1[4] = uVar5;
  param_1[3] = ((((int)cVar4 & 0xffffU) << 8 | (uint)bVar1) << 8 | (uint)bVar2) << 8 | (uint)bVar3;
  if (uVar5 == 0x20) {
    param_1[3] = 0;
    return;
  }
  param_1[3] = param_1[3] & -1 << (uVar5 & 0x3f);
  return;
}

