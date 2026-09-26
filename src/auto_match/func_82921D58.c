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
extern int fn_8265C940();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;


void fn_82921D58(ulonglong param_1,ulonglong param_2,int param_3)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  
  iVar5 = fn_8265C940((param_2 & 0xfffffff) << 4,0x24810000);
  fVar4 = lbl_82002C5C;
  fVar3 = lbl_82002AE0;
  if (iVar5 != 0) {
    uVar2 = param_2 & 0xffffffff;
    uVar6 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      pfVar8 = (float *)(iVar5 + -4);
      do {
        fVar1 = ((float)uVar6 + fVar4) * ((float)(param_1 & 0xffffffff) / (float)uVar2) + fVar4;
        fVar9 = (float)(int)fVar1;
        lVar7 = (ulonglong)(uint)fVar9 - 1;
        fVar1 = ((float)(longlong)(int)fVar9 + fVar3) - fVar1;
        if ((lVar7 < 0) && (lVar7 = param_1 - 1, param_3 == 0)) {
          lVar7 = 0;
        }
        if (((param_1 & 0xffffffff) <= (ulonglong)(uint)fVar9) && (fVar9 = 0.0, param_3 == 0)) {
          fVar9 = (float)((int)param_1 - 1);
        }
        pfVar8[2] = fVar1;
        pfVar8[1] = (float)lVar7;
        pfVar8[3] = fVar9;
        pfVar8 = pfVar8 + 4;
        *pfVar8 = fVar3 - fVar1;
        uVar6 = uVar6 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}

