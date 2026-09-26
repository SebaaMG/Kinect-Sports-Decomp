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
extern int fn_8265C9E0();
extern int fn_82A1E7D8();
extern int fn_82E21B08();


void fn_82E1E768(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_82A1E7D8(*(undefined4 *)(param_1 + 0x3c));
  uVar1 = fn_8265C9E0(0xc);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82E21B08(uVar1,param_2,param_3);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 1;
    do {
      puVar3 = (undefined4 *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 8);
    } while (iVar4 != 0);
    *puVar3 = uVar2;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}

