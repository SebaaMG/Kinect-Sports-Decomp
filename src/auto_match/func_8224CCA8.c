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
extern int fn_8225C590();
extern int fn_8225D580();
extern int fn_82292AE8();
extern int fn_823AB158();
extern int fn_8251C3C0();
extern int fn_8288B760();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82197CE8;
extern unsigned int lbl_82197D3C;
extern unsigned int lbl_821CC160;


void fn_8224CCA8(undefined4 *param_1)

{
  char cVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_1 = &lbl_82197CE8;
  param_1[0x1c] = &lbl_82197D3C;
  cVar4 = fn_8288B760();
  if (cVar4 == '\0') {
    uVar1 = fn_823AB158(param_1);
    uVar2 = fn_8225C590();
    fn_8225D580(uVar2,uVar1);
    iVar3 = param_1[0x219];
    if (iVar3 != 0) {
      uVar1 = fn_8225C590();
      fn_8225D580(uVar1,iVar3);
      param_1[0x219] = 0;
    }
    if ((*(char *)(param_1 + 0x11d) != '\0') &&
       (iVar3 = fn_82292AE8(), *(float *)(iVar3 + 0x5c) == lbl_821CC160)) {
      *(undefined4 *)(iVar3 + 0x5c) = lbl_82005748;
    }
  }
  fn_8251C3C0(param_1);
  return;
}

