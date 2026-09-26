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
extern int fn_8268B330();
extern int fn_82F63EC8();
extern unsigned int lbl_831F1398;
extern unsigned int lbl_831F139C;


undefined4 * fn_8278C028(int param_1)

{
  undefined4 *puVar1;
  
  if ((lbl_831F139C & 1) == 0) {
    lbl_831F139C = lbl_831F139C | 1;
    fn_8268B330(0xffffffff831f1398);
    fn_82F63EC8(0xffffffff83140010);
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  if ((*(ushort *)(param_1 + 0x2a) >> 2 & 1) == 0) {
    puVar1 = &lbl_831F1398;
  }
  return puVar1;
}

