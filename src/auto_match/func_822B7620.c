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
extern int fn_822C8860();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int iStack_38;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ACA0C;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_822B7620(int param_1)

{
  undefined4 *puVar1;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_40;
  int iStack_38;
  
  iStack_38 = *(int *)(param_1 + 0x114);
  if (iStack_38 != 0) {
    uStack_4c = 0;
    ppuStack_50 = (undefined **)fn_822C8860;
    uStack_40 = 0x822c886000000000;
    fn_82359C18(param_1 + 0x140);
    puVar1 = (undefined4 *)fn_8265C9E0(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    *puVar1 = &lbl_821ACA0C;
    fn_82F68CC0(puVar1 + 2,&uStack_40,0x18);
    *(undefined4 **)(param_1 + 0x150) = puVar1;
  }
  return;
}

