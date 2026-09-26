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
extern int fn_8223B930();
extern int fn_8223BDA8();
extern int fn_8223C138();
extern int fn_822405D0();
extern int fn_82240688();
extern int fn_82240730();
extern int fn_82240DB8();
extern int fn_82240E68();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_821970D0;
extern unsigned int lbl_821970F0;
extern unsigned int lbl_821972AC;
extern unsigned int lbl_821972BC;
extern unsigned int lbl_82197710;
extern unsigned int lbl_82197718;


undefined4 * fn_82244CE8(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  fn_82240730();
  *param_1 = &lbl_82197710;
  fn_82240DB8(param_1 + 0xbf,1);
  param_1[0xc1] = 8;
  param_1[0xbf] = &lbl_821970F0;
  fn_82240E68(param_1 + 0xc0,0,0);
  param_1[0xbf] = &lbl_821970F0;
  fn_82240DB8(param_1 + 0xd5,1);
  lVar1 = 7;
  param_1[0xd7] = 7;
  param_1[0xd9] = 1;
  param_1[0xd8] = 0;
  puVar2 = param_1 + 0xeb;
  param_1[0xd5] = &lbl_82197718;
  lVar3 = 7;
  do {
    fn_8223B930(puVar2);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x1a;
  } while (-1 < lVar3);
  fn_82240DB8(param_1 + 0x1bb,1);
  param_1[0x1bb] = &lbl_821970F0;
  param_1[0x1bd] = 8;
  fn_82240E68(param_1 + 0x1bc,0,0);
  param_1[0x1bb] = &lbl_821970F0;
  fn_8223BDA8(param_1 + 0x1d1,1);
  param_1[0x1d1] = &lbl_821972AC;
  fn_8223C138(param_1 + 0x1e7,1);
  param_1[0x1e7] = &lbl_821972BC;
  fn_822405D0(param_1 + 0x1fd,1);
  param_1[0x1fd] = &lbl_821970D0;
  fn_82240DB8(param_1 + 0x215,1);
  param_1[0x217] = 7;
  param_1[0x219] = 1;
  puVar2 = param_1 + 0x22b;
  param_1[0x218] = 0;
  param_1[0x215] = &lbl_82197718;
  do {
    fn_8223B930(puVar2);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x1a;
  } while (-1 < lVar1);
  fn_82240DB8(param_1 + 0x2fb,3);
  param_1[0x2fd] = 0;
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  param_1[0x2fb] = &lbl_821970C0;
  fn_822405D0(param_1 + 0x311,1);
  param_1[0x311] = &lbl_821970D0;
  fn_82240688(param_1 + 0x329);
  return param_1;
}

