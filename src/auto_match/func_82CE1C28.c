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
extern int fn_82A2B798();
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_82CE1C28(undefined8 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4,
                       ulonglong param_5)

{
  int iVar2;
  longlong lVar1;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined4 *puStack_20;
  
  if ((0x535 < *param_3) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = 0;
    param_4[1] = 0;
    uStack_24 = *param_3;
    uStack_30 = param_2;
    uStack_2c = param_1;
    puStack_20 = param_4;
    iVar2 = XMsgStartIORequest(0xfb,0xb001b,param_5,&uStack_30,0x14);
    if (-1 < iVar2) {
      if ((param_5 & 0xffffffff) == 0) {
        lVar1 = fn_82A2B798();
        return -(ulonglong)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *param_3 = 0x536;
  return 0x7a;
}

