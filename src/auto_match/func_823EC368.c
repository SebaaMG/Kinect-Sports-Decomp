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
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823D1440();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B796C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_8c;


void fn_823EC368(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_30 [48];
  
  uStack_58 = *(undefined4 *)(param_1 + 4);
  uStack_8c = 0;
  ppuStack_90 = (undefined **)fn_823D1440;
  uStack_60 = 0x823d144000000000;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_4;
  puVar1 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B796C;
    fn_82F68CC0(puVar1 + 4,&uStack_60,0x40);
    puStack_70 = puVar1;
    fn_8227CB30((ulonglong)*(uint *)(param_1 + 4) + 0xb00,auStack_80);
    fn_82359C18(auStack_80);
    return;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

