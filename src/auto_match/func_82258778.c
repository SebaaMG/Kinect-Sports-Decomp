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
extern int fn_82232540();
extern int fn_8223B930();
extern int fn_82240DB8();
extern int fn_8265C9E0();
extern unsigned int lbl_82196BD0;
extern unsigned int lbl_82198334;
extern unsigned int lbl_82198390;
extern unsigned int lbl_821983B0;


undefined4 * fn_82258778(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  fn_82232540();
  *param_1 = &lbl_82196BD0;
  fn_8223B930(param_1 + 0x267);
  fn_8223B930(param_1 + 0x281);
  *param_1 = &lbl_821983B0;
  fn_82240DB8(param_1 + 0x29b,1);
  param_1[0x29b] = &lbl_82198390;
  param_1[0x29d] = 7;
  param_1[0x29f] = 5;
  puVar1 = (undefined1 *)fn_8265C9E0(5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  param_1[0x29e] = puVar1;
  param_1[0x29b] = &lbl_82198334;
  return param_1;
}

