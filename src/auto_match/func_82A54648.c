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


undefined8 fn_82A54648(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    param_1[0x36] = 1;
  }
  else if (0 < *(short *)(iVar1 + 0x244)) {
    iVar3 = 0;
    iVar5 = 0;
    do {
      iVar5 = *(short *)(iVar5 + *(int *)(iVar1 + 0x248)) * 0x6f0 + *(int *)(iVar1 + 0x140);
      sVar6 = *(short *)(iVar5 + 0x72);
      if ((int)*(short *)(sVar6 * 2 + *(int *)(*(int *)(iVar5 + 0x1a8) + 8)) +
          (int)**(short **)(*(int *)(iVar5 + 0x1a8) + 0xc) < *(int *)(iVar1 + 0x100)) {
        iVar4 = sVar6 * 2;
        *(short *)(*(int *)(*(int *)(iVar5 + 0x1a8) + 8) + iVar4 + 2) = (short)param_2;
        psVar2 = *(short **)(*(int *)(iVar5 + 0x1a8) + 0xc);
        *psVar2 = *(short *)(*(int *)(*(int *)(iVar5 + 0x1a8) + 8) + iVar4) + *psVar2;
        if (*(int *)(iVar1 + 0x100) <
            (int)*(short *)(*(int *)(*(int *)(iVar5 + 0x1a8) + 8) + iVar4 + 2) +
            (int)**(short **)(*(int *)(iVar5 + 0x1a8) + 0xc)) {
          return 0xffffffff80040002;
        }
        **(short **)(iVar5 + 0x1a8) = **(short **)(iVar5 + 0x1a8) + 1;
      }
      else {
        param_1[0x36] = 1;
        *(short *)((sVar6 + 1) * 2 + *(int *)(*(int *)(iVar5 + 0x1a8) + 8)) = (short)param_2;
      }
      sVar6 = (short)iVar3 + 1;
      iVar3 = (int)sVar6;
      iVar5 = iVar3 << 1;
    } while (sVar6 < *(short *)(iVar1 + 0x244));
    return 0;
  }
  return 0;
}

