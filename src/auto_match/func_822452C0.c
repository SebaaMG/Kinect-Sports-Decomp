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
extern int fn_8223B8C8();
extern int fn_8223B930();
extern int fn_82240688();
extern int fn_82240DB8();
extern int fn_8288B300();
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197738;
extern unsigned int lbl_82197740;
extern unsigned int lbl_82197750;


undefined4 * fn_822452C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  fn_8288B300(param_1,1);
  *param_1 = &lbl_82197738;
  fn_8223B930(param_1 + 0xd);
  fn_8223B8C8(param_1 + 0x27);
  fn_82240DB8(param_1 + 0x41,1);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x41] = &lbl_82197740;
  fn_82240688(param_1 + 0x59);
  fn_82240688(param_1 + 0x6f);
  fn_82240DB8(param_1 + 0x85,2);
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x85] = &lbl_821970C0;
  fn_82240DB8(param_1 + 0x9b,1);
  param_1[0xb1] = 0;
  puVar1 = param_1 + 0xb3;
  param_1[0xb2] = 0;
  lVar2 = 0xe;
  param_1[0x9b] = &lbl_82197750;
  do {
    fn_8223B930(puVar1);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0x1a;
  } while (-1 < lVar2);
  puVar1 = param_1 + 0x239;
  lVar2 = 0xe;
  do {
    fn_82240688(puVar1);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0x16;
  } while (-1 < lVar2);
  return param_1;
}

