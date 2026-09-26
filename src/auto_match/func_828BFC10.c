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
extern int fn_8265C9E0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025CC8;
extern unsigned int lbl_82025CD0;


undefined4 * fn_828BFC10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x98);
  if (puVar1 != (undefined4 *)0x0) {
    fn_828BDDA0();
    *puVar1 = &lbl_82025CD0;
    puVar1[0x14] = &lbl_82025CC8;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

