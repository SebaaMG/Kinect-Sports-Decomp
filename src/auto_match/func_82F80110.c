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
extern int fn_82F812C0();


ulonglong fn_82F80110(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    fn_82F812C0();
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    fn_82F812C0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    fn_82F812C0();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar3 = 0;
    do {
      if (param_2 == *(uint *)(iVar3 + iVar4)) {
        return (ulonglong)*(uint *)(uVar2 * 8 + iVar4 + 4);
      }
      if (param_2 < *(uint *)(iVar3 + iVar4)) {
        if (uVar2 == 0) {
          return 0xffffffffffffffff;
        }
        iVar4 = uVar2 * 8 + iVar4;
        goto LAB_82f80190;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (uVar2 < uVar1);
  }
  iVar4 = uVar1 * 8 + *(int *)(param_1 + 0x18);
LAB_82f80190:
  return (ulonglong)*(uint *)(iVar4 + -4);
}

