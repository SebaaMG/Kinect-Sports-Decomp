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
extern int fn_82417D18();
extern int fn_82417F58();
extern int fn_8241A8A0();
extern int fn_82F622E0();


void fn_8241CC60(int param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2 != 0) {
    uVar2 = 0;
    do {
      if (0x27 < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821b5f00);
      }
      if ((1 << (uVar3 & 0x1f) & *(uint *)(((uVar3 >> 5) + 3) * 4 + param_2)) != 0) {
        *(undefined4 *)(*(int *)(uVar2 + *(int *)(param_1 + 0x88)) + 0x30) = 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 4;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2));
  }
  if (*(int *)(param_2 + 8) == 2) {
    uVar1 = fn_82417F58(param_1);
    fn_8241A8A0(param_1,uVar1);
    *(undefined4 *)(param_1 + 0x270) = 1;
  }
  fn_82417D18(param_1,*(int *)(param_2 + 8) == 1,0,1);
  return;
}

