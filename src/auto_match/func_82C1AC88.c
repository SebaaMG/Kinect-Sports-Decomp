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


undefined8 fn_82C1AC88(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x244)) {
    iVar5 = 0;
    do {
      sVar2 = *(short *)(iVar5 + *(int *)(param_1 + 0x248));
      iVar8 = sVar2 * 0x6f0 + *(int *)(param_1 + 0x140);
      if (*(int *)(param_1 + 0xb0) == 0) {
        if (*(int *)(param_1 + 0x1cc) == 0) {
          iVar6 = *(int *)(param_1 + 0x100);
          if (*(int *)(param_1 + 0x1c0) != 0) {
            iVar6 = iVar6 << (*(uint *)(param_1 + 0x1c8) & 0x3f);
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0x100) >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
        }
        sVar1 = *(short *)(iVar8 + 0x74);
        uVar3 = iVar6 * 3;
        iVar7 = *(int *)(param_1 + 0x144);
        *(short *)(iVar8 + 0x74) = (short)*(undefined4 *)(iVar8 + 0x8c) + sVar1;
        iVar7 = ((((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * (int)sVar2 +
                 (iVar6 >> 1) + (int)sVar1) * 4 + iVar7;
        *(int *)(iVar8 + 0x38) = iVar7;
        *(int *)(iVar8 + 0x90) = iVar7;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar4 < *(short *)(param_1 + 0x244));
  }
  return 0;
}

