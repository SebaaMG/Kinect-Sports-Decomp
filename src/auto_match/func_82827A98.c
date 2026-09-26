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


void fn_82827A98(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar5;
  
  uVar3 = 8;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  lVar1 = 9;
  for (puVar2 = (undefined4 *)(param_1 + 0x18); lVar1 = lVar1 + -1,
      lVar1 != 0 && ((uint)puVar2 & 3) != 0; puVar2 = (undefined4 *)((int)puVar2 + 1)) {
    uVar3 = uVar3 - 1;
    *(undefined1 *)puVar2 = 0;
  }
  for (uVar5 = (uVar3 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  uVar5 = (uVar3 & 0xffffffff) >> 2 & 3;
  puVar4 = puVar2;
  if (uVar5 != 0) {
    *puVar2 = 0;
    puVar4 = puVar2 + 1;
    if (uVar5 != 1) {
      *puVar4 = 0;
      puVar4 = puVar2 + 2;
      if (uVar5 != 2) {
        *puVar4 = 0;
        puVar4 = puVar2 + 3;
      }
    }
  }
  uVar3 = uVar3 & 3;
  if (uVar3 == 0) {
    return;
  }
  *(undefined1 *)puVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar3 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar3 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined1 *)((int)puVar4 + 2) = 0;
  return;
}

