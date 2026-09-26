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


bool fn_82AE9578(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 + 4);
  while (iVar1 = *piVar4, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 != 0) {
      if (((*(byte *)(iVar2 + 0x10) & 1) == 0) && (iVar2 != param_3)) {
        if ((*(int *)(iVar2 + 0x1c) == 0) ||
           ((*(int *)(iVar2 + 0x1c) == *(int *)(param_2 + 0x1c) &&
            ((*(uint *)(iVar2 + 8) & 0x3f80) != 0x3800)))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) break;
      }
    }
    piVar4 = (int *)(iVar1 + 8);
  }
  return iVar1 == 0;
}

