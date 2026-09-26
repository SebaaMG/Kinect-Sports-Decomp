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
extern int fn_82ABDD90();
extern int fn_82AE7308();
extern int fn_82B84C90();


uint fn_82B86570(int param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_4 & 0xff) != 0) {
    iVar3 = (int)param_2 * 0x28;
    if (*(int *)(*(int *)(param_1 + 0xc) + iVar3 + 0x1c) == 0) {
      fn_82AE7308();
    }
    param_4 = 0;
    param_3 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 + 0x1c) + param_3 * 8) >> 4 &
              0x3fff;
  }
  uVar4 = *(uint *)(param_1 + 4);
  uVar1 = *(uint *)((-(uint)((uVar4 & 1) == 0) & uVar4) + 0x14);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      uVar4 = fn_82B84C90(param_1,param_2,param_3,param_4,0x7c,
                            -(ulonglong)((uVar4 & 1) == 0) & (ulonglong)uVar4,
                            (-(ulonglong)((uVar4 & 1) == 0) & (ulonglong)uVar4) + 0x10 | 3);
      return uVar4;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3e00) {
      uVar2 = *(uint *)(uVar1 + 8);
      iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
      uVar2 = *(uint *)(iVar3 + (uVar1 - 8));
      if ((((ulonglong)uVar2 & 0x7fff) == (param_2 & 0xffffffff)) &&
         ((uVar2 >> 0xf & 0x3fff) == param_3)) {
        return uVar1;
      }
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

