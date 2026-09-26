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
extern int fn_82FA9DC8();
extern int fn_8301A4F8();


void fn_82FAA820(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x14);
  bVar5 = false;
  if (piVar6 != *(int **)(param_1 + 0x18)) {
    do {
      if ((param_3 < *piVar6) &&
         ((piVar6[1] != 0 || ((*(uint *)(piVar6[2] + 0x14) & 0x80000000) == 0)))) {
        uVar1 = (param_2[1] - *param_2) / 0xc;
        if (((uVar1 < (uint)param_2[2]) || (cVar4 = fn_8301A4F8(param_2,5), cVar4 != '\0')) &&
           (uVar1 < (uint)param_2[2])) {
          piVar2 = (int *)param_2[1];
          param_2[1] = (int)(piVar2 + 3);
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar6;
            piVar2[1] = piVar6[1];
            piVar2[2] = piVar6[2];
          }
        }
        iVar3 = *(int *)(param_1 + 0x18);
        if (1 < (uint)((iVar3 - *(int *)(param_1 + 0x14)) / 0xc)) {
          *piVar6 = *(int *)(iVar3 + -0xc);
          piVar6[1] = *(int *)(iVar3 + -8);
          piVar6[2] = *(int *)(iVar3 + -4);
        }
        bVar5 = true;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0xc;
      }
      else {
        piVar6 = piVar6 + 3;
      }
    } while (piVar6 != *(int **)(param_1 + 0x18));
  }
  if (bVar5) {
    fn_82FA9DC8(param_1,-(ulonglong)*(uint *)(param_1 + 0xc));
  }
  return;
}

