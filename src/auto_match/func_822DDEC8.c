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
extern int fn_822CDCF8();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_822DDEC8(int param_1)

{
  int iStack_40;
  int iStack_3c;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x18;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x18;
  fn_824D2AE8(&iStack_40,param_1 + 0xb4);
  if (iStack_40 != 0) {
    *(undefined4 *)(iStack_40 + 0xac) = 1;
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
                    /* WARNING: Subroutine does not return */
  fn_822CDCF8(*(undefined4 *)(param_1 + 0x14),param_1 + 0xe0,param_1 + 0xf0);
}

