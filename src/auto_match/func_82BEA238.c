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
extern int fn_82BE19A0();
extern int fn_82BE5240();
extern int fn_82BEB750();
extern unsigned int lbl_820EAB18;


undefined4 * fn_82BEA238(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  fn_82BEB750(param_1,0xffffffff820eab24);
  *param_1 = &lbl_820EAB18;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar2 = 300;
  }
  else {
    iVar1 = fn_82BE19A0(param_2);
    param_1[0xe] = iVar1;
    if (iVar1 != 0) {
      return param_1;
    }
    uVar2 = 0x65;
  }
  fn_82BE5240(param_1,uVar2,0xffffffff82196582);
  param_1[4] = 0;
  return param_1;
}

