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
extern int fn_82F01808();
extern int fn_82F02A98();
extern int fn_82F02BB8();
extern int fn_82F02E20();
extern int fn_82F03068();
extern int fn_82F03248();
extern int fn_82F0F9A0();


void fn_82F03E00(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x76c8) == 0) {
    if (*(int *)(param_1 + 0x1c2c) != 0) {
      *(undefined4 *)(param_1 + 0x1c2c) = 0;
      iVar2 = *(int *)(param_1 + 0x10) * 0xc + param_1;
      *(undefined4 *)(param_1 + 0x1ee8) =
           *(undefined4 *)((*(int *)(param_1 + 0x10) + 0x7bb) * 4 + param_1);
      *(undefined4 *)(param_1 + 0x1d84) = *(undefined4 *)(iVar2 + 0x1ce4);
      *(undefined4 *)(param_1 + 0x1d88) = *(undefined4 *)(iVar2 + 0x1ce8);
      *(undefined4 *)(param_1 + 0x1d8c) = *(undefined4 *)(iVar2 + 0x1cec);
      fn_82F02A98(param_1,*(undefined4 *)(param_1 + 0x10));
      fn_82F03248();
    }
    iVar2 = *(int *)(param_1 + 0xaf0);
    if ((iVar2 == 1) || (iVar2 == 2)) {
      iVar1 = *(int *)(param_1 + 0x6a4);
      if ((*(int *)(param_1 + 0x10) != iVar1) && ((*(int *)(param_1 + 0x1c34) == 0 && (iVar2 != 2)))
         ) {
        iVar2 = iVar1 * 0x58 + param_1;
        uVar3 = (ulonglong)*(uint *)(iVar2 + 0x6f4);
        if (*(int *)(param_1 + 0x10) < iVar1) {
          fn_82F02E20();
        }
        else {
          fn_82F02BB8(param_1,(ulonglong)*(uint *)(iVar2 + 0x6f0) +
                                    (ulonglong)*(uint *)(param_1 + 0x14),
                            *(uint *)(param_1 + 0x18) + uVar3,*(uint *)(param_1 + 0x1c) + uVar3,
                            *(undefined4 *)(param_1 + 0x4a94),*(undefined4 *)(param_1 + 0x4a98),
                            *(undefined4 *)(param_1 + 0x4a9c));
        }
        *(undefined4 *)(param_1 + 0x1c34) = 1;
        fn_82F01808(param_1);
        fn_82F0F9A0(param_1,0);
        if (*(int *)(param_1 + 0x1eb8) == 0) {
          *(undefined4 *)(param_1 + 0x76bc) = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_82F03068(param_1,*(undefined4 *)(param_1 + 0x4aa0));
      *(undefined4 *)(param_1 + 0x4aa0) = *(undefined4 *)(param_1 + 0x1c40);
      if (*(int *)(param_1 + 0x1eb8) == 0) {
        *(undefined4 *)(param_1 + 0x76bc) = 1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x4aa0);
    *(int *)(param_1 + 0x1abc) = *(int *)(param_1 + 0x1d84) + iVar2;
    *(int *)(param_1 + 0x1ac0) = *(int *)(param_1 + 0x1d88) + iVar2;
    *(int *)(param_1 + 0x1ac4) = *(int *)(param_1 + 0x1d8c) + iVar2;
  }
  return;
}

