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
extern int fn_82883298();


void fn_82883C18(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar3 = true, param_2 < *param_1)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_82883298(param_1,1);
    }
    if (param_1[1] != 0) {
      puVar4 = (undefined1 *)(param_1[1] - 1);
      puVar5 = (undefined1 *)(((int)(param_2 - uVar2) >> 3) * 8 + *param_1 + -1);
      lVar6 = 8;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      fn_82883298(param_1,1);
    }
    if (param_1[1] != 0) {
      puVar5 = (undefined1 *)(param_2 - 1);
      puVar4 = (undefined1 *)(param_1[1] - 1);
      lVar6 = 8;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  param_1[1] = param_1[1] + 8;
  return;
}

