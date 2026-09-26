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
extern int fn_828E9D78();
extern int fn_828E9DB8();


void fn_82891C50(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = fn_828E9D78(param_1 + 0x494);
  *(int *)(param_1 + 0x4bc) = (int)uVar2;
  fn_8223C478(param_2,0xb,0);
  fn_828E9DB8(param_2,uVar2,0xb);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4bc) != 0) {
    do {
      iVar3 = *(int *)(param_1 + 0x4a4);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x4ac);
      }
      uVar1 = *(undefined1 *)(iVar3 + uVar4);
      fn_8223C478(param_2,8,0);
      fn_828E9DB8(param_2,uVar1,8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x4bc));
  }
  return;
}

