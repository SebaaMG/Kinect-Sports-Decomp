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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82242620();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


int * fn_822434A8(int *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char cVar3;
  
  uVar2 = fn_8265C9E0(0x168);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)uVar2;
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (uVar2 != 0xfffffffffffffff4) {
      fn_82242620();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((uVar2 & 0xffffffff) != 0) {
    cVar3 = fn_8223AAC0(uVar2);
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = (int)uVar2;
      *param_1 = (int)uVar2 + 0xc;
    }
    fn_822315A0(uVar2);
  }
  return param_1;
}

