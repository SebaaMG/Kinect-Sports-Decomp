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
extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B2C44;
extern unsigned int uStack_1c;


undefined4 * fn_823660F8(int param_1,undefined4 *param_2)

{
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)fn_8265C9E0(8);
    if (param_2 == (undefined4 *)0x0) {
      uStack_1c = 0;
      ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_20);
    }
  }
  *param_2 = &lbl_821B2C44;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return param_2;
}

