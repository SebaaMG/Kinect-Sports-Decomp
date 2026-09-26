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
extern int fn_8294B7A8();
extern int fn_829558B0();
extern int fn_82969030();
extern int fn_8296E438();
extern int fn_82971580();
extern int fn_82994908();


undefined8 fn_82995AC8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = fn_829558B0();
  if (-1 < (int)uVar3) {
    fn_8294B7A8(param_1);
    uVar5 = 0;
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
        *(uint *)(param_1 + 0x100) = uVar5;
        *(uint **)(param_1 + 0x104) = puVar2;
        if (((*puVar2 & 0xfff00000) != 0) && (uVar3 = fn_82994908(param_1), (int)uVar3 < 0)) {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < uVar1);
    }
    uVar3 = fn_8296E438(param_1);
    if (((-1 < (int)uVar3) && (uVar3 = fn_82971580(param_1), -1 < (int)uVar3)) &&
       (uVar3 = fn_82969030(param_1), -1 < (int)uVar3)) {
      fn_8294B7A8(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

