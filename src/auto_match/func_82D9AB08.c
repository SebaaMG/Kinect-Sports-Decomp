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


void fn_82D9AB08(undefined8 param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  lVar1 = param_4 + 1;
  for (; lVar1 = lVar1 + -1, lVar1 != 0 && ((uint)param_3 & 3) != 0;
      param_3 = (undefined4 *)((int)param_3 + 1)) {
    param_4 = param_4 - 1;
    *(undefined1 *)param_3 = 0;
  }
  for (uVar3 = (param_4 & 0xffffffff) >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3 = param_3 + 4;
  }
  uVar3 = (param_4 & 0xffffffff) >> 2 & 3;
  puVar2 = param_3;
  if (uVar3 != 0) {
    *param_3 = 0;
    puVar2 = param_3 + 1;
    if (uVar3 != 1) {
      *puVar2 = 0;
      puVar2 = param_3 + 2;
      if (uVar3 != 2) {
        *puVar2 = 0;
        puVar2 = param_3 + 3;
      }
    }
  }
  param_4 = param_4 & 3;
  if (param_4 == 0) {
    return;
  }
  *(undefined1 *)puVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_4 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar2 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_4 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar2 + 2) = 0;
  return;
}

