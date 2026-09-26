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
extern int fn_827A0C20();


undefined8 fn_8272CB30(int *param_1,float *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  char cVar3;
  float *pfVar2;
  
  if ((((uint)param_1[0x23] >> 0xb & 1) == 0) &&
     (((param_3 & 2) == 0 || (cVar3 = (**(code **)(*param_1 + 8))(param_1), cVar3 != '\0')))) {
    pfVar2 = (float *)fn_827A0C20(param_1[0x28]);
    if ((((pfVar2[2] < *param_2) || (*param_2 < *pfVar2)) || (pfVar2[3] < param_2[1])) ||
       (uVar1 = 1, param_2[1] < pfVar2[1])) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

