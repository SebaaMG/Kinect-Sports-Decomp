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
extern int fn_8269AE08();


void fn_826C66D0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar1 = fn_8269AE08();
  if (*(int *)(iVar1 + 0x70) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x74) = *(undefined4 *)(iVar1 + 0x74);
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    if (*(int *)(iVar2 + 0xaf4) == iVar1) {
      *(undefined4 *)(iVar2 + 0xaf4) = *(undefined4 *)(iVar1 + 0x70);
    }
  }
  else {
    *(undefined4 *)(*(int *)(iVar1 + 0x74) + 0x70) = *(undefined4 *)(iVar1 + 0x70);
  }
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
  return;
}

