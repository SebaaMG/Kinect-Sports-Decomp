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
extern int fn_8254EDB0();
extern int fn_825529B0();
extern int fn_82552AD8();
extern unsigned int lbl_821CC160;


void fn_8254B590(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)lbl_821CC160;
  if ((*(int *)(param_2 + 0x1d4) != 0) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0x1d0) - param_1),
     *(float *)(param_2 + 0x1d0) = fVar1, (double)fVar1 <= dVar3)) {
    fn_8254EDB0((double)*(float *)(param_2 + 0x1d8),(double)*(float *)(param_2 + 0x1dc),
                      param_2,*(undefined4 *)(param_2 + 0x1cc));
    *(float *)(param_2 + 0x1d0) = (float)dVar3;
    *(undefined4 *)(param_2 + 0x1d4) = 0;
  }
  if ((*(int *)(param_2 + 0x1b4) != 0) && (*(int *)(param_2 + 0x1c8) == 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1c0) - param_1);
    *(float *)(param_2 + 0x1c0) = fVar1;
    *(float *)(param_2 + 0x1b8) =
         (float)((double)*(float *)(param_2 + 0x1bc) * param_1 + (double)*(float *)(param_2 + 0x1b8)
                );
    if ((double)fVar1 < dVar3) {
      *(undefined4 *)(param_2 + 0x1b4) = 0;
      *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_2 + 0x1c4);
    }
    iVar2 = fn_825529B0(param_2 + 0x1a0);
    if (iVar2 != 0) {
      fn_82552AD8((double)*(float *)(param_2 + 0x1b8),param_2 + 0x1a0,0xffffffff8327fb78);
    }
  }
  return;
}

