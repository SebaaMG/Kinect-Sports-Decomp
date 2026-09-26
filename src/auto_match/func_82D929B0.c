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
extern unsigned int *auStack_100;
extern unsigned int *auStack_94;
extern unsigned int *auStack_e4;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D7D9D8();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D85148();
extern int fn_82D8A4F0();
extern int fn_82D8EC40();
extern int fn_82D8F080();
extern int fn_82D8F4C8();
extern int fn_82D8F620();
extern int fn_82D8F6B0();
extern int fn_82D901D0();
extern int fn_82D909F0();
extern int fn_82D914D8();
extern int fn_82D916B8();
extern int fn_82DA4850();
extern int fn_82DAEEF8();
extern int fn_82DBC148();
extern int fn_83081390();
extern int fn_83089DD8();
extern int fn_83089E78();
extern unsigned int iStack00000014;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int iStack_ec;
extern unsigned int stack0x00000014;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_120;
extern unsigned int uStack_12f;
extern unsigned int uStack_130;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_e8;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D929B0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack00000014;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  int iStack_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_110;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [16];
  undefined1 *puStack_f0;
  int iStack_ec;
  uint uStack_e8;
  undefined1 auStack_e4 [68];
  undefined1 *puStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined1 auStack_94 [148];
  
  bVar1 = *(byte *)(param_1 + 0xe8);
  uVar7 = (uint)param_2;
  if (bVar1 != uVar7) {
    iStack00000014 = param_1;
    if (bVar1 == 5) {
      fn_83089DD8(param_1 + 0x10);
      fn_82D8A4F0(iStack00000014);
    }
    if ((uVar7 == 5) || (bVar4 = true, uVar7 == 4)) {
      bVar4 = false;
    }
    if ((bVar1 == 5) || (bVar3 = true, bVar1 == 4)) {
      bVar3 = false;
    }
    if (((!bVar4) || (bVar3)) || (*(int *)(iStack00000014 + 0x1f8) != 0)) {
      fn_82CE4040();
      iVar6 = *(int *)(iStack00000014 + 8);
      if ((iVar6 == 0) || ((uint)LZCOUNT(bVar1 - 5) >> 5 == (uint)LZCOUNT(uVar7 - 5) >> 5)) {
        fn_82D8F080(iStack00000014,param_2,bVar4,uStack_12f,iVar6);
        if (iVar6 != 0) {
          fn_82D85148(iVar6,iStack00000014,param_4,1);
        }
        fn_82CE4118(iStack00000014);
      }
      else {
        iStack_ec = 0;
        uStack_9c = 0;
        puStack_f0 = auStack_e4;
        uStack_108 = 0;
        puStack_a0 = auStack_94;
        puStack_10c = auStack_100;
        uStack_e8 = 0x80000010;
        uStack_98 = 0x80000010;
        uStack_104 = 0x80000001;
        uStack_110 = 0x200;
        *(undefined1 *)(iVar6 + 0x9c) = 1;
        *(undefined1 *)(iVar6 + 0x9d) = 0;
        fn_82D901D0(iStack00000014,&puStack_f0);
        if (uVar7 == 5) {
          fn_82D914D8(iVar6,iStack00000014,&puStack_a0);
        }
        else {
          fn_82D8F6B0();
        }
        fn_82D8EC40((ulonglong)*(uint *)(iStack00000014 + 0xcc) + 0x58,iStack00000014,&uStack_110,
                      param_2);
        if ((bVar1 != 5) && (iVar10 = *(int *)(iStack00000014 + 0xcc), 2 < *(int *)(iVar10 + 0x4c)))
        {
          *(byte *)(iVar10 + 0x25) = *(byte *)(iVar10 + 0x25) & 0x3f | 0x40;
        }
        fn_82D8F620(iVar6,iStack00000014);
        fn_82D8F080(iStack00000014,param_2,bVar4,uStack_130,iVar6);
        fn_82D8F4C8(iVar6,iStack00000014,param_3);
        fn_82D916B8(iVar6,iStack00000014,&puStack_a0);
        *(undefined1 *)(iVar6 + 0x9d) = 1;
        iVar10 = 0;
        iStack_128 = 0;
        iStack_124 = 0;
        uStack_120 = 0x80000000;
        if (0 < iStack_ec) {
          iVar11 = 0;
          do {
            uVar2 = *(undefined4 *)(puStack_f0 + iVar11);
            *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + 1;
            fn_82DBC148(iVar6,uVar2);
            lVar8 = (ulonglong)*(uint *)(iVar6 + 0x94) - 1;
            *(int *)(iVar6 + 0x94) = (int)lVar8;
            if ((lVar8 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
              if (*(int *)(iVar6 + 0x8c) != 0) {
                fn_82D80C18(iVar6);
              }
              if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
                fn_82D80C30(iVar6);
              }
            }
            fn_82CE4118(uVar2);
            iVar10 = iVar10 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar10 < iStack_ec);
        }
        iVar10 = iStack00000014;
        if (uVar7 != 5) {
          fn_83089E78(iStack00000014 + 0x10,&iStack_128);
          iVar11 = 0;
          iVar10 = iStack00000014;
          if (0 < iStack_124) {
            iVar12 = 0;
            iVar9 = iStack_128;
            do {
              iVar9 = (int)*(char *)(*(int *)(iVar9 + 4) + 0x10) + *(int *)(iVar9 + 4);
              if (((*(char *)(iVar10 + 0xe8) != '\x05') && (*(char *)(iVar9 + 0xe8) != '\x05')) &&
                 (*(int *)(iVar10 + 0xcc) != *(int *)(iVar9 + 0xcc))) {
                fn_82D909F0(*(undefined4 *)(iVar10 + 8));
                iVar10 = iStack00000014;
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + 8;
              iVar9 = iStack_128 + iVar12;
            } while (iVar11 < iStack_124);
          }
        }
        uVar5 = fn_82D7D9D8((ulonglong)*(uint *)(iVar10 + 0xcc) + 0x58,&uStack_110);
        if (uVar7 == 5) {
          fn_83081390((double)*(float *)(iVar6 + 0x1d0),uVar5,iStack00000014 + 0xf0);
          *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + 1;
          (**(code **)(**(int **)(iVar6 + 8) + 0x20))
                    (*(int **)(iVar6 + 8),&stack0x00000014,1,iVar6,7);
          fn_82DA4850(&stack0x00000014,1,iVar6);
          fn_82DAEEF8(*(undefined4 *)(iStack00000014 + 8));
          *(int *)(iVar6 + 0x94) = *(int *)(iVar6 + 0x94) + -1;
        }
        fn_82D85148(iVar6,iStack00000014,param_4,1);
        *(undefined1 *)(iVar6 + 0x9c) = 0;
        if (*(int *)(iVar6 + 0x94) == 0) {
          if (*(int *)(iVar6 + 0x8c) != 0) {
            fn_82D80C18(iVar6);
          }
          if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
            fn_82D80C30(iVar6);
          }
        }
        iVar6 = fn_82CE5410();
        iStack_124 = 0;
        if ((uStack_120 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),iStack_128,uStack_120 & 0x3fffffff,8);
        }
        iStack_128 = 0;
        uStack_120 = 0x80000000;
        iVar6 = fn_82CE5410();
        uStack_108 = 0;
        if ((uStack_104 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_10c,uStack_104 & 0x3fffffff,4);
        }
        puStack_10c = (undefined1 *)0x0;
        uStack_104 = 0x80000000;
        iVar6 = fn_82CE5410();
        uStack_9c = 0;
        if ((uStack_98 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
        }
        puStack_a0 = (undefined1 *)0x0;
        uStack_98 = 0x80000000;
        iVar6 = fn_82CE5410();
        iStack_ec = 0;
        if ((uStack_e8 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                    (*(int **)(iVar6 + 0x10),puStack_f0,uStack_e8 & 0x3fffffff,4);
        }
        puStack_f0 = (undefined1 *)0x0;
        uStack_e8 = 0x80000000;
        fn_82CE4118(iStack00000014);
      }
    }
  }
  return;
}

