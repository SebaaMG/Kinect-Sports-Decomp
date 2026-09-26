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
extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817870();
extern int fn_8284FD98();
extern unsigned int uStack_28;


void fn_825B0BD0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int aiStack_30 [2];
  ulonglong uStack_28;
  
  fn_828176F0(*(undefined4 *)(param_1 + 0x124),0xffffffff821c7b34,aiStack_30);
  if ((aiStack_30[0] != 0) && (lVar3 = fn_82817868(), lVar3 != 0)) {
    iVar4 = fn_8284FD98(param_1);
    *(uint *)(param_2 + 0x20) = iVar4 + ((int)lVar3 + 0xfU & 0xfffffff0) + *(int *)(param_2 + 0x20);
    fn_828176F0(*(undefined4 *)(param_1 + 0x124),0xffffffff821c7b44,aiStack_30);
    if (aiStack_30[0] != 0) {
      iVar4 = fn_82817868();
      uVar5 = fn_82817870(aiStack_30[0]);
      if (iVar4 != 0) {
        uVar1 = uVar5 - 1;
        uStack_28 = (ulonglong)(*(uint *)(param_2 + 0x34) - uVar5);
        uVar2 = *(uint *)(param_2 + 0x34);
        if ((double)uStack_28 < 0.0) {
          uVar2 = uVar5;
        }
        *(uint *)(param_2 + 0x1c) =
             (uVar1 - (uVar1 + iVar4 & uVar1)) + iVar4 + *(int *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x34) = (int)(longlong)(double)uVar2;
      }
    }
    fn_828176F0(*(undefined4 *)(param_1 + 0x124),0xffffffff821c7b60,aiStack_30);
    if (aiStack_30[0] != 0) {
      iVar4 = fn_82817868();
      uVar5 = fn_82817870(aiStack_30[0]);
      if (iVar4 != 0) {
        uVar1 = uVar5 - 1;
        *(uint *)(param_2 + 0x18) =
             (*(int *)(param_2 + 0x18) - (uVar1 + iVar4 & uVar1)) + uVar1 + iVar4;
        uVar1 = *(uint *)(param_2 + 0x30);
        if ((double)(*(uint *)(param_2 + 0x30) - uVar5) < 0.0) {
          uVar1 = uVar5;
        }
        *(int *)(param_2 + 0x30) = (int)(longlong)(double)uVar1;
      }
    }
  }
  return;
}

