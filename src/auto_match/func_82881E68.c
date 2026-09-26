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
extern int fn_8289F160();
extern unsigned int iStack_1c;
extern unsigned int lbl_83212A04;
extern unsigned int uStack_20;


void fn_82881E68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uStack_20;
  int iStack_1c;
  
  uStack_20 = param_1;
  fn_8289F160(&iStack_1c,0xffffffff83212a00,&uStack_20);
  if (iStack_1c == lbl_83212A04) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iStack_1c + 0x10);
  }
  *(undefined2 *)(iVar1 + 0x24) = 2;
  *(undefined4 *)(iVar1 + 0x28) = *param_2;
  *(undefined2 *)(iVar1 + 0x26) = 1000;
  return;
}

