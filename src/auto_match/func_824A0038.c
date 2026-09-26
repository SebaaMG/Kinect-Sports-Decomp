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
extern unsigned int *auStack_28;
extern int fn_82230040();
extern int fn_824A0AD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_824A0038(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [40];
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 100);
    puVar1[1] = *(undefined4 *)(param_1 + 100);
    puVar1[2] = *(undefined4 *)(param_1 + 100);
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = param_2;
      puVar1[4] = param_3;
    }
    fn_824A0AD8(auStack_28,param_1 + 0x60);
    return;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

