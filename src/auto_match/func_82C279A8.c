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


undefined8 fn_82C279A8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar4 = (int *)(iVar1 + 4);
  aiStack_30[0] = *(int *)(iVar1 + 4);
  if (aiStack_30[0] == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(aiStack_30[0] + 0x24);
    while (iVar2 != 0) {
      iVar2 = *(int *)(*piVar4 + 0x24);
      *piVar4 = iVar2;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      uVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x48),0x1d,aiStack_30);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      aiStack_30[0] = *piVar4;
      iVar2 = *(int *)(aiStack_30[0] + 0x24);
    }
    uVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x48),0x1d,piVar4);
    if (-1 < (int)uVar3) {
      *piVar4 = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    }
  }
  return uVar3;
}

