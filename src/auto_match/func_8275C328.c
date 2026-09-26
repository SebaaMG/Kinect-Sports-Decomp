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
extern int fn_8267BE38();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826DB990();
extern int fn_8274A8E0();
extern int fn_8275C268();
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern U64 storeWordConditionalIndexed();


void fn_8275C328(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  char in_RESERVE;
  byte bVar13;
  undefined4 *puStack_40;
  uint uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  
  uVar5 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  if ((uVar5 & 0xffffffff) == 0) {
    return;
  }
  lVar6 = fn_8274A8E0(uVar5 + 8);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff8201477c);
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_40,uVar7,uVar2,0xffffffffffffffff,0);
  iVar12 = *(int *)(param_1 + 8) + -0x10;
  if (*(int *)(param_1 + 8) == 0) {
    iVar12 = 0;
  }
  uVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x48))();
  bVar13 = (uVar5 == 0) << 1;
  if (uVar5 != 0) {
    fn_8267C4C8(uVar5);
  }
  if (iVar12 == 0) {
LAB_8275c534:
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275c544;
  }
  else {
    if ((uVar5 & 0xffffffff) == 0) goto LAB_8275c544;
    piStack_38 = (int *)0x0;
    uStack_34 = 0;
    fn_8268C510(&uStack_3c,*puStack_40);
    cVar8 = fn_826DB990(uVar5,&piStack_38,&uStack_3c);
    lVar10 = ((ulonglong)uStack_3c & 0xfffffffc) + 4;
    do {
      puVar11 = (uint *)lVar10;
      uVar9 = (ulonglong)*puVar11;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar9 - 1,0,lVar10);
        *puVar11 = uVar3;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
    if (uVar9 == 1) {
      fn_8267BE38();
    }
    if ((cVar8 != '\0') &&
       (uVar9 = (**(code **)(*piStack_38 + 8))(), piVar4 = piStack_38, (uVar9 & 0xff00) == 0x400)) {
      if (piStack_38 != (int *)0x0) {
        lVar6 = (**(code **)(*(int *)piStack_38[3] + 0xc))((int *)piStack_38[3],lVar6);
        bVar1 = lVar6 == 0;
        if (!bVar1) {
          do {
            puVar11 = (uint *)(lVar6 + 4);
            if (in_RESERVE != '\0') {
              uVar3 = storeWordConditionalIndexed((ulonglong)*puVar11 + 1,0,lVar6 + 4);
              *puVar11 = uVar3;
              bVar1 = true;
            }
          } while (!bVar1);
        }
        if (*(int *)(iVar12 + 0x30) != 0) {
          fn_8275C268();
        }
        *(int *)(iVar12 + 0x30) = (int)lVar6;
        fn_8267C4C8(piVar4);
        if (*(int *)(iVar12 + 0x34) != 0) {
          fn_82687270();
        }
        *(int **)(iVar12 + 0x34) = piVar4;
        if (piStack_38 != (int *)0x0) {
          fn_82687270();
        }
      }
      goto LAB_8275c534;
    }
    if (piStack_38 != (int *)0x0) {
      fn_82687270();
    }
  }
  fn_82687270(uVar5);
LAB_8275c544:
  uVar3 = puStack_40[2];
  puStack_40[2] = (int)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    fn_826944C8(puStack_40);
  }
  return;
}

