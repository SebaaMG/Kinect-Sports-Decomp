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
extern int fn_822315A0();
extern int fn_822746B8();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_82359C18();
extern int fn_8247DD58();
extern int fn_824801F8();
extern int fn_8265CA20();
extern unsigned int lbl_8327F844;


void fn_8247EA88(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_822848B8();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar1);
    *(undefined4 *)(param_1 + 200) = 0;
  }
  fn_824801F8(param_1);
  if (*(int *)(param_1 + 0xb4) != 0) {
    fn_8229E090(*(int *)(param_1 + 0xb4),0,0);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    fn_8229E090(*(int *)(param_1 + 0xb8),0,0);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    fn_8229E090(*(int *)(param_1 + 0xbc),0,0);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    fn_822746B8(*(int *)(param_1 + 0xec),0);
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  iVar1 = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    *(undefined4 *)(lbl_8327F844 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    fn_8247DD58(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82359C18(param_1 + 0x88);
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_822315A0();
  }
  return;
}

