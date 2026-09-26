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
extern int fn_82CE5410();
extern int fn_82CF0AA8();
extern int fn_82CF16D0();
extern unsigned int lbl_82002AE0;


void fn_82CF1A78(double param_1,int param_2,int param_3,ulonglong param_4,ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar6;
  int iVar5;
  ulonglong uVar4;
  int iVar7;
  int iVar8;
  double dVar9;
  int aiStack_80 [32];
  
  if (6 < (int)param_4) {
    param_4 = 6;
  }
  iVar7 = 0;
  aiStack_80[0] = 0;
  if (0 < *(int *)(param_3 + 0x34)) {
    iVar2 = (int)((param_4 & 0xffffffff) << 2);
    dVar9 = (double)(float)((double)lbl_82002AE0 - param_1);
    iVar8 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_3 + 0x30) + iVar8);
      cVar6 = fn_82CF0AA8(param_2,*(undefined4 *)(iVar1 + 0x4c),aiStack_80);
      iVar3 = aiStack_80[0];
      if (cVar6 == '\0') {
        iVar5 = fn_82CE5410();
        uVar4 = (**(code **)(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x58);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_82CF16D0(uVar4,param_2,*(undefined4 *)(iVar1 + 0x4c),
                                *(undefined4 *)(iVar1 + 0x54));
        }
      }
      else {
        iVar5 = *(int *)(*(int *)(param_2 + 0x30) + aiStack_80[0] * 4);
      }
      *(float *)(iVar2 + iVar5) =
           (float)((double)*(float *)((int)((param_5 & 0xffffffff) << 2) + iVar1) * dVar9 +
                  (double)*(float *)(iVar2 + iVar5));
      *(undefined2 *)((int)((param_4 + 0x10 & 0xffffffff) << 1) + iVar5) =
           *(undefined2 *)((int)((param_5 + 0x10 & 0xffffffff) << 1) + iVar1);
      fn_82CF1A78(param_1,iVar5,iVar1,param_4,param_5);
      if (iVar3 < *(int *)(param_3 + 0x34) + -1) {
        aiStack_80[0] = iVar3 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < *(int *)(param_3 + 0x34));
  }
  return;
}

