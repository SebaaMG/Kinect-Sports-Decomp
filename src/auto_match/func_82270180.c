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
extern int fn_82270B70();


int fn_82270180(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = fn_82270B70();
  iVar2 = **(int **)(iVar4 + 0x5c);
  uVar1 = ((*(int **)(iVar4 + 0x5c))[1] - iVar2) / 0x30;
  if (param_1 < uVar1) {
    uVar5 = 0;
    uVar6 = 0;
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar4 + iVar2 + 0x24);
        if ((*(int *)(iVar3 + 0x54c) == 0) && (*(int *)(iVar3 + 0x548) == 0)) {
          if (uVar5 == param_1) {
            return iVar3;
          }
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x30;
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}

