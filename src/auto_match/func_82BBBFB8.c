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
extern int fn_82BA02A8();
extern unsigned int lbl_820E7F98;


void fn_82BBBFB8(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  fn_82BA02A8(*(undefined4 *)(param_1 + 0x754),0xffffffff820e0c98);
  lVar1 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x410);
  do {
    if (puVar2[-0x20] != 0) {
      fn_82BA02A8(*(undefined4 *)(param_1 + 0x754),0xffffffff820e0c70,lVar1,
                   (&lbl_820E7F98)[puVar2[-0x10] * 3],*puVar2);
    }
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)lVar1 < 0x10);
  return;
}

