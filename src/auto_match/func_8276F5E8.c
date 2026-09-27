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
extern int fn_82761DE8();
extern int fn_827B36A8();
extern int fn_827B3C10();
extern int fn_827B44F8();
extern int fn_827B4A50();
extern int fn_82F68918();
extern float lbl_82002C5C;
extern unsigned int lbl_820151B8;
extern float lbl_820151BC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8276F5E8(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  
  piVar3 = (int *)(**(code **)(**(int **)(*param_3 + 0xc) + 0x18))
                            (*(int **)(*param_3 + 0xc),param_3[1],0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))
              ((double)((lbl_820151B8 / (float)(longlong)*(int *)(param_1 + 0xc)) * lbl_82002C5C),
               piVar3,param_1 + 0x100);
    iVar5 = param_1 + 0x94;
    fn_827B3C10(iVar5);
    fn_827B4A50((double)((float)(longlong)*(int *)(param_1 + 0xc) * lbl_820151BC),iVar5,
                    param_1 + 0x100);
    cVar4 = fn_827B44F8(iVar5);
    if (cVar4 != '\0') {
      uVar6 = ((ulonglong)*(uint *)(param_1 + 0xec) - (ulonglong)*(uint *)(param_1 + 0xe4)) + 1;
      dVar8 = (double)fn_82F68918((double)(float)param_3[4]);
      uVar1 = *(uint *)(param_1 + 0x10);
      dVar9 = (double)fn_82F68918((double)(float)param_3[5]);
      iVar2 = *(int *)(param_1 + 0x10);
      uVar7 = 0;
      if ((uVar6 & 0xffffffff) != 0) {
        do {
          fn_827B36A8(iVar5,uVar7,
                            (longlong)((int)uVar7 + (int)dVar9 + iVar2) *
                            (longlong)*(int *)(param_2 + 0x14) +
                            (ulonglong)*(uint *)(param_2 + 0x18) +
                            (ulonglong)(uint)(int)dVar8 + (ulonglong)uVar1,1);
          uVar7 = uVar7 + 1;
        } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
    }
    fn_82761DE8(piVar3);
  }
  return;
}

