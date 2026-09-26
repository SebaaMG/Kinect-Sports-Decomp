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
extern int fn_82359C18();
extern int fn_824C8960();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0A1C;
extern unsigned int lbl_821C0A74;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


undefined4 *
fn_824C6AB0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined ***pppuStack_50;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821C0A1C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      uStack_5c = *param_4;
      uStack_58 = param_4[1];
      pppuStack_50 = &ppuStack_60;
      uStack_54 = param_4[2];
      ppuStack_60 = &lbl_821C0A74;
      fn_824C8960(puVar1 + 4,param_2,param_3,&ppuStack_60,param_5);
      fn_82359C18(&ppuStack_60);
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 4;
  return param_1;
}

