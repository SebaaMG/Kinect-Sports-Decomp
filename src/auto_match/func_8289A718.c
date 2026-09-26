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
extern int fn_82899030();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82023ABC;
extern unsigned int lbl_82023AC0;
extern unsigned int lbl_82023C3C;


undefined4 *
fn_8289A718(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  
  fn_828BDDA0();
  *param_1 = &lbl_82023AC0;
  param_1[0x14] = &lbl_82023ABC;
  param_1[0x20] = *(undefined4 *)(param_2 + 0x18);
  param_1[0x21] = param_2;
  fn_82899030(param_1 + 0x22,param_3,param_4);
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[0x26] = &lbl_82023C3C;
  param_1[0x27] = *(undefined4 *)(iVar1 + 4);
  fn_828B5580(param_1 + 0x28,iVar1 + 8);
  param_1[0x2a] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x2b) = param_5;
  param_1[0x2c] = param_6;
  return param_1;
}

