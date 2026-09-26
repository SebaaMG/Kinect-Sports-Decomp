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
extern int fn_82359698();
extern int fn_8236B4F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823DF328(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = lbl_821CC160;
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(iVar2 + 0xefc) != 0) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0xefc) - param_1);
    fVar4 = -fVar1;
    fVar3 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(iVar2 + 0xefc) = fVar3;
  }
  if ((*(float *)(iVar2 + 0xefc) <= fVar5) &&
     (fn_82359698(iVar2,*(undefined4 *)(iVar2 + 0xef8)),
     *(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0)) {
    fn_8236B4F0((double)lbl_821CA460,iVar2);
  }
  return;
}

