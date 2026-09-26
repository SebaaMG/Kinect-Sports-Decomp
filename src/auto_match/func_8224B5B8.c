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
extern int fn_8223AAC0();
extern unsigned int lbl_82197A6C;


undefined4 *
fn_8224B5B8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  param_1[1] = 0;
  *param_1 = &lbl_82197A6C;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar1 = param_2[1];
  uVar2 = *param_2;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[8] != 0) {
        fn_822315A0();
      }
      param_1[8] = iVar1;
      param_1[7] = uVar2;
    }
  }
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = param_3[1];
  uVar2 = *param_3;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[10] != 0) {
        fn_822315A0();
      }
      param_1[10] = iVar1;
      param_1[9] = uVar2;
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar1 = param_4[1];
  uVar2 = *param_4;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0xc] != 0) {
        fn_822315A0();
      }
      param_1[0xc] = iVar1;
      param_1[0xb] = uVar2;
    }
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar2 = *param_5;
  iVar1 = param_5[1];
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      if (param_1[0xe] != 0) {
        fn_822315A0();
      }
      param_1[0xe] = iVar1;
      param_1[0xd] = uVar2;
    }
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar1 = param_6[1];
  uVar2 = *param_6;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0x10] != 0) {
      fn_822315A0();
    }
    param_1[0x10] = iVar1;
    param_1[0xf] = uVar2;
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

