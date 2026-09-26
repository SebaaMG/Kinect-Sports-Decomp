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
extern int fn_8229A230();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821B7D68;


void fn_824050F0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &lbl_821B7D68;
  fn_82672660(param_1[0x44],param_1 + 0x44);
  fn_8229A230(param_1 + 0x44);
  if (param_1[0x45] != 0) {
    fn_822315A0();
  }
  fn_82672660(param_1[0x3f],param_1 + 0x30);
  if (param_1[0x40] != 0) {
    fn_822315A0();
  }
  if (param_1[0x2c] != 0) {
    fn_822315A0();
  }
  if (param_1[0x2a] != 0) {
    fn_822315A0();
  }
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    iVar1 = param_1[8];
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[7]);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &lbl_821AC5E0;
  return;
}

