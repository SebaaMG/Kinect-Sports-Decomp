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
extern int fn_82286BF0();
extern int fn_8265CA20();
extern unsigned int lbl_8327F844;


void fn_82487D88(int param_1)

{
  int iVar1;
  
  iVar1 = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    *(undefined4 *)(lbl_8327F844 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x458);
  if (iVar1 != 0) {
    fn_82286BF0(iVar1);
    fn_8265CA20(iVar1);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

