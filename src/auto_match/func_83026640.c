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
extern int fn_82FA5190();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831BC770;


void fn_83026640(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    fn_82FA5190(lbl_831BC770);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x94) = 0;
    *(undefined2 *)(param_1 + 0x96) = 0;
    uVar1 = lbl_82002AE0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined2 *)(param_1 + 0x96) = 0;
    *(undefined2 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0x2b;
    *(undefined2 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

