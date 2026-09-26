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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_83016E90();
extern int fn_83017DA0();
extern int fn_83019690();


undefined8
fn_83018CD8(double param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  undefined8 uVar1;
  float *pfVar2;
  longlong lVar3;
  
  lVar3 = param_2 + 0x720;
  RtlEnterCriticalSection(lVar3);
  uVar1 = CONCAT44((int)param_3,(int)param_5);
  pfVar2 = (float *)fn_83016E90(param_2 + 4,uVar1,
                                 param_3 + param_5 +
                                 ((param_3 + param_5 & 0xffffffffU) / 0xc1) * -0xc1);
  if ((pfVar2 == (float *)0x0) || ((double)*pfVar2 != param_1)) {
    fn_83017DA0(param_1,param_2,param_3,pfVar2);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)fn_83019690(param_2 + 4,uVar1);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = (float)param_1;
        RtlLeaveCriticalSection(lVar3);
        return 1;
      }
      RtlLeaveCriticalSection(lVar3);
      return 2;
    }
    *pfVar2 = (float)param_1;
  }
  RtlLeaveCriticalSection(lVar3);
  return 1;
}

