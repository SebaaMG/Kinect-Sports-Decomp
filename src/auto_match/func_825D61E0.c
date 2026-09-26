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
extern int fn_82526C70();
extern unsigned int lbl_831BFEE8;


undefined8 fn_825D61E0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_1;
  if ((iVar1 != 0) && ((iVar1 < 0x3e4 || ((0x3e5 < iVar1 && (iVar1 != 0x4de)))))) {
    iVar2 = 0;
    iVar3 = lbl_831BFEE8;
    while (iVar3 != 0) {
      if (iVar3 == iVar1) {
        return param_1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = (&lbl_831BFEE8)[iVar2 * 3];
    }
    fn_82526C70(0xffffffff83297a20,0x10,0xffffffff821aa66c,param_1);
  }
  return param_1;
}

