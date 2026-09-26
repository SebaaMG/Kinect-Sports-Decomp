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
extern unsigned int *auStack_50;
extern int fn_822D9E28();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;


void fn_822DCBC0(int param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uStack00000030;
  undefined8 auStack_50 [10];
  
  iVar7 = param_2;
  uStack00000030 = param_5;
  while( true ) {
    iVar6 = (iVar7 + 1U) * 2;
    if (param_3 <= iVar6) break;
    iVar2 = (iVar7 + 1U & 0x7fffffff) * 0x28 + param_1;
    cVar1 = fn_822D9E28(&stack0x00000030,iVar2,iVar2 + -0x14);
    if (cVar1 != '\0') {
      iVar6 = iVar6 + -1;
    }
    puVar3 = (undefined4 *)(iVar6 * 0x14 + param_1 + -4);
    puVar4 = (undefined4 *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
      iVar7 = iVar6;
    } while (lVar8 != 0);
  }
  auStack_50[0] = param_5;
  if (iVar6 == param_3) {
    puVar3 = (undefined4 *)(param_3 * 0x14 + param_1 + -0x18);
    puVar4 = (undefined4 *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar7 = param_3 + -1;
  }
  while( true ) {
    uVar5 = iVar7 - 1;
    iVar6 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    if (iVar7 <= param_2) break;
    iVar2 = iVar6 * 0x14 + param_1;
    cVar1 = fn_822D9E28(auStack_50,iVar2,param_4);
    if (cVar1 == '\0') break;
    puVar3 = (undefined4 *)(iVar2 + -4);
    puVar4 = (undefined4 *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
      iVar7 = iVar6;
    } while (lVar8 != 0);
  }
  puVar3 = (undefined4 *)(param_4 + -4);
  puVar4 = (undefined4 *)(iVar7 * 0x14 + param_1 + -4);
  lVar8 = 5;
  do {
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

