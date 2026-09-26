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
extern int fn_8265CA20();
extern int fn_828B3E88();
extern int fn_828D7660();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


void fn_828E2248(undefined4 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = param_2 & 0xffffffff;
  while( true ) {
    if (uVar1 == 0) {
      return;
    }
    puStack_3c = (undefined8 *)0x0;
    puVar2 = (undefined8 *)fn_8265C9E0(8);
    if (puVar2 == (undefined8 *)0x0) break;
    *puVar2 = 0;
    *(undefined8 ***)puVar2 = &puStack_3c;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_3c = puVar2;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = uStack_40;
      fn_828D7660(param_1 + 1,&puStack_3c);
    }
    fn_828B3E88(&puStack_3c);
    fn_8265CA20(puStack_3c);
    param_2 = param_2 - 1;
    param_1 = param_1 + 7;
    uVar1 = param_2;
  }
  uStack_44 = 0;
  ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_48);
}

