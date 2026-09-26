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
extern int fn_82F6E8D4();
extern int fn_82FFBD98();
extern int fn_8302B530();
extern int fn_8302B540();
extern int fn_8302B550();
extern int fn_8302B618();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FFCC78(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar2 = register0x0000000c;
  uVar8 = 0;
  lVar9 = 0;
  fn_8302B530();
  param_1 = param_1 + 0x39c;
  iVar3 = fn_8302B550(param_1);
  if (*(uint *)(iVar3 + 0x7c) != 0) {
    uVar7 = ((ulonglong)*(uint *)(iVar3 + 0x7c) & 0x3fffffff) * -4 & 0xfffffff0;
    piVar4 = (int *)fn_82F6E8D4();
    iVar3 = *piVar4;
    uVar6 = 0;
    lVar5 = (ZEXT48(&stack0x00000000) - 0x80) + uVar7;
    *(undefined4 *)lVar5 = *puVar2;
    lVar9 = lVar5 + 0x50;
    do {
      if (iVar3 != 0) {
        lVar5 = lVar5 + 0x4c;
        do {
          do {
            if (*(int *)(iVar3 + 0x4c) != 0) {
              uVar8 = uVar8 + 1;
              lVar5 = lVar5 + 4;
              *(undefined4 *)lVar5 = *(undefined4 *)(iVar3 + 4);
            }
            iVar3 = *(int *)(iVar3 + 8);
          } while (iVar3 != 0);
          do {
            uVar6 = uVar6 + 1;
            if (0x1e < uVar6) {
              if (iVar3 == 0) goto LAB_82ffcd54;
              break;
            }
            iVar3 = piVar4[uVar6];
          } while (iVar3 == 0);
        } while( true );
      }
      uVar6 = uVar6 + 1;
      if (0x1e < uVar6) break;
      iVar3 = piVar4[uVar6];
    } while( true );
  }
LAB_82ffcd54:
  fn_8302B540();
  if (0 < (int)uVar8) {
    lVar9 = ((ulonglong)uVar8 & 0x3fffffff) * 4 + lVar9;
    do {
      lVar9 = lVar9 + -4;
      uVar1 = *(undefined4 *)lVar9;
      uVar8 = uVar8 - 1;
      fn_8302B530();
      iVar3 = fn_8302B618(param_1,uVar1);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x4c) == 0)) {
        fn_8302B540();
      }
      else {
        fn_8302B540();
        iVar3 = fn_8302B618(param_1,uVar1);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x4c) != 0) {
            *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + -1;
          }
          fn_82FFBD98(iVar3,1);
        }
      }
    } while (0 < (int)uVar8);
  }
  return;
}

