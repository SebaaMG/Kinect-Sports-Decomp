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
extern int fn_8262FFB0();
extern int fn_82A93F08();


void fn_82A93F70(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = fn_8262FFB0();
  iVar1 = (int)param_2;
  if (iVar2 < 7) {
    if (iVar2 == 6) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
      return;
    }
    if (iVar2 == 1) {
      uVar3 = *(uint *)(param_1 + 0x18) & 3 |
              (*(uint *)(param_1 + 0x18) & 0xfffffffc) + iVar1 & 0xfffffffc;
      goto LAB_82a94028;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return;
      }
      goto LAB_82a93ffc;
    }
  }
  else if ((iVar2 != 7) && (iVar2 != 8)) {
    if (iVar2 < 0x11) {
      return;
    }
    if (0x14 < iVar2) {
      return;
    }
LAB_82a93ffc:
    fn_82A93F08(param_1,param_2,
                  -(ulonglong)((*(uint *)(param_1 + 0x30) & 0xfffff000) != 0) & param_2);
    return;
  }
  uVar3 = iVar1 + *(int *)(param_1 + 0x18);
LAB_82a94028:
  *(uint *)(param_1 + 0x18) = uVar3;
  return;
}

