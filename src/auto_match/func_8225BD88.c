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
extern int fn_826286B0();
extern int fn_8265C9E0();
extern unsigned int lbl_83298F6C;
extern unsigned int lbl_83298F70;


undefined4 * fn_8225BD88(void)

{
  undefined4 *puVar1;
  
  puVar1 = lbl_83298F6C;
  if ((lbl_83298F70 & 1) == 0) {
    lbl_83298F70 = lbl_83298F70 | 1;
    puVar1 = (undefined4 *)fn_8265C9E0(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0xffffffff;
      puVar1[5] = 0;
      fn_826286B0(puVar1,4);
    }
  }
  lbl_83298F6C = puVar1;
  return puVar1;
}

