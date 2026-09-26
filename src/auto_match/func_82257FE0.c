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
extern int fn_82232CC8();
extern int fn_82233250();
extern int fn_8223AAC0();
extern int fn_8265C9E0();
extern unsigned int lbl_82198270;
extern unsigned int lbl_821AD588;


undefined4 * fn_82257FE0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x218);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 3;
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar3 != (undefined4 *)0x0) {
      fn_82232CC8(puVar3);
      *puVar3 = &lbl_82198270;
      fn_82233250(puVar1 + 0x3c);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    cVar2 = fn_8223AAC0(puVar1);
    if (cVar2 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = puVar1;
      *param_1 = puVar1 + 3;
    }
    fn_822315A0(puVar1);
  }
  return param_1;
}

