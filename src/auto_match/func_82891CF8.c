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
extern int fn_8223C478();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9DB8();
extern int fn_828E9FF8();


void fn_82891CF8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 0xb) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_828E9FF8(param_2,0xb);
  }
  uVar4 = 0;
  *(int *)(param_1 + 0x4bc) = iVar1;
  if (iVar1 != 0) {
    do {
      iVar1 = fn_828E9DA8(param_2);
      iVar2 = fn_828E9D90(param_2);
      if (iVar1 - iVar2 < 8) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_828E9FF8(param_2,8);
      }
      fn_8223C478(param_1 + 0x494,8,0);
      fn_828E9DB8(param_1 + 0x494,uVar3,8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x4bc));
  }
  fn_828E9D40(param_1 + 0x494);
  return;
}

