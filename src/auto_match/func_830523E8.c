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
extern int fn_83051D60();


void fn_830523E8(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  RtlEnterCriticalSection(param_1 + -0x40);
  *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) & 0xf6ffffff | 0x8000000;
  cVar3 = *(char *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x24);
  while (cVar3 != '\0') {
    iVar2 = *(int *)(iVar1 + 0xc);
    cVar3 = *(char *)(param_1 + 0x30) + -1;
    *(char *)(param_1 + 0x30) = cVar3;
    *(int *)(param_1 + 0x20) = iVar2 + *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  fn_83051D60(param_1 + -0x78);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  RtlLeaveCriticalSection(param_1 + -0x40);
  return;
}

