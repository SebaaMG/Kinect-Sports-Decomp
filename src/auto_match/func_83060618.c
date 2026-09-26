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
extern int fn_830602B8();


ulonglong fn_83060618(double param_1,double param_2,double param_3,int *param_4)

{
  uint uVar1;
  float *pfVar2;
  
  if (param_4[7] == param_4[6]) {
    if (*(char *)(param_4 + 9) != '\0') {
      return 0xffffffffffffffff;
    }
    fn_830602B8(param_4,(ulonglong)(uint)param_4[8] + (ulonglong)(uint)param_4[7]);
  }
  pfVar2 = (float *)(param_4[6] * 0xc + *param_4);
  *pfVar2 = (float)param_1;
  pfVar2[1] = (float)param_2;
  pfVar2[2] = (float)param_3;
  uVar1 = param_4[6];
  param_4[6] = uVar1 + 1;
  return (ulonglong)uVar1;
}

