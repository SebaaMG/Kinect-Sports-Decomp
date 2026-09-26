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
extern unsigned int *auStack_10f0;
extern int fn_82F65350();
extern int fn_82F691F0();
extern int fn_82F6A530();
extern int fn_82F6A57C();


void fn_82F04110(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10f0 [4336];
  
  iVar1 = fn_82F6A530();
  if (*(int *)(iVar1 + 0x1a74) != 0) {
    uVar2 = fn_82F65350();
    uVar2 = (uint)((uVar2 & 0xf) == 0xf);
    *(uint *)(iVar1 + 0x8a0) = uVar2;
    if (uVar2 != 0) {
      uVar2 = fn_82F65350();
      *(uint *)(iVar1 + 0x8ac) = uVar2 & 0x3f;
      uVar2 = fn_82F65350();
      *(uint *)(iVar1 + 0x8b0) = (uVar2 & 0x3f) - 0x20;
    }
    fn_82F6A57C(*(undefined4 *)(iVar1 + 0x8a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_10f0,0,0x400,0xd,10,
               (longlong)*(int *)(iVar1 + 0x6de4) * (longlong)(*(int *)(iVar1 + 0x2d0) << 2),
               *(undefined4 *)(iVar1 + 0x1a90));
}

