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
extern float fRam8326b870;
extern int fn_82588280();
extern int fn_82F64CE0();
extern unsigned int lbl_821CC160;


double fn_82588130(short *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  sVar3 = 0;
  dVar5 = (double)lbl_821CC160;
  dVar6 = dVar5;
  while( true ) {
    iVar2 = fn_82F64CE0(param_1);
    if (iVar2 == 0) {
      return (double)(float)(dVar6 - (double)fRam8326b870);
    }
    sVar1 = *param_1;
    if (sVar1 == 10) {
      return dVar6;
    }
    if (sVar1 == 0x20) {
      return dVar6;
    }
    if (sVar1 == 0) break;
    dVar4 = (double)fn_82588280(dVar5,param_2,sVar1,sVar3);
    sVar3 = *param_1;
    param_1 = param_1 + 1;
    dVar6 = (double)(float)(dVar4 + dVar6);
  }
  return dVar6;
}

