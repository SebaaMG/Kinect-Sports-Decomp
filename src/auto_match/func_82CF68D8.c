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


void fn_82CF68D8(uint *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 uVar3;
  uint uVar2;
  uint *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar5;
  
  lVar1 = param_3 + 1;
  while( true ) {
    lVar1 = lVar1 + -1;
    uVar3 = (undefined1)param_2;
    if (lVar1 == 0 || ((uint)param_1 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(undefined1 *)param_1 = uVar3;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar2 = (param_2 & 0xff) << 8;
  uVar2 = (uVar2 | param_2 & 0xffff00ff) << 0x10 | uVar2 | param_2 & 0xff;
  for (uVar5 = (param_3 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    param_1 = param_1 + 4;
  }
  uVar5 = (param_3 & 0xffffffff) >> 2 & 3;
  puVar4 = param_1;
  if (uVar5 != 0) {
    *param_1 = uVar2;
    puVar4 = param_1 + 1;
    if (uVar5 != 1) {
      *puVar4 = uVar2;
      puVar4 = param_1 + 2;
      if (uVar5 != 2) {
        *puVar4 = uVar2;
        puVar4 = param_1 + 3;
      }
    }
  }
  param_3 = param_3 & 3;
  if (param_3 == 0) {
    return;
  }
  *(undefined1 *)puVar4 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_3 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_3 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = uVar3;
  return;
}

