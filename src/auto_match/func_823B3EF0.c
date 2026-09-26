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
extern int fn_823B4030();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int lbl_821AE598;
extern unsigned int uStack_50;


void fn_823B3EF0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  
  puStack_48 = (undefined4 *)fn_8265C9E0(0x9c);
  if (puStack_48 == (undefined4 *)0x0) {
    puStack_48 = (undefined4 *)0x0;
  }
  else {
    puStack_48[1] = 1;
    *puStack_48 = &lbl_821AE598;
    puStack_48[2] = 1;
    if (puStack_48 + 3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(puStack_48 + 3,0,0x80);
    }
  }
  uStack_50 = *param_2;
  puStack_4c = puStack_48 + 3;
  fn_823B4030(param_1,&uStack_50);
  if (puStack_48 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  return;
}

