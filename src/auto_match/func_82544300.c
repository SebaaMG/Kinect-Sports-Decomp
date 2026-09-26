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
extern int fn_8262FEC8();
extern int fn_82A1F238();
extern unsigned int lbl_8326B1C8;
extern unsigned int lbl_8326B1CC;
extern unsigned int lbl_8326B2E8;
extern unsigned int lbl_8326B314;
extern unsigned int lbl_8326B318;
extern unsigned int lbl_8326B31C;
extern unsigned int lbl_8326B320;
extern unsigned int lbl_8326B338;
extern unsigned int lbl_8326B34C;


void fn_82544300(void)

{
  undefined4 *puVar1;
  
  if (lbl_8326B34C != 0) {
    if (lbl_8326B318 != 0) {
      fn_82A1F238();
      lbl_8326B314 = 0;
      lbl_8326B318 = 0;
    }
    if (lbl_8326B320 != 0) {
      fn_82A1F238();
      lbl_8326B31C = 0;
      lbl_8326B320 = 0;
    }
    if (lbl_8326B338 != 0) {
      fn_82A1F238();
      lbl_8326B338 = 0;
    }
    fn_8262FEC8(lbl_8326B1C8);
    lbl_8326B1C8 = 0;
    fn_8262FEC8(lbl_8326B1CC);
    puVar1 = &lbl_8326B2E8;
    lbl_8326B1CC = 0;
    do {
      fn_8262FEC8(puVar1[-5]);
      puVar1[-5] = 0;
      fn_8262FEC8(*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < -0x7cd94d04);
    lbl_8326B34C = 0;
  }
  return;
}

