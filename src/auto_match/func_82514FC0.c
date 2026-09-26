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
extern int fn_825154B8();
extern int fn_825156F8();


void fn_82514FC0(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = fn_825154B8();
  iVar3 = fn_825156F8(uVar2,uVar4);
  uVar4 = (**(code **)(iVar3 + 0x24))();
  puVar1 = *(undefined4 **)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c0) = uVar4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

