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
extern int fn_826959C8();


void fn_827521A8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = 0;
  }
  bVar1 = *(byte *)(iVar3 + 0x3c);
  pbVar2 = *(byte **)(param_1 + 4);
  if (4 < *pbVar2) {
    fn_826959C8();
  }
  *(uint *)(pbVar2 + 8) = (uint)bVar1;
  *pbVar2 = 4;
  return;
}

