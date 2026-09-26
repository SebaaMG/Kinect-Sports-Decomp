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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D7E1E0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xd8) & 0x3fffffff;
  if ((uVar2 != 0) && ((*(uint *)(param_1 + 0xd0) & 0xf) == 0)) {
    return;
  }
  uVar2 = uVar2 + 1;
  if (uVar2 < 4) {
    uVar2 = 4;
  }
  iVar1 = fn_82CE5410();
  if ((*(uint *)(param_1 + 0xd8) & 0x3fffffff) < uVar2) {
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1 + 0xd0,uVar2,4);
  }
  return;
}

