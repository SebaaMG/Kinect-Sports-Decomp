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


void fn_82A6C148(int param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x22);
  if (*(int *)(param_1 + 0x224) != 0) {
    lVar3 = 1;
    if (uVar1 != 0) {
      iVar5 = 4;
      do {
        if ((6 < (int)lVar3) && (0 < (int)lVar3)) {
          iVar6 = 0;
          lVar4 = lVar3;
          do {
            iVar2 = *(int *)(*(int *)(iVar5 + *(int *)(param_1 + 0x224)) + iVar6);
            if (iVar2 != 0) {
              fn_82C2B590(iVar2);
              *(undefined4 *)(*(int *)(iVar5 + *(int *)(param_1 + 0x224)) + iVar6) = 0;
            }
            lVar4 = lVar4 + -1;
            iVar6 = iVar6 + 4;
          } while (lVar4 != 0);
        }
        iVar6 = *(int *)(iVar5 + *(int *)(param_1 + 0x224));
        if (iVar6 != 0) {
          fn_82C2B590(iVar6);
          *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x224)) = 0;
        }
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)lVar3 <= (int)(uint)uVar1);
    }
    if (*(int *)(param_1 + 0x224) != 0) {
      fn_82C2B590();
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
  }
  return;
}

