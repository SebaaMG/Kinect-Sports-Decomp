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
extern int fn_82F21E78();


void fn_82F23B08(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1e54);
  lVar2 = 0;
  if (*(int *)(param_1 + 0x8e0) == 0) {
    if (0 < *(int *)(param_1 + 0x2d4)) {
      iVar1 = *(int *)(param_1 + 0x2d0);
      do {
        lVar3 = 0;
        if (0 < iVar1) {
          do {
            fn_82F21E78(param_1,lVar3,lVar2,*(undefined1 *)(iVar4 + 0x58),iVar4 + 0x38,
                            iVar4 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x38,iVar4 + -0xdc,
                            iVar4 + 4);
            iVar1 = *(int *)(param_1 + 0x2d0);
            lVar3 = lVar3 + 1;
            iVar4 = iVar4 + 0x114;
          } while ((int)lVar3 < iVar1);
        }
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(param_1 + 0x2d4));
    }
  }
  else if (0 < *(int *)(param_1 + 0x2d4)) {
    iVar1 = *(int *)(param_1 + 0x2d0);
    do {
      lVar3 = 0;
      if (0 < iVar1) {
        do {
          fn_82F21E78(param_1,lVar3,lVar2,*(undefined1 *)(iVar4 + 0x58),iVar4 + 0x38,
                          iVar4 + *(int *)(param_1 + 0x2d0) * -0x114 + 0x38,iVar4 + -0xdc,iVar4 + 4)
          ;
          iVar1 = *(int *)(param_1 + 0x2d0);
          lVar3 = lVar3 + 1;
          iVar4 = iVar4 + 0x114;
        } while ((int)lVar3 < iVar1);
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x2d4));
  }
  return;
}

