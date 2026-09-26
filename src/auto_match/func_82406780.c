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
extern int fn_8255B400();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821B7E04;


void fn_82406780(undefined4 *param_1)

{
  bool bVar1;
  
  *param_1 = &lbl_821B7E04;
  if (param_1[0x12] != 0) {
    fn_8255B400(*(undefined4 *)(param_1[0x14] + 0x844));
    param_1[0x12] = 0;
  }
  if (param_1 + 0x11 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[0x11] != 0;
  }
  if (bVar1) {
    param_1[0x1e] = 0;
  }
  *param_1 = &lbl_821AC5E0;
  return;
}

