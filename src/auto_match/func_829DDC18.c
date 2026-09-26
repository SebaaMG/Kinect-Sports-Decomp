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
extern unsigned int *auStack_40;
extern int fn_829DD678();
extern int fn_829DD700();
extern int fn_829DD850();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_832179FC;
extern unsigned int *lbl_83217A00;


void fn_829DDC18(int param_1,int param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  double dVar8;
  undefined1 auStack_40 [64];
  
  *param_3 = 4;
  *param_4 = lbl_8200133C;
  param_2 = *(int *)(param_1 + 0x14) * 0xc + param_2;
  piVar7 = (int *)(*(int *)(param_1 + 0x14) * 0x260 + param_1 + 0x18);
  if ((*(char *)(param_2 + 0x10) != '\0') && (*piVar7 != 0)) {
    fn_829DD678(auStack_40,param_1);
    cVar4 = fn_829DD700();
    if (cVar4 != '\0') {
      dVar8 = (double)fn_829DD850(piVar7);
      iVar3 = lbl_832179FC;
      pfVar5 = (float *)(lbl_832179FC + 0x8f0c4);
      fVar1 = ABS((float)(dVar8 - (double)*(float *)(param_2 + 0x14)));
      *param_4 = fVar1;
      fVar2 = *(float *)(iVar3 + 0x8f0c8) * *(float *)(param_2 + 0x18);
      if (fVar2 < *pfVar5) {
        fVar2 = *pfVar5;
      }
      uVar6 = 1;
      if (fVar2 < fVar1) {
        uVar6 = 2;
      }
      *param_3 = uVar6;
    }
  }
  if (lbl_83217A00 != (int *)0x0) {
    (**(code **)(*lbl_83217A00 + 0xc))((double)*param_4,lbl_83217A00,*param_3);
  }
  return;
}

