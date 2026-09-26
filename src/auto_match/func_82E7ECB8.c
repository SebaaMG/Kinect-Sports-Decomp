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


undefined8 fn_82E7ECB8(ushort *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (int *)0x0)) {
    switch(*param_1 & 0xfff) {
    case 0:
    case 1:
      iVar1 = 0;
      break;
    case 2:
    case 0xb:
    case 0x12:
      iVar1 = 2;
      break;
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x1e:
    case 0x1f:
      iVar1 = 4;
      break;
    case 5:
    case 6:
    case 7:
    case 0x14:
    case 0x15:
    case 0x40:
    case 0x41:
      iVar1 = 8;
      break;
    case 0xc:
    case 0x48:
      iVar1 = (-(uint)((*param_1 & 0x1000) != 0) & 0xc) + 4;
      break;
    default:
      return 0xffffffffc00d36e8;
    case 0x10:
    case 0x11:
      iVar1 = 1;
    }
    *param_2 = iVar1;
    return 0;
  }
  return 0xffffffff80004003;
}

