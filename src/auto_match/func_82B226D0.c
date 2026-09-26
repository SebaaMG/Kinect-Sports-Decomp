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
extern int fn_82AA66A8();
extern int fn_82B1E2A0();
extern int fn_82B1E618();


void fn_82B226D0(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x218) != 0) {
    piVar2 = (int *)(param_1 + 0x160);
    do {
      if (((ulonglong)(uint)piVar2[-1] & 0x1f) == (param_3 & 0xffffffff)) {
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar3 = *piVar2;
      }
      if (((ulonglong)(uint)piVar2[-1] & 0x1f) == (param_5 & 0xffffffff)) {
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar4 = *piVar2;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)(param_1 + 0x218));
    if (((iVar3 != 0) && (iVar4 != 0)) && (iVar3 != iVar4)) {
      if (((((0x8da691691448U >> (param_2 & 0x7f)) >> (param_2 & 0x7f)) >> (param_2 & 0x7f) &
            0xffffffff ^ (ulonglong)(*(uint *)(iVar3 + 8) >> 0xe)) & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (((ulonglong)(*(uint *)(iVar4 + 8) >> 0xe) & 7) !=
          (((0x8da691691448U >> (param_4 & 0x7f)) >> (param_4 & 0x7f)) >> (param_4 & 0x7f) & 7)) {
        fn_82B1E2A0(param_1,param_5,iVar4);
      }
      fn_82B1E618(param_1,param_3,iVar3,
                    (-1 - LZCOUNT((uint)param_4 & ~((uint)param_4 - 1))) + LZCOUNT((int)param_2),
                    param_5,iVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

