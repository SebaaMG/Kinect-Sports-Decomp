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
extern int fn_8306C0C0();
extern int fn_8306C170();
extern int fn_8306C220();


void fn_82FA54B8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c) & 3;
  if (uVar1 == 1) {
    fn_8306C0C0(*(undefined4 *)(param_1 + 8));
  }
  else if (uVar1 == 2) {
    fn_8306C170(*(undefined4 *)(param_1 + 8),0,0x8000);
  }
  else if (uVar1 == 3) {
    fn_8306C220(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

