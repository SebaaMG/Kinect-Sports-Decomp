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
extern int fn_822337D0();
extern int fn_8265C9E0();
extern int fn_8289D6D0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC0C;
extern unsigned int lbl_821AECA0;


undefined4 * fn_82252C18(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x278);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_822337D0(puVar1,param_1);
    *puVar1 = &lbl_821AECA0;
    puVar1[0x7e] = puVar1 + 0x7d;
    puVar1[0x7f] = 0;
    puVar1[0x7d] = puVar1 + 0x7d;
    puVar1[0x80] = (int)param_1;
    puVar1[0x86] = 0;
    puVar1[0x7c] = &lbl_821AEC0C;
    fn_8289D6D0(puVar1 + 0x88,4);
    puVar1[0x88] = &lbl_82197100;
  }
  return puVar1;
}

