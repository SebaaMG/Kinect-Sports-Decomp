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
extern int fn_82BEC810();
extern int fn_82BFA920();
extern unsigned int lbl_820EBC10;


undefined4 * fn_82BF7940(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_130 [304];
  
  fn_82BE8CE0();
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &lbl_820EBC10;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      iVar1 = fn_82BFA920(param_3,param_4,acStack_130);
      if (iVar1 == 0) {
        return param_1;
      }
      param_3 = acStack_130;
    }
    uVar2 = fn_82BEC810(param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}

