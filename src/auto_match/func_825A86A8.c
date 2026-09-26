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
extern unsigned int *auStack_30;
extern int fn_82D81240();


void fn_825A86A8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_30 [48];
  
  uVar1 = *(uint *)(param_1 + 0x748);
  for (uVar2 = *(uint *)(param_1 + 0x744); uVar2 < uVar1; uVar2 = uVar2 + 0x10) {
    if (((*(int *)(uVar2 + 8) == param_2) && (*(int *)(uVar2 + 4) != 0)) &&
       (*(int *)(*(int *)(uVar2 + 4) + 8) != 0)) {
      fn_82D81240(auStack_30,*(undefined4 *)(*(int *)(uVar2 + 4) + 8),*(int *)(uVar2 + 4));
    }
  }
  uVar1 = *(uint *)(param_1 + 0x75c);
  for (uVar2 = *(uint *)(param_1 + 0x758); uVar2 < uVar1; uVar2 = uVar2 + 0x3f0) {
    if (((*(int *)(uVar2 + 0xe4) == param_2) && (*(int *)(uVar2 + 0xd4) != 0)) &&
       (*(int *)(*(int *)(uVar2 + 0xd4) + 8) != 0)) {
      fn_82D81240(auStack_30,*(undefined4 *)(*(int *)(uVar2 + 0xd4) + 8),
                        *(int *)(uVar2 + 0xd4));
    }
  }
  return;
}

