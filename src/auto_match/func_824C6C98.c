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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_3c;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int iStack_28;
extern unsigned int iStack_38;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C0A2C;
extern unsigned int uStack_30;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


int fn_824C6C98(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  
  uStack_30 = *param_2;
  fn_82365BD8(auStack_2c,param_2 + 1);
  uStack_40 = uStack_30;
  fn_82365BD8(auStack_3c,auStack_2c);
  puVar1 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821C0A2C;
    puVar1[1] = uStack_40;
    fn_82365BD8(puVar1 + 2,auStack_3c);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    if (iStack_38 != 0) {
      fn_822315A0();
    }
    if (iStack_28 != 0) {
      fn_822315A0();
    }
    if (param_2[2] != 0) {
      fn_822315A0();
    }
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

