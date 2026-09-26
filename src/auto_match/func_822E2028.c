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
extern int fn_824D2AE8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int lbl_821CC160;


void fn_822E2028(int *param_1)

{
  undefined4 uVar1;
  int iStack_20;
  int iStack_1c;
  
  fn_824D2AE8(&iStack_20,param_1 + 0x16);
  if (iStack_20 != 0) {
    *(undefined4 *)(iStack_20 + 0xd4) = 1;
    uVar1 = lbl_821CC160;
    *(undefined4 *)(iStack_20 + 0xe0) = lbl_821CC160;
    *(undefined4 *)(iStack_20 + 0xe4) = uVar1;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

