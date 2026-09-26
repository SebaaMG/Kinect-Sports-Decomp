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
extern int fn_82F691F0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_82631B08(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar4 = 0;
  uVar3 = 0;
  while (uVar2 = (uint)uVar1, uVar2 != 0xff) {
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    param_1 = param_1 + 6;
    uVar1 = *param_1;
    lVar4 = lVar4 + 1;
    *(undefined1 *)((int)&uStack_40 + uVar2) = 0xff;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2,0,lVar4 * 0xc + 0x38);
}

