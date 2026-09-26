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
extern int fn_8294D308();
extern int fn_82959138();


undefined8 fn_82959828(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x104);
  uVar3 = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar4 = 0;
    do {
      if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar4) * 4 +
                                               *(int *)(param_1 + 0x14)) + 4) * 4 +
                             *(int *)(param_1 + 0x10)) + 4) & 0x200) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x104) + 4));
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  uVar2 = fn_82959138(param_1,0x100000,0,*(undefined4 *)(iVar1 + 8),0x100000,0,0);
  if (-1 < (int)uVar2) {
    uVar2 = fn_8294D308(param_1);
  }
  return uVar2;
}

