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
extern int fn_8223BC88();
extern int fn_82897D88();
extern unsigned int lbl_82196A34;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_821970D0;
extern unsigned int lbl_821970F0;
extern unsigned int lbl_821972AC;
extern unsigned int lbl_821972BC;
extern unsigned int lbl_82197534;
extern unsigned int lbl_82197710;
extern unsigned int lbl_82197718;


void fn_82244E80(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_82197710;
  param_1[0x329] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x329);
  param_1[0x311] = &lbl_821970D0;
  fn_82897D88(param_1 + 0x311);
  param_1[0x2fb] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x2fb);
  lVar1 = 7;
  puVar2 = param_1 + 0x2fb;
  do {
    puVar2 = puVar2 + -0x1a;
    *puVar2 = &lbl_82197534;
    fn_82897D88(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  param_1[0x215] = &lbl_82197718;
  fn_82897D88(param_1 + 0x215);
  param_1[0x1fd] = &lbl_821970D0;
  fn_82897D88(param_1 + 0x1fd);
  param_1[0x1e7] = &lbl_821972BC;
  fn_82897D88(param_1 + 0x1e7);
  param_1[0x1d1] = &lbl_821972AC;
  fn_82897D88(param_1 + 0x1d1);
  param_1[0x1bb] = &lbl_821970F0;
  fn_82897D88(param_1 + 0x1bb);
  puVar2 = param_1 + 0x1bb;
  lVar1 = 7;
  do {
    puVar2 = puVar2 + -0x1a;
    *puVar2 = &lbl_82197534;
    fn_82897D88(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  param_1[0xd5] = &lbl_82197718;
  fn_82897D88(param_1 + 0xd5);
  param_1[0xbf] = &lbl_821970F0;
  fn_82897D88(param_1 + 0xbf);
  *param_1 = &lbl_82196A34;
  fn_8223BC88(param_1);
  return;
}

