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
extern unsigned int *auStack_1820;
extern unsigned int *auStack_1e20;
extern unsigned int *auStack_1f20;
extern int fn_82A5D160();
extern int fn_83142F5C();
extern unsigned int uStack_1f1c;
extern U64 storeDoubleWordConditionalIndexed();


void fn_82A5D578(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_1f20 [4];
  undefined4 uStack_1f1c;
  undefined1 auStack_1e20 [1536];
  undefined1 auStack_1820 [6176];
  
  uVar2 = *param_1;
  lVar8 = (ulonglong)uVar2 + 0x38;
  if (0 < *(longlong *)(uVar2 + 0x38)) {
    KeSetEvent(*(undefined4 *)(uVar2 + 0x28),1,0);
  }
  uStack_1f1c = *(undefined4 *)(uVar2 + 0x2c);
  iVar3 = KeWaitForMultipleObjects(2,auStack_1f20,1,3,1,0,0,auStack_1e20);
  if (iVar3 == 1) {
    puVar6 = *(undefined4 **)(uVar2 + 0x18);
    puVar7 = auStack_1820;
    lVar5 = 0x100;
    do {
      puVar4 = (undefined4 *)(puVar7 + -0x400);
      lVar10 = 6;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 0x100;
        *puVar4 = uVar1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 4;
    } while (lVar5 != 0);
    fn_82A5D160((ulonglong)uVar2,auStack_1820);
    fn_83142F5C(*(undefined4 *)(uVar2 + 0x20),auStack_1820);
    plVar9 = (longlong *)lVar8;
    lVar8 = storeDoubleWordConditionalIndexed(*plVar9 + 1,0,lVar8);
    *plVar9 = lVar8;
  }
  return;
}

