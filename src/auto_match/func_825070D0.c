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
extern int fn_82547C80();
extern unsigned int lbl_821917B0;
extern float lbl_821917C4;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_825070D0(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821CC160;
  if ((dVar4 < (double)*(float *)(param_2 + 0xd5c)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0xd5c) - param_1),
     *(float *)(param_2 + 0xd5c) = fVar1, (double)fVar1 < dVar4)) {
    *(undefined4 *)(param_2 + 0xd4c) = 0;
  }
  if (*(int *)(param_2 + 0xd50) == 3) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xd54) - param_1);
    *(float *)(param_2 + 0xd54) = fVar1;
    if ((double)fVar1 < dVar4) {
      *(undefined4 *)(param_2 + 0xd50) = *(undefined4 *)(param_2 + 0xd4c);
    }
  }
  else {
    fVar1 = (float)((double)*(float *)(param_2 + 0xd58) - param_1);
    *(float *)(param_2 + 0xd58) = fVar1;
    fVar3 = lbl_821CA460;
    if ((double)fVar1 < dVar4) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar2 = lbl_83265A28 & 0x7fffff;
      *(undefined4 *)(param_2 + 0xd50) = 3;
      fVar1 = ((float)(uVar2 | 0x3f800000) - fVar3) * lbl_821917C4 + lbl_821917B0;
      *(undefined4 *)(param_2 + 0xd54) = lbl_821917D4;
      *(float *)(param_2 + 0xd58) = fVar1;
    }
  }
  fn_82547C80((ulonglong)*(uint *)(param_2 + 0x8c0) + 0xd0,2,*(uint *)(param_2 + 0xd50) & 0xff);
  return;
}

