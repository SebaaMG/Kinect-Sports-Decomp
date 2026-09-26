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


void fn_82D04710(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  lVar1 = (ulonglong)(uint)param_1[1] - 1;
  lVar4 = 0x7fffffff;
  if ((int)lVar1 < 0x7fffffff) {
    lVar4 = lVar1;
  }
  lVar4 = lVar4 + -1;
  if (-1 < lVar4) {
    do {
      if (*(char *)(*param_1 + (int)lVar4) == '/') goto code_r0x82d04754;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = -1;
code_r0x82d04754:
  lVar2 = 0x7fffffff;
  if ((int)lVar1 < 0x7fffffff) {
    lVar2 = lVar1;
  }
  lVar2 = lVar2 + -1;
  if (-1 < lVar2) {
    do {
      if (*(char *)(*param_1 + (int)lVar2) == '\\') goto code_r0x82d04788;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  lVar2 = -1;
code_r0x82d04788:
  if ((int)lVar2 <= (int)lVar4) {
    lVar2 = lVar4;
  }
  if ((int)lVar2 < 0) {
    return;
  }
  lVar2 = lVar2 + 1;
  if (lVar2 < 1) {
    return;
  }
  puVar3 = (undefined1 *)*param_1;
  lVar4 = (ulonglong)(uint)param_1[1] - lVar2;
  param_1[1] = (int)lVar4;
  if (0 < (int)lVar4) {
    do {
      *puVar3 = puVar3[(int)lVar2];
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  return;
}

