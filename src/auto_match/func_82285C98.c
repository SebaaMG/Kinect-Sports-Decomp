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
extern int fn_8225AF90();
extern int fn_8225C590();
extern int fn_82279CA0();
extern int fn_822848B8();


void fn_82285C98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x16c) != 0) {
    fn_822848B8();
    *(undefined4 *)(iVar1 + 0x16c) = 0;
  }
  fn_82279CA0(iVar1,1);
  iVar2 = fn_8225C590();
  uVar6 = 0;
  uVar4 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2;
  if (0 < (int)uVar4) {
    iVar5 = 0;
    do {
      if (uVar6 < uVar4) {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + iVar5);
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        fn_8225AF90();
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      uVar4 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2;
    } while ((int)uVar6 < (int)uVar4);
  }
  *(undefined4 *)(iVar1 + 0x17c) = 1;
  return;
}

