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
extern int fn_82292AE8();
extern int fn_82536070();


void fn_82292C30(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = fn_82292AE8();
  if ((*(int *)(iVar1 + 0x50) != param_1) &&
     ((*(int *)(iVar1 + 0x50) != 2 || ((param_1 != 3 && (param_1 != 4)))))) {
    *(int *)(iVar1 + 0x50) = param_1;
    switch(param_1) {
    case 0:
      uVar2 = 0xffffffff821aa364;
      break;
    case 1:
      uVar2 = 0xffffffff821aa36c;
      break;
    case 2:
      uVar2 = 0xffffffff821aa374;
      break;
    case 3:
      uVar2 = 0xffffffff821aa384;
      break;
    case 4:
      uVar2 = 0xffffffff821aa394;
      break;
    case 5:
      uVar2 = 0xffffffff821aa3a8;
      break;
    case 6:
      uVar2 = 0xffffffff821aa3b8;
      break;
    case 7:
      uVar2 = 0xffffffff821aa3c8;
      break;
    case 8:
      uVar2 = 0xffffffff821aa3d4;
      break;
    case 9:
      uVar2 = 0xffffffff821aa3e4;
      break;
    case 10:
      uVar2 = 0xffffffff821aa3f8;
      break;
    case 0xb:
      uVar2 = 0xffffffff821aa40c;
      break;
    default:
      goto switchD_82292c9c_default;
    }
    fn_82536070(0xffffffff821aa2fc,uVar2);
  }
switchD_82292c9c_default:
  return;
}

