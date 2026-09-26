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
extern int fn_82C10B28();


undefined8 fn_82C2A538(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int aiStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 4) != 0) {
    for (aiStack_20[0] = *(int *)(iVar1 + 8); aiStack_20[0] != 0;
        aiStack_20[0] = *(int *)(aiStack_20[0] + 0x28)) {
      if (aiStack_20[0] == param_2) {
        if (aiStack_20[0] == *(int *)(iVar1 + 8)) {
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(aiStack_20[0] + 0x28);
        }
        if (aiStack_20[0] == *(int *)(iVar1 + 4)) {
          iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x24);
          *(int *)(iVar1 + 4) = iVar2;
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x28) = 0;
          }
        }
        else {
          if (*(int *)(aiStack_20[0] + 0x28) != 0) {
            *(undefined4 *)(*(int *)(aiStack_20[0] + 0x28) + 0x24) =
                 *(undefined4 *)(aiStack_20[0] + 0x24);
          }
          if (*(int *)(aiStack_20[0] + 0x24) != 0) {
            *(undefined4 *)(*(int *)(aiStack_20[0] + 0x24) + 0x28) =
                 *(undefined4 *)(aiStack_20[0] + 0x28);
          }
        }
        lVar4 = (ulonglong)*(uint *)(iVar1 + 0xc) - 1;
        *(int *)(iVar1 + 0xc) = (int)lVar4;
        if (lVar4 == 0) {
          *(undefined4 *)(iVar1 + 4) = 0;
          *(undefined4 *)(iVar1 + 8) = 0;
        }
        uVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,aiStack_20[0] + 0x2c);
        if (-1 < (int)uVar3) {
          uVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1f,aiStack_20);
        }
        return uVar3;
      }
    }
  }
  return 0xffffffff80500009;
}

