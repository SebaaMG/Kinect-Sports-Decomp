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
extern unsigned int lbl_8205743C;
extern unsigned int lbl_82057AC0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832187EC;


undefined8 fn_829E3D18(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  fVar4 = lbl_8205743C;
  iVar6 = 0;
  fVar2 = lbl_821AAD20;
  fVar3 = lbl_821AAD20;
  do {
    iVar7 = 0;
    lVar8 = 5;
    do {
      iVar5 = iVar6 + iVar7;
      iVar7 = iVar7 + 1;
      fVar1 = *(float *)(iVar5 * 4 + *(int *)(param_1 + 0xc));
      fVar3 = fVar1 + fVar3;
      fVar2 = (float)(&lbl_82057AC0)[iVar5] * fVar1 + fVar2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar6 = iVar6 + 5;
  } while (iVar6 < 0x19);
  *param_2 = fVar2 / lbl_832187EC;
  *param_3 = fVar3 * fVar4;
  return 0;
}

