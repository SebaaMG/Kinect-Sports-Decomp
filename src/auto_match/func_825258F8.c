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


undefined8 fn_825258F8(int param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa18) + 8);
  if (uVar1 != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0xa18) + 0xc);
    iVar3 = iVar8 - (int)param_2;
    do {
      uVar4 = 7;
      plVar6 = param_2;
      do {
        uVar7 = uVar4;
        if (*(longlong *)(iVar3 + (int)plVar6) != *plVar6) goto LAB_8252597c;
        uVar4 = uVar7 + 8;
        plVar6 = plVar6 + 1;
      } while (uVar4 < 0x10);
      uVar7 = uVar7 + 1;
      if (0xf < uVar7) {
        return 1;
      }
      pcVar5 = (char *)(iVar8 + uVar7);
      while (*pcVar5 == pcVar5[(int)param_2 - iVar8]) {
        uVar7 = uVar7 + 1;
        pcVar5 = pcVar5 + 1;
        if (0xf < uVar7) {
          return 1;
        }
      }
LAB_8252597c:
      uVar2 = uVar2 + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 0x20;
    } while (uVar2 < uVar1);
  }
  return 0;
}

