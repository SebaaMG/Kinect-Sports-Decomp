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
extern int fn_82C2B590();


void fn_82A6B7D0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x15c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xf4)) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *(int *)(param_1 + 0x15c)) != 0) {
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0xf4)) {
            iVar5 = 0;
            do {
              iVar1 = *(int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x15c)) + iVar5);
              if (iVar1 != 0) {
                fn_82C2B590(iVar1);
                *(undefined4 *)(*(int *)(iVar4 + *(int *)(param_1 + 0x15c)) + iVar5) = 0;
              }
              iVar3 = iVar3 + 1;
              iVar5 = iVar5 + 4;
            } while (iVar3 < *(int *)(param_1 + 0xf4));
          }
          iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0x15c));
          if (iVar3 != 0) {
            fn_82C2B590(iVar3);
            *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x15c)) = 0;
          }
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar2 < *(int *)(param_1 + 0xf4));
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      fn_82C2B590();
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  return;
}

