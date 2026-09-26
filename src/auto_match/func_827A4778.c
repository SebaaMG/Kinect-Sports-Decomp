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
extern int fn_8279C658();
extern int fn_827A0C20();
extern int fn_827A0EB8();
extern int fn_827A3A50();
extern int fn_82F68918();


void fn_827A4778(double param_1,double param_2,int param_3)

{
  float *pfVar2;
  undefined8 uVar1;
  double dVar3;
  double dVar4;
  
  if ((*(ushort *)(param_3 + 0x68) >> 5 & 1) != 0) {
    pfVar2 = (float *)fn_827A0C20(*(undefined4 *)(param_3 + 8));
    dVar3 = (double)fn_82F68918((double)(float)(param_1 - (double)*pfVar2));
    dVar4 = (double)(float)dVar3;
    dVar3 = (double)fn_82F68918((double)(float)(param_2 - (double)pfVar2[1]));
    *(float *)(param_3 + 0x4c) = (float)dVar4;
    *(float *)(param_3 + 0x50) = (float)dVar3;
    uVar1 = fn_827A0EB8(dVar4,*(undefined4 *)(param_3 + 8));
    if (((int)uVar1 != -1) &&
       (fn_827A3A50(param_3,uVar1,*(ushort *)(param_3 + 0x68) >> 1 & 1),
       (*(ushort *)(param_3 + 0x68) >> 1 & 1) != 0)) {
      fn_8279C658(*(int *)(param_3 + 8),*(undefined4 *)(*(int *)(param_3 + 8) + 0x1c),uVar1);
    }
  }
  return;
}

