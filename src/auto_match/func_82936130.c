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


ulonglong fn_82936130(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x38) + -0x7cea5368);
  uVar2 = *(uint *)(*(int *)((param_2 + 0x18) * 4 + param_1) + 0x24);
  if (cVar1 == '\x01') {
    return ((ulonglong)uVar2 & 3) * 0x55;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x04') {
      return (ulonglong)uVar2;
    }
    uVar4 = 0;
    uVar5 = 0;
    iVar3 = *(int *)((param_2 + 0x19) * 4 + param_1);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x10) == 0) {
        uVar5 = (ulonglong)*(uint *)(iVar3 + 0x18);
      }
      uVar4 = (ulonglong)*(uint *)(iVar3 + 0x24) & 3;
    }
    return (((ulonglong)uVar2 & 3) << 2 | (uVar5 >> 4) - 2 & 3) << 4 |
           (uVar5 & 0xfffffffc) + 4 & 0xf | uVar4;
  }
  return ((ulonglong)(uVar2 >> 2) & 3) * 0x15 | ((ulonglong)uVar2 & 3) << 6;
}

