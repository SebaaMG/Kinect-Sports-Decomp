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
extern int fn_82D8AF78();


void fn_82D8A4F0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0xe8) == '\x05') {
    if (1 < (int)*(uint *)(param_1 + 0xb8)) {
      fn_82D8AF78(*(undefined4 *)(param_1 + 0xb4),0,(ulonglong)*(uint *)(param_1 + 0xb8) - 1,
                      param_1);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar4 = 0;
      do {
        iVar8 = 0;
        iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0xb4));
        uVar6 = *(uint *)(iVar2 + 0x18) ^ *(uint *)(iVar2 + 0x14) ^ param_1;
        uVar5 = (uint)*(ushort *)(uVar6 + 0xb0);
        if (uVar5 != 0) {
          piVar1 = *(int **)(uVar6 + 0xac);
          piVar7 = piVar1;
          do {
            if (*piVar7 == iVar2) {
              *(short *)((int)piVar1 + iVar8 * 0x30 + 0x22) = (short)iVar3;
              break;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 0xc;
          } while (iVar8 < (int)uVar5);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0xb8));
    }
  }
  return;
}

