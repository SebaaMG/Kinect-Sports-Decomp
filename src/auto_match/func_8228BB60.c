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
extern int fn_82267750();
extern int fn_82268470();


void fn_8228BB60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x614);
  iVar2 = *(int *)(iVar1 + 0x5d8);
  uVar3 = *(int *)(iVar1 + 0x630) + iVar2;
  *(uint *)(iVar1 + 0x5d8) = uVar3;
  if ((uint)((*(int *)(iVar1 + 0x6ec) - *(int *)(iVar1 + 0x6e8)) / 0x38) <= uVar3) {
    *(undefined4 *)(iVar1 + 0x5d8) = 0;
  }
  if (*(int *)(iVar1 + 0x5d8) != iVar2) {
    if (*(int *)(iVar1 + 0x630) != 0) {
      do {
        fn_82267750(*(undefined4 *)(iVar1 + 0x5c0),uVar4);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x630));
    }
    fn_82268470(iVar1);
  }
  return;
}

