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
#define NAN(x) ((x) != (x))
extern int fn_8229D418();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8236B638(int param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  piVar1 = *(int **)(param_1 + 0x4b0);
  dVar4 = (double)lbl_821CC160;
  if ((double)(float)piVar1[0x37] <= dVar4) {
    if ((param_3 & 0xffffffff) == 0) {
      param_3 = 0xffffffff820e975c;
    }
    fn_8229D418(*(undefined4 *)(*(int *)(*piVar1 + 0xd4) + 0x14),param_3,param_2);
  }
  dVar3 = (double)((float)piVar1[0x37] - lbl_821916FC);
  fVar2 = (float)piVar1[0x37];
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar3 < dVar4) << 2) | (uint)(NAN(dVar3) || NAN(dVar4)) << 2)) < 0.0)
  {
    fVar2 = lbl_821916FC;
  }
  piVar1[0x37] = (int)fVar2;
  return;
}

