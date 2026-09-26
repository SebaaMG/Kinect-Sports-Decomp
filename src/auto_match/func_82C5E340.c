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
extern int fn_82F68CC0();


void fn_82C5E340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x3a6c);
  iVar3 = *(int *)(param_1 + 0x3a70);
  iVar1 = *(int *)(param_1 + 0x3a64);
  iVar4 = *(int *)(param_1 + 0x3a68);
  if ((*(int *)(param_1 + 0xd78) == 0) && (*(int *)(param_1 + 0x3d0c) == 0)) {
    *(undefined4 *)(param_1 + 0xd78) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xeb4) + 0x268) =
         *(undefined4 *)(*(int *)(param_1 + 0xea8) + 0x268);
    *(undefined4 *)(*(int *)(param_1 + 0xeb4) + 0x25c) =
         *(undefined4 *)(*(int *)(param_1 + 0xea8) + 0x25c);
    *(undefined4 *)(*(int *)(param_1 + 0xeb4) + 0x260) =
         *(undefined4 *)(*(int *)(param_1 + 0xea8) + 0x260);
    *(undefined4 *)(*(int *)(param_1 + 0xeb4) + 0x264) =
         *(undefined4 *)(*(int *)(param_1 + 0xea8) + 0x264);
    if ((*(int *)(param_1 + 0x3e5c) == 0) || (*(int *)(param_1 + 0x4fc0) != 0)) {
      if (((*(int *)(param_1 + 0x5580) == 1) && (0 < *(int *)(param_1 + 0x39f4))) &&
         (1 < *(longlong *)(param_1 + 0xe30))) {
        iVar2 = *(int *)(param_1 + 0x4fb0) * 2;
        iVar1 = *(int *)(param_1 + 0x56ac) + iVar2;
        iVar3 = *(int *)(param_1 + 0x4fb4) * 2;
        iVar2 = *(int *)(param_1 + 0x56b0) + iVar2;
        iVar4 = *(int *)(param_1 + 0x56b4) + iVar3;
        iVar3 = *(int *)(param_1 + 0x56b8) + iVar3;
      }
      fn_82F68CC0(*(undefined4 *)(param_1 + 0xf04),*(undefined4 *)(param_1 + 0xecc),
                   (longlong)iVar2 * (longlong)iVar1);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0xf08),*(undefined4 *)(param_1 + 0xed0),
                   (longlong)iVar3 * (longlong)iVar4);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0xf0c),*(undefined4 *)(param_1 + 0xed4),
                   (longlong)iVar3 * (longlong)iVar4);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xeb4);
      iVar3 = *(int *)(iVar2 + 0x250) * 0x44 + iVar2;
      *(int *)(iVar2 + 0x250) = *(int *)(iVar2 + 0x250) + 1;
      *(undefined4 *)(iVar3 + 0x30) = 2;
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0xea8);
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(param_1 + 0x3a64);
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_1 + 0x3a68);
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0x3a58);
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0x3a74);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_1 + 0x3a78);
    }
  }
  return;
}

