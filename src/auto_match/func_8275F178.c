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


ulonglong fn_8275F178(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int aiStack_20 [2];
  
  uVar6 = 0xffffffffffffffff;
  if (((*(byte *)(param_1 + 9) & 0x40) != 0) && (*(int *)(param_2 + 0x18) == 1)) {
    iVar5 = **(int **)(param_2 + 0x24);
    uVar2 = *(uint *)(iVar5 + 0xc);
    if ((uVar2 >> 0x1f != *(uint *)(iVar5 + 0x10) >> 0x1f) && (*(int *)(iVar5 + 0x14) < 0)) {
      uVar3 = *(uint *)(iVar5 + 0x10);
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar6 = (ulonglong)uVar3;
      aiStack_20[0] = 0;
      iVar5 = (**(code **)(*param_1 + 0x24))(param_1,aiStack_20);
      if ((int)uVar3 < aiStack_20[0]) {
        cVar1 = *(char *)(uVar3 * 0x28 + iVar5);
        if ((cVar1 == 'A') || (bVar4 = false, cVar1 == 'C')) {
          bVar4 = true;
        }
        if (!bVar4) {
          uVar6 = 0xffffffffffffffff;
        }
      }
    }
  }
  return uVar6;
}

