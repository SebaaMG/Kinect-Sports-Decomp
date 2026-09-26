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
extern int fn_82D35890();
extern int fn_82D93438();


void fn_82DB1170(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    sVar1 = fn_82D93438((int)*(char *)(param_2 + 0x20) + param_2 + 0x10);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      piVar2 = *(int **)(param_1 + 0x30);
      do {
        if (*piVar2 == param_2 + 0x10) {
          if (iVar4 != -1) {
            iVar3 = *(int *)(param_1 + 0x34) + -1;
            *(int *)(param_1 + 0x34) = iVar3;
            if (iVar3 == iVar4) {
              return;
            }
            *(undefined4 *)(iVar4 * 4 + *(int *)(param_1 + 0x30)) =
                 *(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
            return;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x34));
    }
    if (sVar1 != -1) {
      fn_82D35890(*(undefined4 *)(param_1 + -8));
    }
  }
  return;
}

