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
extern int fn_8225AB78();
extern int fn_8265C9E0();
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82198468;
extern unsigned int lbl_82198484;
extern unsigned int lbl_8219848C;


undefined4 * fn_8225A778(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_82239CB0(puVar1,param_1 + -0x28);
    *puVar1 = &lbl_82198484;
    puVar1[10] = &lbl_821968A4;
    fn_8225AB78(puVar1 + 0xc,param_1 + 8);
    puVar1[0xc] = &lbl_82198468;
    *puVar1 = &lbl_82198484;
    puVar1[10] = &lbl_8219848C;
  }
  return puVar1;
}

