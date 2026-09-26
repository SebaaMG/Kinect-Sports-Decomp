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
extern unsigned int *auStack_20;
extern int fn_82E78690();


undefined8 fn_82E79588(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint auStack_20 [2];
  
  if ((ulonglong)*(uint *)(param_1 + 0x1e0) != (ulonglong)*(ushort *)(param_1 + 0x146)) {
    return 1;
  }
  lVar1 = fn_82E78690(param_1 + 0x178,(ulonglong)*(ushort *)(param_1 + 0x146) - 1,auStack_20);
  uVar2 = -(uint)(lVar1 != 0) & auStack_20[0];
  if (uVar2 != 0) {
    if (*(int *)(uVar2 + 300) != 0) {
      if ((int)(*(ushort *)(param_1 + 0x146) - 1) < (int)(uint)*(byte *)(uVar2 + 0x130)) {
        return 0xffffffffc00d36bb;
      }
      lVar1 = fn_82E78690(param_1 + 0x178,
                            ((ulonglong)*(ushort *)(param_1 + 0x146) -
                            (ulonglong)*(byte *)(uVar2 + 0x130)) + -1,auStack_20);
      uVar2 = -(uint)(lVar1 != 0) & auStack_20[0];
    }
    if (uVar2 != 0) {
      if (*(int *)(uVar2 + 300) == 0) {
        iVar3 = *(int *)(uVar2 + 0x17);
      }
      else {
        iVar3 = *(int *)(uVar2 + 0x134);
      }
      iVar3 = iVar3 + *(int *)(uVar2 + 0x13);
      if (*(int *)(param_1 + 0x168) + iVar3 != *(int *)(param_1 + 0x148)) {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x148) - iVar3;
      }
      return 0;
    }
  }
  return 0xffffffffc00d36bb;
}

