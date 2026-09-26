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
extern int fn_83060438();


longlong fn_83060D30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    param_1 = fn_83060438();
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0;
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 8) - iVar1 >> 3;
  if (0 < iVar2) {
    do {
      iVar3 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 1;
      if (iVar2 <= iVar6) {
        return lVar4;
      }
      iVar5 = iVar6 * 8;
      do {
        if (**(int **)(iVar5 + iVar1) != **(int **)(iVar3 + iVar1)) break;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar6 < iVar2);
    } while (iVar6 < iVar2);
  }
  return lVar4;
}

