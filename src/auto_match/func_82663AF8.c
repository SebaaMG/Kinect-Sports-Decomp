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
extern int fn_82663B70();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


undefined8 fn_82663AF8(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iStack00000014;
  uint uStack0000001c;
  
  if (((param_2 != 0) &&
      (iStack00000014 = param_1, uStack0000001c = param_2, uVar1 = fn_82663B70(param_1),
      uVar1 <= uStack0000001c)) &&
     (iVar2 = fn_82663B70(iStack00000014),
     uStack0000001c < (uint)(iVar2 + *(int *)(iStack00000014 + 0x10) * 2))) {
    return 1;
  }
  return 0;
}

