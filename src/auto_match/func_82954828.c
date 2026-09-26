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


undefined8 fn_82954828(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(int *)(param_2 + 0x14) != -1) &&
     (iVar2 = *(int *)(*(int *)(param_2 + 0x14) * 4 + *(int *)(param_1 + 0x14)),
     (*(uint *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 8) != 0)) {
    uVar1 = *(uint *)(iVar2 + 0x10);
    uVar3 = *(uint *)(iVar2 + 0xc) & 0x7ff;
    uVar4 = uVar3 | 0xb0001000;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        uVar4 = uVar3 | 0xb0551000;
      }
      else if (uVar1 < 3) {
        uVar4 = uVar3 | 0xb0aa1000;
      }
      else if (uVar1 == 3) {
        uVar4 = uVar3 | 0xb0ff1000;
      }
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar4 = uVar4 | 0xd000000;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar4;
  }
  return 0;
}

