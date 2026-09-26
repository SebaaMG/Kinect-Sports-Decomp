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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_50;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142E4C;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


undefined8 fn_82DE2BC8(float *param_1,float param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  float fStack_50;
  
  uVar4 = 0;
  iVar7 = 0;
  piVar8 = (int *)((int)param_2 + 0x18);
  do {
    piVar1 = (int *)*piVar8;
    iVar2 = piVar1[3];
    iVar6 = *(int *)(iVar2 + 0x44);
    if (iVar6 == 0) {
      iVar6 = 1;
      pfVar5 = param_1 + 1;
      vectorSubtractFloatingPoint(in_vs32,in_vs44);
      uVar3 = storeVectorElementWordIndexed(in_vs42,0,ZEXT48(&stack0x00000000) - 0x50);
      *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = uVar3;
      if (fStack_50 <= *param_1) {
        if (*param_1 < fStack_50 + lbl_82142E4C) {
          *param_1 = fStack_50 + lbl_82142E4C;
        }
        iVar6 = 2;
      }
      else if (fStack_50 < *pfVar5) {
        *pfVar5 = fStack_50;
      }
      if (*pfVar5 <= *param_1) {
        iVar6 = 4;
      }
      *(int *)(iVar2 + 0x44) = iVar6;
      if (iVar6 != 1) {
        if (iVar6 != 4) goto LAB_82de2cc0;
        uVar4 = 2;
        goto LAB_82de2cf8;
      }
      uVar4 = fn_82DE2BC8(param_1,iVar2,param_3,param_4,param_5);
      if ((int)uVar4 == 2) goto LAB_82de2cf8;
    }
    else {
LAB_82de2cc0:
      if (iVar6 == 2) {
        *(int **)(*piVar1 + 0x30) = piVar1;
        *param_4 = *param_4 + 1;
        *param_5 = (int)piVar1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 4;
    if (2 < iVar7) {
LAB_82de2cf8:
      *(undefined4 *)((int)param_2 + 0x40) = lbl_82134508;
      if ((int)param_1[3] < 100) {
        param_1[(int)param_1[3] + 0x378] = param_2;
        param_1[3] = (float)((int)param_1[3] + 1);
      }
      else {
        uVar4 = 2;
      }
      return uVar4;
    }
  } while( true );
}

