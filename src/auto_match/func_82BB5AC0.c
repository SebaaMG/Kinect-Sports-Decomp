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
extern int fn_82AB15D0();


undefined8 fn_82BB5AC0(int *param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0344,0xffffffff820e0168,0x56c);
  }
  if (param_1[7] < *(int *)(param_2 + 0x20)) {
    uVar1 = 0;
  }
  else {
    cVar2 = (**(code **)(**(int **)(param_2 + 0x28) + 0x18))();
    if (((cVar2 == '\0') && (0 < *(int *)(param_2 + 0x3c))) &&
       (*(int *)(param_2 + 0xc) <= param_1[0x1c])) {
      iVar6 = param_1[2];
      iVar5 = *(int *)(iVar6 + 0x10);
      if (*(int *)(iVar6 + 0x14) < iVar5) {
        iVar3 = *(int *)(iVar6 + 0x18);
      }
      else {
        uVar4 = *(int *)(iVar6 + 0x14) + iVar5;
        iVar5 = *(int *)(iVar6 + 0x18);
        iVar3 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
      }
      if (param_1[0x1b] < iVar3 + iVar5) {
        iVar5 = *(int *)(iVar6 + 0x10);
        if (*(int *)(iVar6 + 0x14) < iVar5) {
          iVar6 = *(int *)(iVar6 + 0x18);
        }
        else {
          uVar4 = *(int *)(iVar6 + 0x14) + iVar5;
          iVar5 = *(int *)(iVar6 + 0x18);
          iVar6 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
        }
        iVar6 = (iVar6 + iVar5) - *(int *)(param_2 + 0x18);
      }
      else {
        iVar6 = param_1[0x1b] - *(int *)(param_2 + 0x14);
      }
      if (*(int *)(*param_1 + 0xaa8) < iVar6) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

