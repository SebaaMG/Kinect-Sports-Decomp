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
extern int fn_82F8F648();
extern int fn_82F8FB10();
extern int fn_82F8FBA8();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


undefined8 fn_82F8F420(int param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iStack00000014;
  uint uStack0000001c;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iStack00000014 = param_1;
    uStack0000001c = param_2;
    uVar2 = fn_82F8F648(param_1);
    if (uVar2 < uStack0000001c) {
      fn_82F8FB10();
    }
    else {
      uVar3 = fn_82F8FBA8(iStack00000014,uStack0000001c,0);
      *(undefined4 *)(iStack00000014 + 4) = uVar3;
      *(undefined4 *)(iStack00000014 + 8) = *(undefined4 *)(iStack00000014 + 4);
      *(uint *)(iStack00000014 + 0xc) = *(int *)(iStack00000014 + 4) + uStack0000001c * 4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

