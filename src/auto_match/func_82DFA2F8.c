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
extern int fn_82CFF8D0();


void fn_82DFA2F8(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x10));
      if ((*(uint *)(iVar1 + 0x18) & 0x80000000) == 0) {
        uVar2 = fn_82CFF8D0(*(undefined4 *)(iVar1 + 0x10),*(uint *)(iVar1 + 0x18) << 5);
        (**(code **)(*param_2 + 0x14))
                  (param_2,3,0xffffffff821b8000,*(undefined4 *)(iVar1 + 0x10),
                   *(int *)(iVar1 + 0x14) << 5,uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  return;
}

