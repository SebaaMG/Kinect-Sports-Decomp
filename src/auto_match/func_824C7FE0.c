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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8234D8D0();
extern int fn_824C6A00();
extern int fn_82529320();
extern int fn_8265CA20();


void fn_824C7FE0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_82529320(*(int *)(param_1 + 0xc),0);
  }
  fn_82230300(param_1 + 0x44,1,0);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    fn_8234D8D0(iVar1);
    fn_8265CA20(iVar1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_824C6A00();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_822315A0();
  }
  return;
}

