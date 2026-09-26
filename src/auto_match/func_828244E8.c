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


longlong fn_828244E8(int param_1,int param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    pbVar2 = *(byte **)(**(int **)(*(int *)(param_2 + 0x10) + 0x3bc) + *(int *)(param_2 + 0x14) * 4)
    ;
    pbVar3 = *(byte **)(**(int **)(*(int *)(param_1 + 0x10) + 0x3bc) + *(int *)(param_1 + 0x14) * 4)
    ;
    do {
      lVar1 = (ulonglong)*pbVar3 - (ulonglong)*pbVar2;
      if (*pbVar3 == 0) {
        return lVar1;
      }
      pbVar3 = pbVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while ((int)lVar1 == 0);
    return lVar1;
  }
  return 1;
}

