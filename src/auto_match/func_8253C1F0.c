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
extern int fn_822B7E80();
extern int fn_8251E400();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8252B2E8();
extern int fn_8252CF08();
extern int fn_825339A0();
extern int fn_8253F378();
extern int fn_82599808();
extern int fn_8265CA20();


void fn_8253C1F0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1b8) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = *(undefined4 *)(param_1 + 0x34);
  }
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = *(undefined4 *)(param_1 + 0x3c);
  }
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  fn_82599808(param_1 + 0x40);
  if (*(int *)(param_1 + 0x1bc) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(int *)(param_1 + 0xb14) != 0) {
    fn_82522ED8();
    *(undefined4 *)(param_1 + 0xb14) = 0;
  }
  *(undefined4 *)(param_1 + 0x8ac) = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    if (*(int *)(param_1 + 0x184) != 0) {
      fn_8251FA58();
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  fn_82522ED8(*(undefined4 *)(param_1 + 0x188));
  *(undefined4 *)(param_1 + 0x188) = 0;
  fn_8252CF08(param_1);
  iVar1 = *(int *)(param_1 + 0x1ac);
  if (iVar1 != 0) {
    fn_822B7E80(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_8252B2E8(param_1);
  fn_825339A0(param_1);
  fn_8251E400(param_1 + 0x230);
  fn_8253F378(param_1);
  return;
}

