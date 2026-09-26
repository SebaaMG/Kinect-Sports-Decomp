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


void fn_826C2F38(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *(byte **)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
  if (4 < *pbVar1) {
    fn_826959C8();
  }
  *pbVar1 = 5;
  iVar2 = *(int *)(iVar2 + 0x148);
  *(int *)(pbVar1 + 4) = iVar2;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return;
}

