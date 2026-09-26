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
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_82E826C8();
extern int fn_82E8E7A8();
extern int fn_82E8ECF8();
extern int fn_82E8EF60();
extern int fn_82E8FE90();
extern int fn_82EFE758();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_82E90960(int param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [84];
  
  if (*(int *)(param_1 + 0x1a64) == 0) {
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x1d94);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x1d94);
  }
  iStack_60 = 0;
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x890) - (ulonglong)*(uint *)(param_1 + 0x898);
  *(int *)(param_1 + 0x890) = (int)lVar5;
  if (lVar5 < 0) {
    *(undefined4 *)(param_1 + 0x890) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2a4);
  uVar2 = *(undefined4 *)(param_1 + 0x590);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82EFE758(param_1);
  }
  while( true ) {
    *(undefined4 *)(param_1 + 0x1a50) = 1;
    if (*(int *)(param_1 + 0x7b38) == 0) {
      if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
          (*(int *)(param_1 + 0x7808) != 0)) &&
         ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
        fn_82E826C8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a0))
        ;
      }
      fn_82E8E7A8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a4),
                    *(undefined4 *)(param_1 + 0x590),param_2,&iStack_5c,&iStack_60,auStack_58);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xaf4);
      iStack_60 = 0;
      iStack_5c = 0;
      if (((iVar3 == 0) || (iVar3 == 1)) ||
         ((*(int *)(param_1 + 0xaf8) == 0 || (*(int *)(param_1 + 0xaf8) == 1)))) {
        *(undefined4 *)(param_1 + 0x6e08) = *(undefined4 *)(param_1 + 0x84c);
      }
      *(int *)(param_1 + 0xaf0) = iVar3;
      *(undefined4 *)(param_1 + 0x4f24) = *(undefined4 *)(param_1 + 0x4f28);
      if ((((*(int *)(param_1 + 0x76c8) != 0) || (*(int *)(param_1 + 0x844) != 0)) ||
          (*(int *)(param_1 + 0x7808) != 0)) &&
         ((*(int *)(param_1 + 0x7800) != 0 || (*(int *)(param_1 + 0x7804) != 0)))) {
        fn_82E826C8(param_1,iVar3,*(undefined4 *)(param_1 + 0x2a4));
      }
      fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf0),*(undefined4 *)(param_1 + 0x2a4),
                    *(undefined4 *)(param_1 + 0x590),1,auStack_54,&iStack_60,auStack_58);
      *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_1 + 0xaf8);
      *(undefined4 *)(param_1 + 0x4f24) = *(undefined4 *)(param_1 + 0xaf4);
      fn_82E8ECF8(param_1,*(undefined4 *)(param_1 + 0xaf8),*(undefined4 *)(param_1 + 0x2a4),
                    *(undefined4 *)(param_1 + 0x590),1,auStack_54,&iStack_5c,auStack_58);
      if (((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) != 2)) &&
         (*(int *)(param_1 + 0xaf0) != 4)) {
        fn_82F68CC0(*(undefined4 *)(param_1 + 0x990),*(undefined4 *)(param_1 + 0x1ea8),
                     ((longlong)(*(int *)(param_1 + 0x2d4) + 2) *
                      (longlong)*(int *)(param_1 + 0x2d0) & 0xfffffffU) << 4);
      }
      if ((iStack_60 == 0) && (iStack_5c == 0)) {
        iStack_60 = 0;
      }
      else {
        iStack_60 = 1;
      }
    }
    if (((*(int *)(param_1 + 0x1a50) != 0) || (0x1d < *(int *)(param_1 + 0x2a0))) ||
       (0x1d < *(int *)(param_1 + 0x2a4))) break;
    fn_82E8FE90(param_1);
    if (((*(int *)(param_1 + 0x1a50) != 0) || (0x1d < *(int *)(param_1 + 0x2a0))) ||
       (0x1d < *(int *)(param_1 + 0x2a4))) {
      if ((*(int *)(param_1 + 0xaf0) == 2) || (*(int *)(param_1 + 0xaf0) == 4)) {
        *(undefined4 *)(param_1 + 0x2a4) = uVar1;
        *(undefined4 *)(param_1 + 0x590) = uVar2;
      }
      *param_3 = iStack_60;
      if (*(int *)(*(int *)(param_1 + 0x1ebc) + 0x38) == 0) {
        fn_82E8EF60(param_1,0);
        *(undefined4 *)(param_1 + 0x1fec) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x202c) = 1;
        fn_82E8EF60(param_1,1);
        *(undefined4 *)(param_1 + 0x1fec) = 1;
      }
      uVar4 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
      *(undefined4 *)(param_1 + 0x1f58) = 0;
      iVar3 = (int)((0x27 - (ulonglong)uVar4 & 0xffffffff) >> 3) + (*(int *)(param_1 + 0x1ec8) >> 3)
              + iVar3;
      *(int *)(param_1 + 0x1e00) = *(int *)(param_1 + 0x1e00) + iVar3;
      if (*(int *)(param_1 + 0x1dac) == 2) {
        *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + iVar3;
        *(int *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dd0) + 1;
      }
      else {
        if (*(int *)(param_1 + 0x1dac) == 3) {
          *(longlong *)(param_1 + 0x1bf8) = (longlong)iVar3 + *(longlong *)(param_1 + 0x1bf8);
          *(uint *)(param_1 + 0x1ae0) =
               ((uint)LZCOUNT(*(int *)(param_1 + 0xaf0)) >> 5) + *(int *)(param_1 + 0x1ae0);
          if ((*(int *)(param_1 + 0x1c10) == 0) && (*(int *)(param_1 + 0xaf0) == 0)) {
            *(undefined4 *)(param_1 + 0x1c10) = *(undefined4 *)(param_1 + 0x1dcc);
          }
        }
        *(int *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dd0) + 1;
      }
      return;
    }
  }
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

