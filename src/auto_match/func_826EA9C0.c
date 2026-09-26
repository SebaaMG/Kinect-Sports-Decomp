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
extern int fn_827BE2E8();
extern int fn_827C19D0();
extern int fn_82F6C150();
extern unsigned int iStack00000014;


undefined8 fn_826EA9C0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack00000014;
  undefined4 *puStack0000001c;
  
  if (*(char *)(param_1 + 0x309) == '\0') {
    iStack00000014 = param_1;
    puStack0000001c = param_2;
    iVar3 = fn_82F6C150(*(undefined4 *)(param_1 + 0x304));
    iVar1 = iStack00000014;
    if (iVar3 == 0) {
      uVar4 = fn_827BE2E8(iStack00000014 + 8);
      *puStack0000001c = uVar4;
      uVar2 = 1;
    }
    else {
      fn_827C19D0(iStack00000014 + 8);
      *(undefined1 *)(iVar1 + 0x308) = 0;
      uVar2 = 0;
      *(undefined1 *)(iVar1 + 0x309) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

