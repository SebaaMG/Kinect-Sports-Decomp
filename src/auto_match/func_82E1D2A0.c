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
extern int fn_8265C9E0();
extern int fn_82E1D248();
extern int fn_82E1D818();
extern int fn_82E1E428();
extern int fn_82E1F8D8();
extern unsigned int lbl_8214B798;


undefined4 * fn_82E1D2A0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[5] = 0;
  *param_1 = &lbl_8214B798;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar1 = fn_8265C9E0(0x8c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82E1D818();
  }
  param_1[2] = uVar2;
  iVar1 = fn_8265C9E0(0x68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82E1E428();
  }
  param_1[3] = uVar2;
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82E1F8D8();
  }
  param_1[4] = uVar2;
  fn_82E1D248(param_1);
  return param_1;
}

