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
extern unsigned int *auStack_20;
extern int fn_822AF200();
extern int fn_82F68B64();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82409EF0(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined4 auStack_20 [2];
  
  fVar6 = lbl_821CC160;
  if (*(int *)(param_2 + 0x58) == 2) {
    if (*(int *)(param_2 + 0x3c) == 0) {
      return;
    }
    fVar1 = (float)((double)*(float *)(param_2 + 0x3c) - param_1);
    fVar4 = -fVar1;
    fVar5 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar5 = fVar1;
    }
    *(float *)(param_2 + 0x3c) = fVar5;
    if (fVar5 != fVar6) {
      return;
    }
    fn_82F68B64(param_2,3);
    return;
  }
  if (*(int *)(param_2 + 0x58) != 4) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0xd4) + 0x18) + 0xc) != 0)
  {
    return;
  }
  iVar3 = *(int *)(param_2 + 8);
  auStack_20[0] = 0;
  fn_822AF200(iVar3 + 0x80,auStack_20);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x7c) + 8);
  if (piVar2 == (int *)0x0) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = (**(code **)(*piVar2 + 8))(piVar2,3);
  }
  if (cVar7 != '\0') {
    *(undefined4 *)(iVar3 + 0x58) = 3;
  }
  return;
}

