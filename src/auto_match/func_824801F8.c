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
extern int fn_8226D6A0();
extern int fn_82279CA0();
extern int fn_822817E0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_824801F8(int param_1)

{
  int iVar1;
  int iStack_20;
  int iStack_1c;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    fn_8226D6A0();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_822817E0(&iStack_20);
    if (iStack_20 != 0) {
      fn_82279CA0(iStack_20,0);
    }
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

