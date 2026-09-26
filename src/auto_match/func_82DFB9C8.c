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
extern int fn_82D93128();
extern unsigned int lbl_821AAD20;


void fn_82DFB9C8(int param_1,undefined8 param_2,int param_3,int param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  double dVar10;
  
  dVar10 = (double)fn_82D93128((ulonglong)*(uint *)(param_3 + 0x18) + 0xe0);
  fVar4 = lbl_821AAD20;
  iVar2 = *(int *)(param_3 + 0x1c);
  iVar5 = 0;
  if ('\0' < *(char *)(iVar2 + 0x20)) {
    iVar7 = 0;
    iVar8 = 0;
    pfVar9 = (float *)(param_4 + 0x48);
    do {
      if (pfVar9[-9] == 0.0) {
        *param_5 = fVar4;
      }
      else {
        fVar1 = pfVar9[1];
        iVar6 = *(int *)(param_1 + 0x14) + iVar7;
        fVar3 = (*(float *)(*(int *)(param_1 + 8) + iVar8 + 0x20) - *pfVar9) * pfVar9[2] *
                *(float *)(*(int *)(param_1 + 0x14) + iVar7);
        if (fVar4 <= fVar1) {
          *param_5 = (float)(-(double)(*(float *)(iVar6 + 8) * fVar1 - fVar3) * dVar10);
        }
        else {
          *param_5 = (float)(-(double)(*(float *)(iVar6 + 4) * fVar1 - fVar3) * dVar10);
        }
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 0x30;
      pfVar9 = pfVar9 + 0x18;
      iVar7 = iVar7 + 0xc;
      param_5 = param_5 + 1;
    } while (iVar5 < *(char *)(iVar2 + 0x20));
  }
  return;
}

