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
extern unsigned int lbl_821AAD20;


undefined8 fn_82E92AF8(int *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  
  uVar6 = param_2 + 4;
  if ((uVar6 & 0xffffffff) < 5) {
    uVar6 = 5;
    lVar2 = 200;
  }
  else if ((uVar6 & 0xffffffff) < 0x6666667) {
    lVar2 = (uVar6 + (uVar6 & 0x3fffffff) * 4 & 0x1fffffff) << 3;
  }
  else {
    lVar2 = -1;
  }
  iVar4 = fn_8265C940(lVar2,0x248c8000);
  *param_1 = iVar4;
  if (iVar4 == 0) {
LAB_82e92b74:
    uVar3 = 0xffffffffffffff9c;
  }
  else {
    uVar7 = 0;
    if ((uVar6 & 0xffffffff) != 0) {
      iVar4 = 0;
      dVar8 = (double)lbl_821AAD20;
      do {
        pfVar5 = (float *)fn_8265C940(0x81c,0x248c8000);
        if (pfVar5 == (float *)0x0) goto LAB_82e92b74;
        pfVar5[5] = (float)dVar8;
        pfVar5[0x206] = 0.0;
        *pfVar5 = (float)dVar8;
        pfVar5[4] = 0.0;
        pfVar5[1] = (float)dVar8;
        uVar7 = uVar7 + 1;
        pfVar5[2] = (float)dVar8;
        iVar1 = iVar4 + *param_1;
        iVar4 = iVar4 + 0x28;
        *(float **)(iVar1 + 4) = pfVar5;
      } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
    }
    param_1[1] = (int)uVar6;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_3 * param_4;
    if (param_1[8] != 0) {
      param_1[0xb] = 100;
    }
    uVar3 = 0;
  }
  return uVar3;
}

