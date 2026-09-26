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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_50;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


longlong fn_82D20448(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  int iStack_68;
  int iStack_64;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  lVar11 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[0xc] = 0xffffffff;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  iStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0x80000000;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      iVar5 = fn_82CE5410();
      uStack_4c = 0;
      if ((uStack_48 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),iStack_50,uStack_48 & 0x3fffffff,8);
      }
      return lVar11;
    }
    if (puVar1[0xc] == -1) {
      uStack_4c = 0;
      iVar5 = fn_82CE5410();
      if (uStack_4c == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),&iStack_50,8);
      }
      plVar8 = (longlong *)(uStack_4c * 8 + iStack_50);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = ZEXT48(puVar1) << 0x20;
      }
      uStack_4c = uStack_4c + 1;
      iVar5 = fn_82CE5410();
      if (uStack_4c == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),&iStack_50,8);
      }
      puVar9 = (undefined8 *)(uStack_4c * 8 + iStack_50);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = CONCAT44(puVar1,1);
      }
      uStack_4c = uStack_4c + 1;
      iVar5 = fn_82CE5410();
      if (uStack_4c == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),&iStack_50,8);
      }
      puVar9 = (undefined8 *)(uStack_4c * 8 + iStack_50);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = CONCAT44(puVar1,2);
      }
      uStack_4c = uStack_4c + 1;
      uVar12 = (undefined4)lVar11;
      puVar1[0xc] = uVar12;
      lVar11 = lVar11 + 1;
      do {
        iVar5 = uStack_4c * 8;
        uStack_4c = uStack_4c - 1;
        uVar7 = *(undefined8 *)(iVar5 + iStack_50 + -8);
        iStack_68 = (int)((ulonglong)uVar7 >> 0x20);
        iStack_64 = (int)uVar7;
        uVar2 = *(uint *)((iStack_64 + 5) * 4 + iStack_68);
        uVar3 = uVar2 & 0xfffffffc;
        uVar4 = uVar2 & 3;
        if ((uVar3 != 0) && (*(int *)(uVar3 + 0x30) == -1)) {
          *(undefined4 *)(uVar3 + 0x30) = uVar12;
          iVar5 = fn_82CE5410();
          if (uStack_4c == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),&iStack_50,8);
          }
          puVar10 = (ulonglong *)(uStack_4c * 8 + iStack_50);
          if (puVar10 != (ulonglong *)0x0) {
            *puVar10 = CONCAT44(uVar2,-(uint)(uVar4 != 2) & uVar4 + 1) & 0xfffffffcffffffff;
          }
          uStack_4c = uStack_4c + 1;
          iVar5 = 2;
          if ((uVar2 & 3) != 0) {
            iVar5 = uVar4 - 1;
          }
          iVar6 = fn_82CE5410();
          if (uStack_4c == (uStack_48 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),&iStack_50,8);
          }
          puVar10 = (ulonglong *)(uStack_4c * 8 + iStack_50);
          if (puVar10 != (ulonglong *)0x0) {
            *puVar10 = CONCAT44(uVar2,iVar5) & 0xfffffffcffffffff;
          }
          uStack_4c = uStack_4c + 1;
        }
      } while (uStack_4c != 0);
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

