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
extern int fn_82BF71A0();
extern int fn_82F691F0();


undefined8 fn_82BF77B8(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = fn_82BF71A0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c),0x18);
    if ((uVar1 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
    lVar3 = uVar2 * 0x18 + uVar1 + -0xc;
    if (-1 < (longlong)(uVar2 - 1)) {
      do {
        *(undefined4 *)((int)lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = (int)lVar3;
        lVar3 = lVar3 + -0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(int *)(param_1 + 0x14),0,0x18);
}

