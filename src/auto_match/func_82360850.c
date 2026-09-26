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
extern int fn_82536590();
extern unsigned int lbl_821CA460;


void fn_82360850(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x2b20)) {
    iVar1 = *(int *)(param_1 + 0x2c9c);
    if (param_3 == 0) {
      if (iVar1 == 3) {
        if (param_4 == 0) {
          *(undefined4 *)(param_1 + 0x2c9c) = 0;
          *(undefined4 *)(param_1 + 0x2ca0) = lbl_821CA460;
          return;
        }
        fn_82536590(param_1 + 0x1488,0);
      }
      uVar2 = 1;
    }
    else {
      if ((iVar1 != 1) && (iVar1 != 0)) {
        return;
      }
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 0x2c9c) = uVar2;
  }
  return;
}

