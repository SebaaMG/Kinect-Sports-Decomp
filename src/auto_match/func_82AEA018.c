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
extern int fn_82AE9DE0();
extern int fn_82F68CC0();


void fn_82AEA018(uint *param_1,longlong param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  fn_82F68CC0(param_1 + 1,param_2 + 4,0x34);
  while (uVar1 = param_4, uVar2 = *(uint *)((uVar1 & 0xfffffffe) + 0x24), (uVar2 & 1) == 0) {
    uVar2 = uVar2 & 0xfffffffe;
    param_4 = uVar2 - 0x28;
    if ((param_4 == 0) || (((*(uint *)(uVar2 - 0x14) ^ *(uint *)(uVar1 + 0x14)) & 0x1fff) != 0))
    break;
  }
  *param_1 = uVar1;
  uVar2 = -(uint)((*(uint *)(param_3 + 4) & 1) == 0) & *(uint *)(param_3 + 4);
  if (uVar2 != uVar1) {
    do {
      fn_82AE9DE0(param_1 + 1,uVar2);
      uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 0x28);
      uVar2 = -(uint)((uVar2 & 1) == 0) & uVar2;
    } while (uVar2 != *param_1);
  }
  return;
}

