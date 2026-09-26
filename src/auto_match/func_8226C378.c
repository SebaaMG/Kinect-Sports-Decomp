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


void fn_8226C378(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + param_2 * 0x14);
  iVar2 = *(int *)(param_1 + 0x54) + param_2 * 0x14;
  if (*(int *)(iVar2 + 4) < iVar1) {
    return;
  }
  iVar3 = *(int *)(iVar2 + 0xc);
  do {
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 <= iVar3) {
      do {
        iVar3 = *(int *)(param_1 + 0x48) * iVar5;
        iVar5 = iVar5 + 1;
        iVar3 = (iVar3 + iVar1) * 0xf0;
        iVar4 = *(int *)(param_1 + 0x40) + iVar3;
        *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) | 1 << (param_2 & 0x3f);
        iVar3 = *(int *)(param_1 + 0x40) + iVar3;
        *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0x7fffffff;
        iVar3 = *(int *)(iVar2 + 0xc);
      } while (iVar5 <= iVar3);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 <= *(int *)(iVar2 + 4));
  return;
}

