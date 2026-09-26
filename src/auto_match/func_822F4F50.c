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
extern float fRam831ccdbc;
extern float fRam831ccdc0;
extern float fRam831ccdc4;
extern float fRam831ccdc8;
extern float fRam831ccdcc;
extern float fRam831ccdd0;
extern float fRam831ccdd4;
extern float fRam831ccdd8;
extern float fRam831ccddc;
extern float fRam831ccde0;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822F5258();
extern int fn_824CCFC8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


double fn_822F4F50(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  double dVar8;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar6 + 0x24);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar6 + 0x2c4);
    iVar6 = *(int *)(iVar6 + 0x2c0);
    dVar8 = (double)((fRam831ccdc0 - fRam831ccdbc) * **(float **)(param_1 + 0x20) + fRam831ccdbc);
    if ((iVar2 != 0) && (cVar7 = fn_8223AAC0(iVar2), cVar7 != '\0')) {
      if (iVar6 != 0) {
        iVar3 = *(int *)(iVar6 + 4);
        fVar1 = fRam831ccdc4;
        if ((((iVar3 != 0) && (fVar1 = fRam831ccdc8, iVar3 != 2)) &&
            (fVar1 = fRam831ccdcc, iVar3 != 1)) &&
           ((fVar1 = fRam831ccdd4, iVar3 != 4 && (fVar1 = fRam831ccdd0, iVar3 == 5)))) {
          fVar1 = fRam831ccdd8;
        }
        iVar6 = *(int *)(iVar6 + 8);
        fVar4 = fRam831ccddc;
        if (((iVar6 != 2) && (iVar6 != 1)) &&
           ((iVar6 != 4 && (((iVar6 == 0 || (iVar6 == 3)) || (fVar4 = lbl_821CC160, iVar6 == 5))))))
        {
          fVar4 = fRam831ccde0;
        }
        fVar1 = (float)((double)(fVar4 * fVar1) * dVar8);
        if ((*(int *)(param_3 + 0x188) == 0) || (bVar5 = true, *(int *)(param_3 + 0x1a4) != 0)) {
          bVar5 = false;
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0x844);
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x83c);
        if (*(uint *)((iVar6 + 0x4b) * 4 + iVar3) < *(uint *)(param_3 + 0x170)) {
          iVar6 = iVar6 + 0x55;
        }
        else {
          iVar6 = iVar6 + 0x50;
        }
        fVar4 = *(float *)(iVar6 * 4 + iVar3);
        if (!bVar5) {
          fVar4 = lbl_821CC160;
        }
        if (fVar1 - fVar4 < 0.0) {
          fVar1 = fVar4;
        }
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        dVar8 = (double)fVar1;
        if ((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) -
                           (double)lbl_821CA460) < dVar8) {
          dVar8 = (double)lbl_821CA460;
        }
        fn_822315A0(iVar2);
        return dVar8;
      }
      fn_822315A0(iVar2);
    }
  }
  else {
    iVar6 = fn_822F5258();
    if (iVar6 != 0) {
      return (double)lbl_821CA460;
    }
    if ((*(int *)(iVar2 + 0x120) != 0) && (iVar6 = fn_824CCFC8(iVar2), iVar6 != 0)) {
      dVar8 = (double)(**(code **)(**(int **)(iVar2 + 0x120) + 0x14))();
      return dVar8;
    }
  }
  return (double)lbl_821CC160;
}

