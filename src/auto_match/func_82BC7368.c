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
extern int fn_82BBFFC8();


undefined4 fn_82BC7368(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 4) - 1;
  if (uVar2 < *(uint *)(param_1 + 4)) {
    puVar3 = (undefined4 *)(uVar2 * 4 + *(int *)(param_1 + 8));
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  uVar1 = *puVar3;
  fn_82BBFFC8(param_1,(ulonglong)*(uint *)(param_1 + 4) - 1);
  return uVar1;
}

