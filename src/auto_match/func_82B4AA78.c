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
extern int fn_82AA66A8();
extern int fn_82B4A328();
extern int fn_82B4A7C0();


void fn_82B4AA78(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if ((param_4 & 0xffffffff) == 0) goto LAB_82b4ab34;
  uVar4 = param_4 + 1;
  if (uVar4 == 0) {
LAB_82b4aab8:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (uVar4 != (uVar4 & ~param_4)) goto LAB_82b4aab8;
  }
  if (bVar1) {
    iVar2 = fn_82B4A7C0(param_1,0,param_3 + 0x270,1,0xc,1,0x20 - LZCOUNT((int)param_4));
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0xb)) {
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 0x20;
      uVar3 = fn_82B4A328(param_1,param_5,param_6);
      *(undefined4 *)(iVar2 + 0x3c) = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
LAB_82b4ab34:
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0xdac,param_2);
}

