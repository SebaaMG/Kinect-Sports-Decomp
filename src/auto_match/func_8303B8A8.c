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
extern int fn_82FA5060();
extern int fn_8302B7D0();
extern int fn_8302BB20();
extern unsigned int lbl_8217D418;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


undefined4 * fn_8303B8A8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_8302B7D0(puVar2,param_1,param_2);
    puVar2[7] = 0;
    uVar1 = lbl_821AAD20;
    *puVar2 = &lbl_8217D418;
    puVar2[8] = uVar1;
    fn_8302BB20(puVar2);
  }
  return puVar2;
}

