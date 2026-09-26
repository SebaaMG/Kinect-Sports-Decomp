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
extern unsigned int lbl_8326B474;


void fn_82544918(uint param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_1 == 0) {
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 0x70;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
    *(undefined4 *)(param_2 + 0x2f14) = 1;
    *(uint *)(param_2 + 0x2934) =
         (-(uint)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
         *(uint *)(param_2 + 0x2934) & 0xfffffffd;
LAB_82544b04:
    uVar1 = *(ulonglong *)(param_2 + 0x10);
  }
  else {
    if (param_1 == 1) {
      *(uint *)(param_2 + 0x2934) =
           ((-(uint)(lbl_8326B474 != 0) & 3) + 3) * 0x10 | *(uint *)(param_2 + 0x2934) & 0xffffff8f;
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
      *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 4;
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
      *(undefined4 *)(param_2 + 0x2f14) = 1;
      *(uint *)(param_2 + 0x2934) =
           (-(uint)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
           *(uint *)(param_2 + 0x2934) & 0xfffffffd;
    }
    else {
      if (2 < param_1) {
        if (param_1 != 3) {
          return;
        }
        *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 0x70;
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
        *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 4;
        *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
        *(undefined4 *)(param_2 + 0x2f14) = 1;
        *(uint *)(param_2 + 0x2934) =
             (-(uint)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
             *(uint *)(param_2 + 0x2934) & 0xfffffffd;
        goto LAB_82544b04;
      }
      *(uint *)(param_2 + 0x2934) =
           ((-(uint)(lbl_8326B474 != 0) & 3) + 3) * 0x10 | *(uint *)(param_2 + 0x2934) & 0xffffff8f;
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
      *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) & 0xfffffffb;
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
      *(undefined4 *)(param_2 + 0x2f14) = 1;
      *(uint *)(param_2 + 0x2934) =
           (-(uint)(*(int *)(param_2 + 0x3158) != 0) & 1) << 1 |
           *(uint *)(param_2 + 0x2934) & 0xfffffffd;
    }
    uVar1 = *(ulonglong *)(param_2 + 0x10);
  }
  *(ulonglong *)(param_2 + 0x10) = uVar1 | 0x20800;
  return;
}

