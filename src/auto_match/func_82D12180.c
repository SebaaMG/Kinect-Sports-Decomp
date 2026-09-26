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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821AAD20;


void fn_82D12180(int param_1,int param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (double)lbl_821AAD20;
  dVar12 = (double)lbl_8200133C;
  do {
    fVar1 = *(float *)((param_2 + param_3 >> 1) * 0xc + param_1 + 8);
    iVar5 = param_3;
    iVar10 = param_2;
    do {
      pfVar7 = (float *)(iVar10 * 0xc + param_1 + 8);
      while (dVar11 < (double)(float)((double)(*pfVar7 - fVar1) * dVar12)) {
        iVar10 = iVar10 + 1;
        pfVar7 = pfVar7 + 3;
      }
      pfVar7 = (float *)(iVar5 * 0xc + param_1 + 8);
      while (dVar11 < (double)(float)((double)(fVar1 - *pfVar7) * dVar12)) {
        iVar5 = iVar5 + -1;
        pfVar7 = pfVar7 + -3;
      }
      if (iVar5 < iVar10) break;
      if (iVar5 != iVar10) {
        iVar6 = iVar5 * 0xc;
        puVar8 = (undefined4 *)(iVar10 * 0xc + param_1);
        iVar9 = iVar6 + param_1;
        uVar4 = *(undefined4 *)(iVar6 + param_1);
        uVar2 = *(undefined4 *)(iVar9 + 4);
        uVar3 = *(undefined4 *)(iVar9 + 8);
        *(undefined4 *)(iVar6 + param_1) = *puVar8;
        *(undefined4 *)(iVar9 + 4) = puVar8[1];
        *(undefined4 *)(iVar9 + 8) = puVar8[2];
        *puVar8 = uVar4;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
      }
      iVar5 = iVar5 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar5);
    if (param_2 < iVar5) {
      fn_82D12180(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar10;
    if (param_3 <= iVar10) {
      return;
    }
  } while( true );
}

