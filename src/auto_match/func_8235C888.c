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
extern int fn_8235DA80();
extern int fn_82418F68();
extern unsigned int lbl_821CC160;


void fn_8235C888(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  fVar2 = lbl_821CC160;
  iVar3 = 0;
  dVar5 = (double)lbl_821CC160;
  if (dVar5 < (double)*(float *)(param_2 + 0x2b34)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x2b34) - param_1);
    *(float *)(param_2 + 0x2b34) = fVar1;
    if ((double)fVar1 <= dVar5) {
      if (*(int *)(param_2 + 0xc14) != 0) {
        *(undefined4 *)(param_2 + 0x2bb0) = 0;
        *(undefined4 *)(param_2 + 0x2bac) = *(undefined4 *)(param_2 + 0x2b38);
      }
      *(float *)(param_2 + 0x2b34) = fVar2;
    }
  }
  fn_8235DA80(param_1,param_2);
  if (0 < *(int *)(param_2 + 0xc04)) {
    iVar4 = param_2 + 0x1ec0;
    do {
      fn_82418F68(param_1,iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x420;
    } while (iVar3 < *(int *)(param_2 + 0xc04));
  }
  return;
}

