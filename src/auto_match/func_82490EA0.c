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


ulonglong fn_82490EA0(double param_1,int param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  double dVar6;
  
  puVar2 = *(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 4);
  for (puVar5 = puVar1; (puVar5 != puVar2 && ((ulonglong)*puVar5 != (param_3 & 0xffffffff)));
      puVar5 = puVar5 + 2) {
  }
  if (puVar5 != puVar2) {
    dVar6 = (double)lbl_821CC160;
    if (param_1 <= dVar6) {
      if (param_1 < dVar6) {
        puVar4 = puVar5;
        if (puVar5 != puVar1) {
          while ((puVar5 = puVar4, param_1 < dVar6 && (puVar5 = puVar4 + -2, puVar5 != puVar1))) {
            param_1 = (double)(float)((double)(float)puVar4[-1] + param_1);
            puVar4 = puVar5;
          }
        }
        if (puVar5 != puVar2) {
          param_3 = (ulonglong)*puVar5;
        }
      }
    }
    else {
      do {
        if (param_1 <= dVar6) {
          return param_3;
        }
        pfVar3 = (float *)(puVar5 + 1);
        param_3 = (ulonglong)*puVar5;
        puVar5 = puVar5 + 2;
        param_1 = (double)(float)(param_1 - (double)*pfVar3);
      } while (puVar5 != puVar2);
    }
    return param_3;
  }
  return 0xffffffffffffffff;
}

