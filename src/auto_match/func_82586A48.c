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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82586BD0();
extern int fn_82F65C10();
extern unsigned int uStack_28;


undefined4 fn_82586A48(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  undefined4 *apuStack_30 [2];
  undefined8 uStack_28;
  
  iVar4 = fn_82586BD0();
  uStack_28 = fn_82F65C10(param_1 & 0x7fffffff ^ 0x5eadbeef,0x1f31d);
  uVar7 = (uStack_28 & 0xffffffff) * 0x41a7 + (uStack_28 >> 0x20) * -0xb14;
  if ((longlong)uVar7 < 0) {
    uVar7 = uVar7 - 0x80000001;
  }
  uVar7 = *(uint *)(iVar4 + 0x20) & uVar7;
  if (*(uint *)(iVar4 + 0x24) <= uVar7) {
    uVar7 = (uVar7 - (*(uint *)(iVar4 + 0x20) >> 1)) - 1;
  }
  iVar3 = (int)((uVar7 & 0xffffffff) << 3);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  puVar2 = *(undefined4 **)(iVar3 + *(int *)(iVar4 + 0x10));
  apuStack_30[0] = puVar2;
  while( true ) {
    puVar6 = puVar1;
    if (puVar2 != puVar1) {
      puVar6 = (undefined4 *)**(undefined4 **)(iVar3 + *(int *)(iVar4 + 0x10) + 4);
    }
    puVar9 = puVar1;
    if (apuStack_30[0] == puVar6) goto LAB_82586b34;
    if ((int)param_1 <= (int)apuStack_30[0][2]) break;
    apuStack_30[0] = (undefined4 *)*apuStack_30[0];
  }
  if ((int)param_1 < (int)apuStack_30[0][2]) {
    uStack_28 = CONCAT44(puVar1,(undefined4)uStack_28);
    ppuVar8 = (undefined4 **)&uStack_28;
  }
  else {
    ppuVar8 = apuStack_30;
  }
  puVar9 = *ppuVar8;
LAB_82586b34:
  uVar5 = 0;
  if (puVar9 != puVar1) {
    uVar5 = puVar9[3];
  }
  return uVar5;
}

