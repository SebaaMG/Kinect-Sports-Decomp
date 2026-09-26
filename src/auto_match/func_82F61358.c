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
extern int fn_82F61230();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F61358(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  char in_RESERVE;
  byte bVar8;
  undefined4 *apuStack_30 [12];
  
  apuStack_30[0] = (undefined4 *)0x0;
  bVar2 = false;
  iVar4 = fn_82F61230(param_1 + 0x34,apuStack_30);
  puVar3 = apuStack_30[0];
  bVar8 = (iVar4 == 0) << 1;
  if ((iVar4 == 0) && (apuStack_30[0] != (undefined4 *)0x0)) {
    uVar5 = (*(code *)*apuStack_30[0])(apuStack_30[0][1],apuStack_30[0][2]);
    puVar3[3] = uVar5;
    do {
      puVar6 = (uint *)(param_1 + 0x2c);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,param_1 + 0x2c);
        *puVar6 = uVar1;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    bVar2 = true;
  }
  if ((!bVar2) || (uVar7 = 1, *(int *)((int)param_1 + 0x2c) < 1)) {
    uVar7 = 0;
  }
  return uVar7;
}

