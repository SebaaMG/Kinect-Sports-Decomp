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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8268CC00();


float * fn_827180C8(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float *pfVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  fn_8268CC00(auStack_30);
  pfVar6 = (float *)(**(code **)(*param_2 + 0x140))(auStack_40,param_2,auStack_30,3);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[3];
  if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
    bVar5 = false;
  }
  if (bVar5) {
    pfVar6 = (float *)(**(code **)(*param_2 + 0x140))(auStack_40,param_2,auStack_30,2);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[1];
    fVar4 = pfVar6[3];
    if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
      bVar5 = false;
    }
    if (bVar5) {
      pfVar6 = (float *)(**(code **)(*param_2 + 0x140))(auStack_40,param_2,auStack_30,1);
      fVar1 = *pfVar6;
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      fVar4 = pfVar6[3];
      if ((fVar2 != fVar1) || (bVar5 = true, fVar4 != fVar3)) {
        bVar5 = false;
      }
      if (bVar5) {
        pfVar6 = (float *)(**(code **)(*param_2 + 0x140))(auStack_40,param_2,auStack_30,0);
        fVar1 = pfVar6[2];
        fVar2 = pfVar6[1];
        fVar3 = pfVar6[3];
        if ((fVar1 != *pfVar6) || (bVar5 = true, fVar3 != fVar2)) {
          bVar5 = false;
        }
        if (bVar5) {
          (**(code **)(*param_2 + 0x28))(param_1,param_2,auStack_30);
          return param_1;
        }
        *param_1 = *pfVar6;
        param_1[1] = fVar2;
        param_1[2] = fVar1;
        param_1[3] = fVar3;
        return param_1;
      }
    }
  }
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar2;
  param_1[3] = fVar4;
  return param_1;
}

