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
extern int fn_82865170();
extern int fn_82866400();


undefined8 fn_82874940(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0x20260000;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = 0;
    if (iVar2 != *(int *)(param_1 + 8)) {
      iVar3 = iVar2 + 4;
      iVar4 = iVar2;
      do {
        if (iVar3 == *param_2) {
          *(undefined1 *)(uVar5 * 0x70 + iVar2) = 0;
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & ~(1 << (uVar5 & 0x3f));
          *param_2 = 0;
          fn_82865170();
          iVar2 = fn_82866400();
          *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          return 0x20260000;
        }
        iVar4 = iVar4 + 0x70;
        iVar3 = iVar3 + 0x70;
        uVar5 = uVar5 + 1;
      } while (iVar4 != *(int *)(param_1 + 8));
    }
    uVar1 = 0xffffffffa0260000;
  }
  return uVar1;
}

