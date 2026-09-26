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
#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern int fn_823588D0();
extern int fn_82432868();
extern int fn_8243A400();
extern int fn_82441EF0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


undefined8 fn_8242BC50(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  fn_823588D0();
  uVar6 = fn_8243A400(param_1,(ulonglong)*(uint *)(param_2 + 0x174) + 0x1c);
  fVar5 = lbl_821CC160;
  if ((int)uVar6 == 0) {
    fVar1 = (float)((double)*(float *)(*(int *)(param_2 + 0x174) + 0xcc) - param_1);
    fVar3 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(*(int *)(param_2 + 0x174) + 0xcc) = fVar4;
    iVar7 = *(int *)(param_2 + 0x174);
    if (fVar5 < *(float *)(iVar7 + 0xcc)) {
      iVar8 = 0;
      if (0 < *(int *)(iVar7 + 0xbc)) {
        iVar9 = 0;
        do {
          piVar2 = *(int **)(**(int **)(param_2 + 8) + iVar9);
          iVar7 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),0);
          if (*(int **)(iVar7 + 0x24) != (int *)0x0) {
            (**(code **)(**(int **)(iVar7 + 0x24) + 0x24))();
          }
          iVar7 = *(int *)(param_2 + 0x174);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < *(int *)(iVar7 + 0xbc));
      }
    }
    fn_82432868(iVar7 + 0x60);
    fn_82441EF0(param_1,(ulonglong)*(uint *)(param_2 + 0x174) + 0x10,param_2);
    uVar6 = 0;
  }
  return uVar6;
}

