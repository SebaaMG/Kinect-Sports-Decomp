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


undefined8 fn_82A1BFB8(ulonglong param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar2;
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar4;
  
  uVar2 = XamGetSystemVersion();
  if (uVar2 < 0x20096b00) {
    if ((param_1 & 0xffffffff) == 0xff) {
      uVar4 = 0;
      do {
        iVar3 = XamUserGetSigninState(uVar4);
        if (iVar3 == 1) goto LAB_82a1c010;
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < 4);
    }
    else {
      iVar3 = XamUserGetSigninState(param_1);
      if (iVar3 == 1) {
LAB_82a1c010:
        *param_3 = 0;
        return 0x4dd;
      }
    }
  }
  uVar1 = XamUserCheckPrivilege(param_1,param_2,param_3);
  return uVar1;
}

