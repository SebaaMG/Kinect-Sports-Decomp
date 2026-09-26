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
extern int fn_828A0108();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern U64 storeWordConditionalIndexed();


void fn_828A0198(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar4;
  longlong lVar3;
  uint *puVar5;
  char in_RESERVE;
  uint uStack_20;
  uint uStack_1c;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  uStack_20 = *(uint *)(param_1 + 0x58);
  if (uStack_20 == uVar2) {
    uStack_20 = uStack_20 + 1;
    if (uVar2 < uStack_20) {
      uStack_1c = uVar2 << 2;
      puVar5 = &uStack_20;
      if (uStack_20 <= uVar2 << 2) {
        puVar5 = &uStack_1c;
      }
      fn_828A0108(param_1,*puVar5);
    }
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 8);
    bVar1 = puVar4 == (undefined4 *)0x0;
    if (!bVar1) {
      *puVar4 = *param_2;
      uVar2 = param_2[1];
      puVar4[1] = uVar2;
      if ((ulonglong)uVar2 != 0) {
        lVar3 = (ulonglong)uVar2 + 4;
        do {
          puVar5 = (uint *)lVar3;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar3);
            *puVar5 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(uStack_20 * 8 + *(int *)(param_1 + 0x54));
    bVar1 = puVar4 == (undefined4 *)0x0;
    if (!bVar1) {
      *puVar4 = *param_2;
      uVar2 = param_2[1];
      puVar4[1] = uVar2;
      if ((ulonglong)uVar2 != 0) {
        lVar3 = (ulonglong)uVar2 + 4;
        do {
          puVar5 = (uint *)lVar3;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar3);
            *puVar5 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return;
}

