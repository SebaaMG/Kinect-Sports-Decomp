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
extern int fn_824C1DE0();
extern int fn_82520D38();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821BD718;
extern int (*lbl_83276778)();
extern unsigned int uStack_24;


undefined4 * fn_8247DC20(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  
  fn_82520D38();
  *param_1 = &lbl_821BD718;
  puVar2 = param_1 + 10;
  param_1[10] = 0;
  puVar1 = (undefined8 *)fn_8265C9E0(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar2 = puVar1;
    *puVar1 = 0;
    *(undefined4 **)*puVar2 = puVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    fn_824C1DE0(param_1 + 0x12,0);
    param_1[0x36] = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
    if (lbl_83276778 != (code *)0x0) {
      (*lbl_83276778)(0,0,0,0xffffffff821bd678,0xffffffff821bd5f0,0x4d);
    }
    return param_1;
  }
  uStack_24 = 0;
  ppuStack_28 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_28);
}

