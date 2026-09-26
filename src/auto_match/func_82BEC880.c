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
extern int fn_82BE8CE0();
extern int fn_82BE8D28();
extern int fn_82BEC770();
extern int fn_82BEC810();
extern int fn_82BF7250();
extern unsigned int lbl_820EB0C8;


undefined4 * fn_82BEC880(undefined4 *param_1,char *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_82BE8CE0();
  param_1[2] = 0;
  *param_1 = &lbl_820EB0C8;
  fn_82BF7250(param_1 + 3,10);
  fn_82BEC770(param_1 + 0xb);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_4;
  param_1[0x14] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = fn_82BEC810(param_2);
    param_1[2] = iVar1;
    if (iVar1 != 0) goto LAB_82bec90c;
  }
  param_1[0x14] = 2;
LAB_82bec90c:
  if (param_3 < 0x1001) {
    param_1[0x10] = param_3 << 0x14;
  }
  else {
    param_1[0x14] = 2;
  }
  iVar1 = param_1[0x13];
  if (iVar1 == 0) {
    param_1[0x14] = 2;
  }
  else {
    fn_82BE8D28(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4);
  }
  return param_1;
}

