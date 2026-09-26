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
extern int fn_827E9E08();
extern unsigned int lbl_82005C8C;
extern unsigned int lbl_821AAD20;


undefined8 fn_827EA0C8(double param_1)

{
  float fVar1;
  float fVar2;
  int iVar4;
  undefined8 uVar3;
  float *in_r9;
  double dVar5;
  double dVar6;
  double dVar7;
  
  fVar2 = lbl_82005C8C;
  fVar1 = (float)param_1;
  iVar4 = fn_827E9E08();
  if (iVar4 == 0) {
LAB_827ea15c:
    uVar3 = 0;
  }
  else {
    dVar6 = (double)fVar1;
    dVar5 = (double)fVar2;
    dVar7 = (double)lbl_821AAD20;
    if (((param_1 <= dVar6) || (dVar6 < dVar7)) || (dVar7 <= dVar5)) {
      if (((param_1 <= dVar5) || (dVar6 <= dVar5)) || (dVar5 < dVar7)) goto LAB_827ea15c;
      *in_r9 = fVar2;
    }
    else {
      *in_r9 = fVar1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

