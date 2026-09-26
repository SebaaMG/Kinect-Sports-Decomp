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


void fn_829AF870(int *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if (*(char *)((int)param_1 + 9) != '\x10') {
    return;
  }
  lVar2 = (longlong)(int)(uint)*(byte *)((int)param_1 + 10) * (longlong)*param_1;
  if (lVar2 != 0) {
    puVar1 = (undefined1 *)(param_2 + -1);
    puVar3 = (undefined1 *)(param_2 + -2);
    do {
      puVar3 = puVar3 + 2;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined1 *)((int)param_1 + 9) = 8;
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
  param_1[1] = *param_1 * (uint)*(byte *)((int)param_1 + 10);
  return;
}

