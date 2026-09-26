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
extern int fn_82FFE0F0();
extern int fn_83016E90();
extern int fn_83017DA0();
extern int fn_830196F8();
extern unsigned int lbl_821AAD20;


void fn_830189E8(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float *pfVar4;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  uVar2 = CONCAT44((int)param_2,(int)param_3);
  uVar3 = fn_83016E90(param_1 + 4,uVar2,
                       param_2 + param_3 + ((param_2 + param_3 & 0xffffffffU) / 0xc1) * -0xc1);
  if ((uVar3 & 0xffffffff) != 0) {
    pfVar4 = (float *)fn_82FFE0F0(param_1 + 0x61c,param_2);
    fVar1 = lbl_821AAD20;
    if (pfVar4 != (float *)0x0) {
      fVar1 = *pfVar4;
    }
    fn_83017DA0((double)fVar1,param_1,param_2,uVar3);
    fn_830196F8(param_1 + 4,uVar2);
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return;
}

