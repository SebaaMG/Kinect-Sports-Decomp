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
extern int fn_822BD338();
extern int fn_822C72E0();
extern int fn_822C8C60();
extern int fn_82334BD0();
extern int fn_823352D8();
extern int fn_82335838();
extern unsigned int lbl_821CC160;


void fn_82334E28(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  
  iVar6 = *(int *)(param_2 + 0x230);
  piVar1 = *(int **)(iVar6 + 0x238);
  if (*(int *)(param_2 + 0x214) == 0) {
    if (((*(int *)(param_2 + 0x218) == 0) &&
        (dVar8 = (double)fn_82334BD0(piVar1[0xc],piVar1), (double)lbl_821CC160 < dVar8)) &&
       (dVar8 < (double)*(float *)(*piVar1 + 0xac0))) {
      if ((double)(float)((double)*(float *)(*piVar1 + 0xac0) - param_1) < dVar8) {
        fn_822C72E0(*(undefined4 *)(*(int *)(iVar6 + 0x114) + 0x20),0xffffffff821b0a44);
      }
      *(undefined4 *)(param_2 + 0x218) = 1;
    }
    if (piVar1[0x9f] == 3) {
      *(undefined4 *)(param_2 + 0x214) = 1;
      *(undefined4 *)(param_2 + 0x218) = 0;
    }
  }
  else {
    cVar4 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar6 + 0x114) + 0x20) + 4,
                              0xffffffff821aca8c);
    if (cVar4 != '\0') {
      if (((*(int *)(param_2 + 0xc) == 0) && (piVar1[0xa1] == 0)) &&
         (*(int *)(*(int *)(param_2 + 0x230) + 0x284) == 0)) {
        fn_82335838(param_2,piVar1);
        fn_822C8C60(*(undefined4 *)(*(int *)(param_2 + 0x230) + 0x114),1,0);
        iVar6 = *(int *)(param_2 + 0x184);
        iVar2 = *(int *)(param_2 + 0x230);
        *(undefined4 *)(iVar2 + 0x288) = 1;
        *(uint *)(iVar2 + 0x28c) = (uint)(iVar6 == 0);
        if (*(int *)(param_2 + 0x184) == 0) {
          uVar5 = 0xffffffff821b09cc;
        }
        else {
          uVar5 = 0xffffffff821b09b4;
        }
        fn_822C72E0(*(undefined4 *)(*(int *)(param_2 + 8) + 0x20),uVar5);
        uVar7 = 3;
      }
      else {
        if (*(int *)(param_2 + 0xc) == 1) {
          fn_823352D8(param_2,piVar1[0xa4],0);
        }
        uVar7 = 1;
      }
      *(undefined4 *)(param_2 + 0x224) = uVar7;
      fVar3 = lbl_821CC160;
      *(float *)(param_2 + 0x22c) = lbl_821CC160;
      *(float *)(param_2 + 0x228) = fVar3;
    }
  }
  return;
}

