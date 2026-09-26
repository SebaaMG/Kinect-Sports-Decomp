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
extern int fn_82570840();
extern int iRam831cb3c4;
extern unsigned int lbl_821CC160;


void fn_8237E9D8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (iRam831cb3c4 != 0) {
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x2cc) != 0) {
        uVar1 = fn_82570840(*(undefined4 *)(param_1 + 0x2c4),param_1 + 0x2cc,0,param_1 + 0x20)
        ;
        *(undefined4 *)(param_1 + 0x2dc) = uVar1;
      }
    }
    else if (param_2 == 1) {
      if (*(int *)(param_1 + 0x2d0) != 0) {
        uVar1 = fn_82570840(*(undefined4 *)(param_1 + 0x2c4),param_1 + 0x2d0,0,param_1 + 0x20)
        ;
        *(undefined4 *)(param_1 + 0x2e0) = uVar1;
        *(undefined4 *)(param_1 + 0x2ac) = lbl_821CC160;
      }
    }
    else if ((param_2 < 3) && (*(int *)(param_1 + 0x2d4) != 0)) {
      uVar1 = fn_82570840(*(undefined4 *)(param_1 + 0x2c4),param_1 + 0x2d4,0,param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x2e4) = uVar1;
    }
  }
  return;
}

