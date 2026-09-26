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
extern int fn_8240D930();
extern int fn_828E9DB8();


void fn_828DCB30(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar1,2);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar1,2);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x88);
  if (uVar3 != *(uint *)(param_1 + 0x8c)) {
    do {
      fn_8223C478(param_2,1,0);
      fn_828E9DB8(param_2,1,1);
      uVar2 = fn_8240D930(uVar3);
      fn_8223C478(param_2,2,0);
      fn_828E9DB8(param_2,uVar2,2);
      uVar3 = uVar3 + 0x34;
    } while ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x8c));
  }
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,0,1);
  return;
}

