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
extern int fn_82517DC8();
extern int fn_8265C9E0();
extern unsigned int lbl_82197648;
extern unsigned int lbl_82197688;


undefined4 * fn_822386F8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0xa0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_82517DC8(puVar1,param_1);
    puVar1[0x20] = 0;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    *(undefined1 *)((int)puVar1 + 0x95) = 0;
    *(undefined1 *)((int)puVar1 + 0x96) = 0;
    *(undefined1 *)((int)puVar1 + 0x97) = 0;
    *(undefined1 *)(puVar1 + 0x26) = 0;
    *puVar1 = &lbl_82197648;
    puVar1[0x1a] = &lbl_82197688;
    *(undefined1 *)(puVar1 + 0x25) = 1;
    *(undefined4 **)(puVar1[0xd] + 0x148) = puVar1;
  }
  return puVar1;
}

