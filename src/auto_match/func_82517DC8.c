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
extern unsigned int *auStack_20;
extern int fn_82518070();
extern int fn_82895158();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_821C2838;
extern unsigned int lbl_821C2878;


undefined4 * fn_82517DC8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [8];
  
  fn_82895158();
  param_1[0x1a] = &lbl_82197CE0;
  param_1[0x1d] = 0;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1b] = param_1 + 0x1b;
  *param_1 = &lbl_821C2838;
  param_1[0x1a] = &lbl_821C2878;
  param_1[0x1e] = 0;
  fn_828B5580(auStack_20,param_2 + 4);
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x50);
  uVar2 = fn_828B55F8(auStack_20);
  fn_82518070(param_1,uVar1,uVar2);
  fn_828B55B0(auStack_20);
  return param_1;
}

