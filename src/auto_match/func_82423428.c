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
extern int fn_824248C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B85D0;
extern unsigned int lbl_821B86B0;


undefined4 * fn_82423428(undefined4 *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0xb];
  *param_1 = &lbl_821B86B0;
  if (iVar2 != param_1[0xc]) {
    do {
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 != 0) {
        fn_824248C8(iVar1);
        fn_8265CA20(iVar1);
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != param_1[0xc]);
  }
  iVar2 = param_1[0xb];
  if (iVar2 != 0) {
    for (; iVar2 != param_1[0xc]; iVar2 = iVar2 + 0x10) {
    }
    fn_8265CA20();
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    for (; iVar2 != param_1[8]; iVar2 = iVar2 + 0x10) {
    }
    fn_8265CA20();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  fn_824248C8(param_1 + 3);
  *param_1 = &lbl_821B85D0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

