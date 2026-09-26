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
extern int fn_82BC5758();
extern int fn_82BC5ED8();
extern unsigned int lbl_820E4CA0;


undefined4 * fn_82BC6268(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  fn_82BC5758();
  param_1[0x22] = 0;
  *param_1 = &lbl_820E4CA0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x5ac);
  puVar1 = (undefined4 *)fn_82B7BD28(uVar2,0x8c);
  *puVar1 = uVar2;
  if (puVar1 + 1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82BC5758(puVar1 + 1,param_2);
  }
  param_1[0x24] = uVar2;
  fn_82BC5ED8(param_1);
  return param_1;
}

