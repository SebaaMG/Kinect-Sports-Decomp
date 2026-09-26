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
extern unsigned int *auStack_40;
extern int fn_82813428();
extern int fn_82813680();
extern int fn_82813720();
extern int fn_82813AE0();
extern int fn_82813CB8();
extern unsigned int iStack_28;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82813ED8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  int iStack_28;
  undefined8 *puStack_24;
  
  do {
    cVar4 = fn_82813AE0(param_1,auStack_40);
    bVar1 = cVar4 == '\0';
  } while (!bVar1);
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x20) + 0xc;
  do {
    puVar6 = (uint *)lVar5;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5);
      *puVar6 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  fn_82813680(param_1);
  fn_82813720(param_1);
  lVar5 = fn_82813CB8(param_1,0x10);
  bVar1 = lVar5 == 0;
  iVar3 = (int)lVar5;
  if (!bVar1) {
    *(undefined4 *)(iVar3 + 8) = 0;
    do {
      puVar6 = (uint *)(lVar5 + 0xc);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5 + 0xc);
        *puVar6 = uVar2;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  iStack_28 = iVar3;
  puStack_24 = (undefined8 *)(param_1 + 0x20);
  fn_82813428(&uStack_30);
  puStack_24 = (undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  iStack_28 = iVar3;
  fn_82813428(&uStack_30);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    sync(1);
  }
  return;
}

