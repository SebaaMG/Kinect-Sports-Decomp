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
extern int fn_82B7BD28();
extern int fn_82BB5420();
extern unsigned int lbl_820E0374;
extern unsigned int lbl_820E0394;
extern unsigned int lbl_820E03B4;


undefined4 * fn_82BB5EF0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0;
  *param_1 = &lbl_820E03B4;
  puVar1 = (undefined4 *)fn_82B7BD28(param_2,0xc);
  puVar2 = puVar1 + 1;
  *puVar1 = (int)param_2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    *puVar2 = &lbl_820E0374;
  }
  param_1[2] = puVar2;
  puVar1 = (undefined4 *)fn_82B7BD28(param_2,0x10);
  puVar2 = puVar1 + 1;
  *puVar1 = (int)param_2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    *puVar2 = &lbl_820E0394;
  }
  param_1[3] = puVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82BB5420(param_1);
  return param_1;
}

