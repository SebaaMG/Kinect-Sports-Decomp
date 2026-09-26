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
extern int fn_8226C378();


longlong fn_8226B7E0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  
  if ((int)param_6 < 0x20) {
    lVar2 = param_6 * 0x14;
    do {
      if (*(char *)((int)lVar2 + *(int *)(param_1 + 0x54) + 0x10) == '\0') {
        if (0x1f < (int)param_6) {
          return param_6;
        }
        iVar1 = (int)param_6 * 0x14;
        *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1) = param_2;
        if (*(int *)(*(int *)(param_1 + 0x54) + iVar1) < 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1 + 4) = param_3;
        if (*(int *)(param_1 + 0x48) <= *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 4)) {
          *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 4) = *(int *)(param_1 + 0x48) + -1;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1 + 8) = param_4;
        if (*(int *)(*(int *)(param_1 + 0x54) + iVar1 + 8) < 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1 + 8) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc) = param_5;
        if (*(int *)(param_1 + 0x4c) <= *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc)) {
          *(int *)(*(int *)(param_1 + 0x54) + iVar1 + 0xc) = *(int *)(param_1 + 0x4c) + -1;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x54) + iVar1 + 0x10) = 1;
        fn_8226C378();
        return param_6;
      }
      lVar2 = lVar2 + 0x14;
      param_6 = param_6 + 1;
    } while ((int)lVar2 < 0x280);
  }
  return -1;
}

