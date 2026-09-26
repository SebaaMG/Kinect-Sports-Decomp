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
extern unsigned int *auStack_80;
extern int fn_82AA66A8();
extern int fn_82B80788();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


undefined8
fn_82B80B40(int param_1,ulonglong param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uStack00000020;
  undefined8 uStack00000028;
  undefined1 auStack_80 [104];
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x218) != 0) {
    uStack00000020 = ((((U64)(uStack00000020)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_2)) & ((U64)0xFFFFFFFF)) << 32));
    puVar2 = (uint *)(param_1 + 0x15c);
    do {
      if ((((ulonglong)*puVar2 & 0x1f) == (param_2 & 0x1f)) &&
         (((*puVar2 ^ (((U64)(uStack00000020) >> 32) & 0xFFFFFFFF)) & 0x1e0) == 0)) {
        if (param_4 == 0) {
          return 1;
        }
        uStack00000020 = param_2;
        uStack00000028 = param_3;
        fn_82B80788(param_1,auStack_80,100,*(undefined4 *)(param_4 + 8),
                      *(uint *)(*(int *)(param_5 + 0x1c) + param_6 * 8) >> 0x1b & 0xf);
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdb9,auStack_80);
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 < *(uint *)(param_1 + 0x218));
  }
  return 0;
}

