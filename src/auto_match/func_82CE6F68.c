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
extern int fn_82CE6978();
extern int fn_82CE7330();
extern int fn_82CF74E8();
extern int fn_82CF7638();
extern int fn_82CF93D0();
extern unsigned int lbl_821327E4;
extern unsigned int lbl_82132820;
extern unsigned int lbl_821328C4;
extern unsigned int lbl_8323B210;


void fn_82CE6F68(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_821328C4;
  puVar2 = param_1 + 0xc37;
  lbl_8323B210 = 0;
  lVar1 = 0x1f;
  do {
    puVar2 = puVar2 + -0x4c;
    *puVar2 = &lbl_821327E4;
    fn_82CF74E8(puVar2);
    fn_82CE6978(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  fn_82CF7638(param_1 + 0x267);
  fn_82CE6978(param_1 + 0x248);
  fn_82CF93D0(param_1 + 7);
  param_1[2] = &lbl_82132820;
  fn_82CE7330(param_1);
  return;
}

