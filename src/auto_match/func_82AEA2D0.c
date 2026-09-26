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
extern int fn_82AC8B10();
extern int fn_82AC8CE8();


undefined8 fn_82AEA2D0(uint *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((*param_1 & 0xfffffffe) + 0x24);
  if (((uVar3 & 1) == 0) && (uVar5 = (uVar3 & 0xfffffffe) - 0x28, uVar3 = uVar5, uVar5 != 0)) {
    while (uVar4 = uVar3, (*(uint *)(uVar4 + 0x24) & 1) == 0) {
      uVar1 = *(uint *)(uVar4 + 0x24) & 0xfffffffe;
      uVar3 = uVar1 - 0x28;
      if ((uVar3 == 0) || (((*(uint *)(uVar1 - 0x14) ^ *(uint *)(uVar4 + 0x14)) & 0x1fff) != 0))
      break;
    }
    *param_1 = uVar4;
    while (cVar2 = fn_82AC8B10(param_1 + 1,uVar5), cVar2 != '\0') {
      fn_82AC8CE8(param_1 + 1,uVar5);
      if (uVar5 == *param_1) {
        return 1;
      }
      if ((*(uint *)(uVar5 + 0x24) & 1) == 0) {
        uVar5 = (*(uint *)(uVar5 + 0x24) & 0xfffffffe) - 0x28;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return 0;
}

