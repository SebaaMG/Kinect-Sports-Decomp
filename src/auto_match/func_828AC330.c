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
extern int fn_828E9DB8();
extern int fn_828EA268();


void fn_828AC330(int param_1,undefined8 param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
    uVar2 = (ulonglong)*param_3 - (ulonglong)*(uint *)(param_1 + 0xc);
  }
  else {
    uVar1 = fn_828EA268(*param_3);
    if ((int)uVar1 == 0) {
      uVar1 = 1;
    }
    fn_8223C478(param_2,5,0);
    fn_828E9DB8(param_2,uVar1 - 1,5);
    uVar2 = (ulonglong)*param_3;
  }
  fn_8223C478(param_2,uVar1,0);
  fn_828E9DB8(param_2,uVar2,uVar1);
  return;
}

