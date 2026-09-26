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
extern int fn_82A6D090();
extern int fn_82A75588();
extern int fn_82F68CC0();


undefined8 fn_82A741F0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int aiStack_60 [24];
  
  iVar1 = *param_1;
  piVar6 = param_1 + 0x38;
  iVar2 = param_1[2];
  aiStack_60[0] = 0;
  iVar5 = param_2 * 0x6f0;
  iVar4 = *(int *)(iVar1 + 0x140) + iVar5;
  uVar3 = fn_82A75588(piVar6,3);
  if (-1 < (int)uVar3) {
    if ((*(short *)(iVar4 + 0x72) < 1) && (*(int *)(iVar1 + 0x84) != 1)) {
      **(undefined1 **)(*(int *)(iVar4 + 0x1a8) + 0x10) = 1;
    }
    else {
      aiStack_60[0] = 0;
      uVar3 = fn_82A6D090(piVar6,1,aiStack_60);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      **(undefined1 **)(*(int *)(iVar4 + 0x1a8) + 0x10) = (char)aiStack_60[0];
    }
    if ((**(char **)(*(int *)(iVar4 + 0x1a8) + 0x10) == '\x01') && (*(int *)(iVar4 + 0x1bc) == 0)) {
      aiStack_60[0] = 0;
      uVar3 = fn_82A6D090(piVar6,2,aiStack_60);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      *(int *)(*(int *)(iVar1 + 0x140) + iVar5 + 0x1b4) = aiStack_60[0] + 1;
    }
    if ((**(char **)(*(int *)(iVar4 + 0x1a8) + 0x10) == '\x01') && (*(int *)(iVar4 + 0x1bc) == 1)) {
      *(undefined2 *)(*param_1 + 0x20) = 0;
      param_1[0x1f] = 0;
      iVar5 = *(int *)(*param_1 + 0x140) + iVar5;
      fn_82F68CC0(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),
                   *(int *)(*param_1 + 0x130) << 2);
    }
    *(undefined4 *)(iVar2 + param_2 * 8 + 4) = 1;
  }
  return uVar3;
}

