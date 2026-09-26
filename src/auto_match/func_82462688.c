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
extern int fn_82298138();
extern int fn_825604A0();
extern int fn_8265CA20();
extern int fn_82F4EC30();
extern int fn_82F52C20();
extern unsigned int lbl_821BBDC4;
extern unsigned int lbl_821C2CCC;


void fn_82462688(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_1 = &lbl_821BBDC4;
  fn_825604A0(param_1 + 0x10);
  iVar3 = param_1[0x92];
  if (iVar3 != 0) {
    fn_82298138(iVar3);
    fn_8265CA20(iVar3);
    param_1[0x92] = 0;
  }
  iVar3 = param_1[0x94];
  if (iVar3 != 0) {
    uVar2 = fn_82F4EC30(0);
    fn_82F52C20(uVar2,iVar3,1);
    param_1[0x94] = 0;
  }
  iVar3 = param_1[10];
  if (iVar3 != 0) {
    iVar1 = param_1[0xb];
    for (; iVar3 != iVar1; iVar3 = iVar3 + 8) {
      if (*(int *)(iVar3 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

