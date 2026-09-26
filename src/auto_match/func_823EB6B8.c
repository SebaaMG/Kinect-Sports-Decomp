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
extern unsigned int *auStack_30;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823D17A0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B781C;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_823EB6B8(int param_1)

{
  undefined4 uVar1;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 *puStack_20;
  
  uVar1 = (((U64)(uStack_40) >> 0) & 0xFFFFFFFF);
  uStack_38 = *(undefined4 *)(param_1 + 4);
  uStack_4c = 0;
  ppuStack_50 = (undefined **)fn_823D17A0;
  uStack_40 = 0x823d17a000000000;
  puStack_20 = (undefined4 *)fn_8265C9E0(0x18);
  if (puStack_20 != (undefined4 *)0x0) {
    *puStack_20 = &lbl_821B781C;
    puStack_20[2] = uVar1;
    puStack_20[3] = (((U64)(uStack_40) >> 32) & 0xFFFFFFFF);
    puStack_20[4] = uStack_38;
    puStack_20[5] = uStack_34;
    fn_8227CB30((ulonglong)*(uint *)(param_1 + 4) + 0xce0,auStack_30);
    fn_82359C18(auStack_30);
    return;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

