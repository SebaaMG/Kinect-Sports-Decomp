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
extern int fn_82239CB0();
extern int fn_8223A060();
extern int fn_82258628();
extern int fn_8265C9E0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821982A0;
extern unsigned int lbl_821982D0;
extern unsigned int lbl_821982D8;


undefined4 * fn_822584A0(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x110);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_82239CB0(puVar1,param_1 + -0x28);
    *puVar1 = &lbl_821982D0;
    puVar1[10] = &lbl_821968A4;
    fn_82258628(puVar1 + 0xc,param_1 + 8);
    puVar1[0xc] = &lbl_821982A0;
    fn_8223A060(puVar1 + 0x2a,param_1 + 0x80);
    *puVar1 = &lbl_821982D0;
    puVar1[10] = &lbl_821982D8;
  }
  return puVar1;
}

