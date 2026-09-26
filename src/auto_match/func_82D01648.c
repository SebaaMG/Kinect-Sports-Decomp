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


longlong fn_82D01648(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar4 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    lVar4 = lVar4 + 1;
  }
  piVar2 = (int *)param_1[4];
  trapWord(6,(ulonglong)(uint)param_1[1],0);
  lVar4 = ((ulonglong)(uint)param_1[9] - (ulonglong)(uint)param_1[8] & 0xffffffff) /
          (ulonglong)(uint)param_1[1] + lVar4;
  if (piVar2 != (int *)0x0) {
    do {
      puVar3 = (uint *)(piVar2 + 3);
      piVar2 = (int *)*piVar2;
      lVar4 = (ulonglong)*puVar3 + lVar4;
    } while (piVar2 != (int *)0x0);
    return lVar4;
  }
  return lVar4;
}

