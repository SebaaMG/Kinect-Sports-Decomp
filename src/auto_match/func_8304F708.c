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
extern int fn_82FA4EB8();
extern int fn_82FA5060();
extern int fn_82FA5538();
extern int fn_82FA57F0();
extern unsigned int lbl_8217D360;
extern unsigned int lbl_8217DD70;
extern unsigned int lbl_8217DD88;
extern unsigned int lbl_831BC978;
extern unsigned int lbl_83265044;


undefined4 * fn_8304F708(undefined4 *param_1)

{
  char cVar3;
  ulonglong uVar1;
  undefined4 *puVar2;
  
  cVar3 = fn_82FA4EB8();
  if (cVar3 == '\0') {
LAB_8304f728:
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (lbl_83265044 != (undefined4 *)0x0) {
      return lbl_83265044;
    }
    uVar1 = (ulonglong)lbl_831BC978;
    if (lbl_831BC978 == 0xffffffff) {
      uVar1 = fn_82FA5538(0,*param_1,0x20,1,0);
      lbl_831BC978 = (uint)uVar1;
      if (lbl_831BC978 == 0xffffffff) goto LAB_8304f728;
    }
    puVar2 = (undefined4 *)fn_82FA5060(uVar1,8);
    if (puVar2 == (undefined4 *)0x0) {
      fn_82FA57F0(lbl_831BC978);
      puVar2 = lbl_83265044;
    }
    else {
      puVar2[1] = &lbl_8217D360;
      lbl_83265044 = puVar2 + 1;
      *puVar2 = &lbl_8217DD88;
      puVar2[1] = &lbl_8217DD70;
      puVar2 = lbl_83265044;
    }
  }
  return puVar2;
}

