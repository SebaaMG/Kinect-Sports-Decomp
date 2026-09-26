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
extern unsigned int *auStack_70;
extern int fn_82A9A4B8();
extern int fn_82A9E7D8();


void fn_82A9F618(int param_1,uint param_2,uint param_3,uint param_4,ulonglong param_5,uint param_6
                  ,uint param_7,uint param_8)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint auStack_70 [28];
  
  piVar4 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (*(uint *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(uint *)(iVar1 + 8) < uVar3) {
        fn_82A9A4B8(iVar1,uVar3,piVar4);
      }
      *(uint *)(iVar1 + 4) = uVar3;
      if (*piVar4 < 0) {
        return;
      }
    }
    auStack_70[0] = 0xffffffff;
    if ((param_5 & 0xffffffff) != 0) {
      iVar1 = fn_82A9E7D8(param_1,param_5,auStack_70);
      *piVar4 = iVar1;
      if (iVar1 < 0) {
        return;
      }
    }
    puVar2 = (uint *)(param_2 * 0x1c + **(int **)(param_1 + 0x70));
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    puVar2[3] = auStack_70[0];
    puVar2[4] = param_6;
    puVar2[5] = param_7;
    puVar2[6] = param_8;
  }
  return;
}

