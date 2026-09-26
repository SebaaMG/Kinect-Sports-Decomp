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
extern unsigned int *auStack_48;
extern int fn_82E826C8();
extern int fn_82E8D470();
extern int fn_82E8D6A0();
extern int fn_82E8E390();
extern int fn_82E8ECF8();
extern int fn_82E8EF60();
extern int fn_82E8FE90();
extern int fn_82EFE758();
extern int fn_82EFEBA0();
extern int fn_82F000C0();
extern int fn_82F180E0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_82E90418(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar8;
  ulonglong uVar7;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  uVar1 = *(undefined4 *)(param_1 + 0x2a4);
  uVar2 = *(undefined4 *)(param_1 + 0x590);
  iStack_50 = 0;
  iVar3 = fn_82E8D6A0();
  if ((*(int *)(iVar3 + 0x1f58) == 0) || (*(int *)(iVar3 + 0xaf0) != 2)) {
    if (*(int *)(param_1 + 0xaf0) == 1) {
      fn_82EFEBA0(param_1);
    }
    else if (*(int *)(param_1 + 0xaf0) == 2) {
      fn_82EFE758(param_1);
    }
    if ((((*(int *)(param_1 + 0xaf4) == 0) || (*(int *)(param_1 + 0xaf4) == 1)) ||
        (*(int *)(param_1 + 0xaf8) == 0)) || (*(int *)(param_1 + 0xaf8) == 1)) {
      *(undefined4 *)(param_1 + 0x6e08) = *(undefined4 *)(param_1 + 0x84c);
    }
    do {
      *(undefined4 *)(param_1 + 0x1a50) = 1;
      *(int *)(param_1 + 0xaf0) = *(int *)(param_1 + 0xaf4);
      *(undefined4 *)(param_1 + 0x4f24) = *(undefined4 *)(param_1 + 0x4f28);
      if (*(int *)(param_1 + 0xaf4) == 0) {
        if (((*(int *)(param_1 + 0x7660) != 0) && (*(longlong *)(param_1 + 0x2e0) == 1)) &&
           (*(int *)(param_1 + 0x1db0) == 2)) {
          iVar3 = *(int *)(param_1 + 0x2a0);
          iVar4 = *(int *)(*(int *)(param_1 + 0x7664) + 0x1c);
          if ((iVar3 <= iVar4 + -4) || (iVar4 + 4 <= iVar3)) {
            uVar8 = iVar3 + iVar4;
            *(undefined4 *)(param_1 + 0x76c4) = 1;
            *(uint *)(param_1 + 0x2a0) =
                 ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0);
          }
        }
        if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
            (*(int *)(param_1 + 0x7808) != 0)) &&
           ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
          fn_82E826C8(param_1,0,*(undefined4 *)(param_1 + 0x2a0));
        }
        iVar3 = *(int *)(param_1 + 0x1f44);
        if (*(int *)(param_1 + 0x1f10) <= *(int *)(param_1 + 0x1f44)) {
          iVar3 = *(int *)(param_1 + 0x1f10);
        }
        fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a0),
                      *(undefined4 *)(param_1 + 0x590),1,&uStack_4c,&iStack_50,auStack_48);
        iVar4 = (int)((((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff
                        ) >> 3) + (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff)
                     << 3) + *(int *)(param_1 + 0x1ec8);
        while (iVar3 < iVar4) {
          iVar4 = *(int *)(param_1 + 0x1ee8) + 0xe;
          if (0x1e < iVar4) {
            iVar4 = 0x1e;
          }
          if (iVar4 <= *(int *)(param_1 + 0x2a0)) break;
          fn_82E8EF60(param_1,1);
          fn_82E8D470(param_1);
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x2a0) + 4;
          iVar4 = (int)uVar7;
          *(int *)(param_1 + 0x2a0) = iVar4;
          if (iVar4 <= (int)*(uint *)(param_1 + 0x1efc)) {
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x1efc);
          }
          *(int *)(param_1 + 0x2a0) = (int)uVar7;
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x1ee8) + 0xe;
          iVar6 = (int)uVar5;
          iVar4 = 0x1e;
          if (iVar6 < 0x1f) {
            iVar4 = iVar6;
          }
          if ((iVar4 <= (int)uVar7) && (uVar7 = 0x1e, iVar6 < 0x1f)) {
            uVar7 = uVar5;
          }
          *(int *)(param_1 + 0x2a0) = (int)uVar7;
          fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf0),uVar7,
                        *(undefined4 *)(param_1 + 0x590),1,&uStack_4c,&iStack_50,auStack_48);
          iVar4 = (int)((((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) &
                          0xffffffff) >> 3) + (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) &
                        0xffffffff) << 3) + *(int *)(param_1 + 0x1ec8);
        }
      }
      else {
        if (((*(int *)(param_1 + 0x7660) != 0) && (*(int *)(param_1 + 0x1db0) == 2)) &&
           ((iVar3 = **(int **)(param_1 + 0x766c), iVar3 != 0 &&
            ((longlong)*(int *)(iVar3 + 8) <= *(longlong *)(param_1 + 0x2e0))))) {
          *(int *)(param_1 + 0x766c) = iVar3;
        }
        if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
            (*(int *)(param_1 + 0x7808) != 0)) &&
           ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
          fn_82E826C8(param_1,1,0);
        }
        fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a4),
                      *(undefined4 *)(param_1 + 0x590),1,&uStack_4c,&iStack_50,auStack_48);
        *(undefined4 *)(param_1 + 0xaf4) = uStack_4c;
        if (((*(int *)(param_1 + 0x7660) != 0) && (iStack_50 != 0)) &&
           (*(int *)(param_1 + 0xaf0) == 0)) {
          fn_82E8EF60(param_1,1);
          fn_82E8D470(param_1);
          if (*(int *)(param_1 + 0x7660) != 0) {
            fn_82F180E0(param_1);
          }
          fn_82E8E390(param_1);
        }
      }
      *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_1 + 0xaf8);
      *(undefined4 *)(param_1 + 0x4f24) = *(undefined4 *)(param_1 + 0xaf4);
      fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf8),*(undefined4 *)(param_1 + 0x2a4),
                    *(undefined4 *)(param_1 + 0x590),1,&uStack_4c,&iStack_50,auStack_48);
      *(undefined4 *)(param_1 + 0xaf8) = uStack_4c;
      if (((*(int *)(param_1 + 0x1a50) != 0) || (0x1d < *(int *)(param_1 + 0x2a0))) ||
         (0x1d < *(int *)(param_1 + 0x2a4))) {
        if ((*(int *)(param_1 + 0x1a68) != 0) && (*(int *)(param_1 + 0x1a6c) != 0)) {
          *(undefined4 *)(param_1 + 0x1a64) = 0;
        }
        *(undefined4 *)(param_1 + 0x1a6c) = 1;
        *(undefined4 *)(param_1 + 0x1a60) = 0;
        *(undefined4 *)(param_1 + 0x1a58) = 0;
        *(undefined4 *)(param_1 + 0x1a68) = 1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0x1a5c),0,*(int *)(param_1 + 0x2d4) << 2);
      }
      fn_82E8FE90(param_1);
    } while (((*(int *)(param_1 + 0x1a50) == 0) && (*(int *)(param_1 + 0x2a0) < 0x1e)) &&
            (*(int *)(param_1 + 0x2a4) < 0x1e));
    fn_82F000C0(param_1);
  }
  if (*(int *)(param_1 + 0x1f58) == 0) {
    fn_82E8EF60(param_1,0);
    *(undefined4 *)(param_1 + 0x1fec) = 0;
    if (((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) != 2)) &&
       (*(int *)(param_1 + 0xaf0) != 4)) {
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x990),*(undefined4 *)(param_1 + 0x1ea8),
                   ((longlong)(*(int *)(param_1 + 0x2d4) + 2) * (longlong)*(int *)(param_1 + 0x2d0)
                   & 0xfffffffU) << 4);
    }
  }
  else {
    fn_82E8EF60(param_1,1);
    *(undefined4 *)(param_1 + 0x1fec) = 1;
  }
  if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
    *(undefined4 *)(param_1 + 0x2a4) = uVar1;
    *(undefined4 *)(param_1 + 0x590) = uVar2;
  }
  return;
}

