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
extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196AE4;
extern unsigned int lbl_82196B30;
extern unsigned int lbl_82196B78;
extern unsigned int lbl_82196D38;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;


undefined4 * fn_82232728(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  fn_8288B668();
  *param_1 = &lbl_82196AE4;
  fn_8289D7E8(param_1 + 0x12,5);
  param_1[0x12] = &lbl_82196B30;
  fn_8289D7E8(param_1 + 0x27,3);
  puVar2 = param_1 + 0x3c;
  lVar1 = 0x13;
  param_1[0x27] = &lbl_82196B78;
  do {
    fn_8289D7E8(puVar2,4);
    *puVar2 = &lbl_82196D38;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x1e0,0);
  param_1[0x1e0] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x1f5,0);
  param_1[0x1f5] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x20a,4);
  param_1[0x20a] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x21f,4);
  param_1[0x21f] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x234,3);
  param_1[0x234] = &lbl_82196B78;
  return param_1;
}

