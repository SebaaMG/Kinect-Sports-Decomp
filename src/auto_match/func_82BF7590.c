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
extern int fn_82BF7468();


undefined8 fn_82BF7590(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar3 = *param_2 >> 4;
    trapWord(6,(ulonglong)uVar1,0);
    piVar4 = (int *)((uVar3 - (uVar3 / uVar1) * uVar1) * 4 + *(int *)(param_1 + 8));
    for (iVar2 = *piVar4; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      if ((*(uint *)(iVar2 + 0x14) == uVar3) && (*(uint *)(iVar2 + 8) == *param_2)) {
        *piVar4 = *(int *)(iVar2 + 0x10);
        fn_82BF7468();
        return 1;
      }
      piVar4 = (int *)(iVar2 + 0x10);
    }
  }
  return 0;
}

