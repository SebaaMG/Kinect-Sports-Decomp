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
extern int fn_82E1D068();
extern int fn_82F65AC0();


undefined8 fn_82E1D478(int param_1,ulonglong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 0xffffffff80004005;
  }
  else {
    if ((param_2 & 0xffffffff) == 0) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          *(undefined1 *)(*(int *)(param_1 + 0x1c) + iVar4) = param_3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x14));
      }
    }
    else {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        iVar5 = 0;
        do {
          iVar2 = fn_82F65AC0(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5));
          if ((iVar2 == 0) ||
             (cVar3 = fn_82E1D068(param_1,param_2,
                                    *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar5)),
             cVar3 != '\0')) {
            *(undefined1 *)(*(int *)(param_1 + 0x1c) + iVar4) = param_3;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < *(int *)(param_1 + 0x14));
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

