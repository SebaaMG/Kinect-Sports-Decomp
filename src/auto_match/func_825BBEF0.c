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
extern unsigned int lbl_821CC160;


undefined8 fn_825BBEF0(double param_1,undefined8 param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float in_register_00010010;
  float in_register_00010018;
  
  fVar1 = *(float *)(param_4 + 8);
  fVar2 = *(float *)(param_3 + 8);
  fVar5 = fVar2;
  if (fVar2 <= fVar1) {
    fVar5 = fVar1;
    fVar1 = fVar2;
  }
  if ((in_register_00010018 < fVar1) || (bVar3 = true, fVar5 <= in_register_00010018)) {
    bVar3 = false;
  }
  if ((bVar3) && (*(float *)(param_3 + 0xc) != lbl_821CC160)) {
    dVar7 = (double)in_register_00010010;
    dVar9 = (double)(float)(dVar7 + param_1);
    dVar8 = (double)((in_register_00010018 - *(float *)(param_3 + 0x10)) / *(float *)(param_3 + 0xc)
                    );
    dVar4 = dVar7;
    if (dVar7 <= dVar9) {
      dVar4 = dVar9;
      dVar9 = dVar7;
    }
    if ((dVar8 < dVar9) || (uVar6 = 1, dVar4 <= dVar8)) {
      uVar6 = 0;
    }
    return uVar6;
  }
  return 0;
}

