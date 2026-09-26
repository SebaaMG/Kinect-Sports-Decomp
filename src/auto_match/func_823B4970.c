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
extern int fn_8223C610();
extern int fn_828E9DB8();


void fn_823B4970(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  fn_8223C478(param_1,param_3,param_4);
  cVar2 = '\x01';
  if (0x1f < (int)param_3) {
    uVar3 = (param_3 & 0xffffffff) >> 5;
    param_3 = param_3 - (param_3 & 0xffffffe0);
    do {
      uVar1 = fn_8223C610(param_2,0x20,0,0);
      cVar2 = fn_828E9DB8(param_1,uVar1,0x20);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((cVar2 != '\0') && ((int)param_3 != 0)) {
    uVar1 = fn_8223C610(param_2,param_3,0,0);
    fn_828E9DB8(param_1,uVar1,param_3);
  }
  return;
}

