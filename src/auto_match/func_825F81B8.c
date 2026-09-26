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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82535298();
extern int fn_82536CC8();
extern int fn_825F8620();
extern int fn_825F87C0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_8327F874;


void fn_825F81B8(int param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar5;
  ulonglong uVar3;
  uint uVar4;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  uint auStack_a0 [4];
  undefined1 auStack_90 [144];
  
  puVar1 = *(uint **)(param_1 + 0x858);
  uVar11 = ZEXT48(puVar1);
  auStack_a0[0] = 0;
  bVar6 = false;
  lVar8 = (ulonglong)puVar1[0x8b] - 1;
  if (-1 < lVar8) {
    lVar9 = ((ulonglong)puVar1[0x8b] + 0x84 & 0x3fffffff) * 4 + uVar11;
    do {
      piVar10 = (int *)lVar9;
      iVar7 = *piVar10;
      if (*(char *)((int)puVar1 + iVar7 * 0x2c + 0x29) != '\0') {
        if (*(char *)((int)puVar1 + iVar7 * 0x2c + 0x2e) == '\0') {
          if ((int *)puVar1[iVar7 * 0xb + 2] == (int *)0x0) {
            cVar5 = '\x01';
          }
          else {
            cVar5 = (**(code **)(*(int *)puVar1[iVar7 * 0xb + 2] + 4))();
          }
          if (cVar5 == '\0') {
            cVar5 = fn_825F87C0(param_1,uVar11,*piVar10);
            if (cVar5 != '\0') goto LAB_825f8268;
          }
          *(undefined1 *)((int)puVar1 + *piVar10 * 0x2c + 0x29) = 0;
        }
      }
LAB_825f8268:
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + -4;
    } while (-1 < lVar8);
  }
  lVar8 = (ulonglong)puVar1[0x92] - 1;
  if (-1 < lVar8) {
    lVar9 = ((ulonglong)puVar1[0x92] + 0x8b & 0x3fffffff) * 4 + uVar11;
    do {
      piVar10 = (int *)lVar9;
      iVar7 = *piVar10;
      if (*(char *)((int)puVar1 + iVar7 * 0x2c + 0x29) != '\0') {
        if (*(char *)((int)puVar1 + iVar7 * 0x2c + 0x2e) == '\0') {
          if ((int *)puVar1[iVar7 * 0xb + 2] == (int *)0x0) {
            cVar5 = '\x01';
          }
          else {
            cVar5 = (**(code **)(*(int *)puVar1[iVar7 * 0xb + 2] + 4))();
          }
          if (cVar5 == '\0') {
            cVar5 = fn_825F87C0(param_1,uVar11,*piVar10);
            if (cVar5 != '\0') goto LAB_825f8304;
          }
          *(undefined1 *)((int)puVar1 + *piVar10 * 0x2c + 0x29) = 0;
        }
      }
LAB_825f8304:
      lVar8 = lVar8 + -1;
      lVar9 = lVar9 + -4;
    } while (-1 < lVar8);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar7 = 0;
    if (0 < (int)puVar1[0x9f]) {
      lVar8 = uVar11 + 0x24c;
      do {
        iVar2 = *(int *)lVar8;
        if (*(char *)((int)puVar1 + iVar2 * 0x2c + 0x2f) == '\0') {
          uVar3 = (ulonglong)*puVar1;
        }
        else {
          bVar6 = true;
          if (lbl_8327F874 == 0) {
            lbl_8327F874 = fn_82536CC8();
          }
          fn_82864988(auStack_90,0xffffffff821bc014);
          uVar3 = fn_828647D8(auStack_90);
        }
        if (bVar6) {
          bVar6 = false;
          fn_82864898(auStack_90);
        }
        if (puVar1[iVar2 * 0xb + 3] == 0) {
          auStack_a0[0] = puVar1[iVar2 * 0xb + 1];
          uVar4 = fn_82535298(auStack_a0,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
          puVar1[iVar2 * 0xb + 2] = uVar4;
        }
        else {
          fn_825F8620(param_1,uVar11,*(int *)lVar8);
        }
        iVar7 = iVar7 + 1;
        *(undefined1 *)((int)puVar1 + iVar2 * 0x2c + 0x29) = 1;
        lVar8 = lVar8 + 4;
      } while (iVar7 < (int)puVar1[0x9f]);
    }
    puVar1[0x9f] = 0;
  }
  return;
}

