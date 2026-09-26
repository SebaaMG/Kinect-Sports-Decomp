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
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CFD5A8();
extern int fn_82CFD778();


undefined8 fn_82E19FD8(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = 0xffffffffffffffff;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    uVar1 = fn_82CFD778(param_1);
    break;
  case 0x13:
    uVar1 = fn_82E19FD8(param_1,*(undefined1 *)(param_1 + 0xd),param_3);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x21:
    uVar1 = param_3;
    break;
  case 0x19:
    uVar1 = 1;
    uVar4 = fn_82CFD5A8(param_1);
    lVar5 = 0;
    iVar3 = fn_82CEAE80();
    if (0 < iVar3) {
      do {
        iVar3 = fn_82CEAEA8(uVar4,lVar5);
        uVar2 = fn_82E19FD8(iVar3,*(undefined1 *)(iVar3 + 0xc),param_3);
        if ((int)uVar1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        lVar5 = lVar5 + 1;
        iVar3 = fn_82CEAE80(uVar4);
      } while ((int)lVar5 < iVar3);
    }
  }
  if ((*(ushort *)(param_1 + 0x10) & 0x180) != 0) {
    uVar4 = 0x10;
    if ((*(ushort *)(param_1 + 0x10) & 0x180) != 0x100) {
      uVar4 = 8;
    }
    if ((int)uVar1 < (int)uVar4) {
      uVar1 = uVar4;
    }
  }
  return uVar1;
}

