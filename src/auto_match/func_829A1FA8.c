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
extern int fn_82969030();
extern int fn_8296E438();
extern int fn_8296EB38();
extern int fn_82971580();
extern int fn_82996E58();
extern int fn_82997150();


undefined8 fn_829A1FA8(int param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar4;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar3);
      *(uint **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x11000000) &&
         (uVar2 = fn_82996E58(param_1), (int)uVar2 < 0)) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar3 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar4;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar3);
      *(uint **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x11000000) &&
         (uVar2 = fn_82997150(param_1), (int)uVar2 < 0)) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar2 = fn_8296E438(param_1);
  if ((((-1 < (int)uVar2) && (uVar2 = fn_8296EB38(param_1), -1 < (int)uVar2)) &&
      (uVar2 = fn_82969030(param_1), -1 < (int)uVar2)) &&
     (uVar2 = fn_82971580(param_1), -1 < (int)uVar2)) {
    fn_8294B7A8(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

