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
extern unsigned int fStack0000001c;
extern int fn_82230040();
extern int fn_82359C18();
extern int fn_824C8258();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821BEE5C;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_824942C0(double param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float fStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 auStack_30 [16];
  undefined4 *puStack_20;
  
  fStack0000001c = (float)param_1;
  puStack_3c = (undefined1 *)&stack0x0000001c;
  puStack_38 = (undefined1 *)&stack0x00000024;
  puStack_34 = (undefined1 *)&stack0x0000002c;
  uStack00000024 = param_4;
  uStack0000002c = param_5;
  puStack_20 = (undefined4 *)fn_8265C9E0(0x14);
  if (puStack_20 != (undefined4 *)0x0) {
    *puStack_20 = &lbl_821BEE5C;
    puStack_20[1] = uStack_40;
    puStack_20[2] = puStack_3c;
    puStack_20[3] = puStack_38;
    puStack_20[4] = puStack_34;
    fn_824C8258(*(undefined4 *)(param_2 + 0x14),auStack_30);
    fn_82359C18(auStack_30);
    return;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

