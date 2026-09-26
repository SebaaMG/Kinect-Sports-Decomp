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
extern int fn_8265C940();
extern int fn_82BD4160();
extern unsigned int lbl_83171DCC;
extern unsigned int lbl_83171DEC;


undefined8 fn_82BD4548(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined4 *)fn_8265C940(0x50,0x618a8011);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[8] = param_1;
    puVar1[9] = param_3;
    puVar1[0xf] = 0;
    puVar1[7] = 2;
    *puVar1 = &lbl_83171DCC;
    puVar1[5] = 10;
    puVar1[0x10] = 0;
    puVar1[1] = param_2;
    if (param_3 == 1) {
      if (*(int *)(param_2 + 0x48) != 0) {
        (*(code *)lbl_83171DEC)(puVar1);
      }
    }
    else {
      *(undefined1 *)(puVar1 + 0xf) = 0xff;
    }
    iVar2 = fn_8265C940(puVar1[5] << 3,0x618a0003);
    puVar1[10] = iVar2;
    if (iVar2 != 0) goto LAB_82bd4618;
  }
  uVar3 = 0xffffffff8007000e;
  fn_82BD4160(puVar1);
  puVar1 = (undefined4 *)0x0;
LAB_82bd4618:
  *param_4 = puVar1;
  return uVar3;
}

