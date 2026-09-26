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
extern int fn_82467200();
extern int fn_82469800();
extern int fn_8265CA20();
extern unsigned int lbl_82195598;


void fn_82460540(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_8265CA20();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar5 = fn_82467200(*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0x28) = iVar5;
  dVar4 = lbl_82195598;
  fVar1 = *(float *)(iVar5 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x38);
  fVar2 = *(float *)(iVar5 + 0x40);
  dVar6 = (double)fVar2 - lbl_82195598;
  dVar7 = (double)*(float *)(iVar5 + 0x48) - lbl_82195598;
  *(float *)(iVar3 + 0x470) = fVar1;
  *(float *)(iVar3 + 0x474) = fVar2;
  fn_82469800(*(undefined4 *)(iVar3 + 0x3fc),
                    (longlong)(float)(longlong)((double)fVar1 - dVar4) & 0xffffffff,
                    (longlong)(float)(longlong)dVar6 & 0xffffffff,
                    (longlong)(double)(longlong)dVar7 & 0xffffffff);
  return;
}

