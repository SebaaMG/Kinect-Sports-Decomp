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


void fn_82671700(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = param_3;
  if (param_3 == param_4) {
    return;
  }
  puVar3 = *(undefined4 **)(param_2 + 4);
  puVar4 = param_3;
  if (param_4 != puVar3) {
    puVar2 = param_4;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 2;
      *puVar4 = uVar1;
      puVar4[1] = *(undefined4 *)((int)puVar4 + (int)param_4 + (4 - (int)param_3));
      puVar4 = puVar4 + 2;
    } while (puVar2 != puVar3);
  }
  for (puVar3 = puVar4; puVar3 != *(undefined4 **)(param_2 + 4); puVar3 = puVar3 + 2) {
  }
  *(undefined4 **)(param_2 + 4) = puVar4;
  return;
}

