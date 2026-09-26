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
extern int fn_82FEF648();
extern int fn_82FF1438();
extern unsigned int lbl_8217BB40;
extern unsigned int lbl_83264574;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_82FF2D40(double param_1,undefined8 param_2,int param_3,undefined8 param_4,char param_5,
                  undefined4 *param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  iVar3 = 0;
  dVar5 = (double)lbl_8217BB40;
  for (iVar1 = lbl_83264574; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (((((param_3 == 0) || (*(int *)(iVar1 + 0x70) == param_3)) &&
         ((dVar4 = (double)*(float *)(iVar1 + 0xdc), dVar4 < dVar5 ||
          ((param_5 != '\0' && (dVar4 == dVar5)))))) && ((*(byte *)(iVar1 + 0xda) & 0x20) == 0)) &&
       (cVar2 = fn_82FEF648(iVar1,param_4), cVar2 != '\0')) {
      dVar5 = dVar4;
      iVar3 = iVar1;
    }
  }
  if ((param_1 < dVar5) || ((param_5 != '\0' && (param_1 == dVar5)))) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) {
    *param_6 = *(undefined4 *)(iVar3 + 0x68);
    fn_82FF1438(iVar3,(int)param_4 == 0);
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return iVar3 != 0;
}

