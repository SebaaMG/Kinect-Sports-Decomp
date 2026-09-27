extern unsigned int *puRam83276750;
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
extern int fn_8265C9E0();
extern unsigned int lbl_82196E94;


void fn_824E3740(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  if (puRam83276750 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      puRam83276750 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar2 = (undefined4 *)fn_8265C9E0(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[3] = 0;
        puVar2[1] = 1;
        *puVar2 = &lbl_82196E94;
        puVar2[2] = 1;
      }
      if (puVar1[7] != 0) {
        fn_822315A0();
      }
      puVar1[7] = puVar2;
      puVar1[6] = 0;
      puRam83276750 = puVar1;
    }
  }
  return;
}
