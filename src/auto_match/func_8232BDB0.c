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
extern int fn_82520780();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


ulonglong fn_8232BDB0(float *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  uint uVar5;
  float afStack_28 [4];
  
  lVar3 = fn_82520780((double)param_1[3],0xffffffff83265a28);
  fVar1 = param_1[4];
  afStack_28[0] = *param_1;
  afStack_28[1] = param_1[1];
  afStack_28[2] = param_1[2];
  if ((int)lVar3 == 0) {
    afStack_28[2] = lbl_821CC160;
    fVar1 = fVar1 - param_1[2];
  }
  pfVar4 = afStack_28;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar5 = 0;
  fVar2 = lbl_821CC160;
  do {
    fVar2 = *pfVar4 + fVar2;
    if (((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * fVar1 < fVar2) {
      if (uVar5 == 0) {
        return -(ulonglong)(lVar3 == 0) & 2;
      }
      if (uVar5 == 1) {
        return (-(ulonglong)(lVar3 != 0) & 0xfffffffe) + 3;
      }
      if (uVar5 < 3) {
        return 4;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < (int)uVar5) {
      return 5;
    }
  } while( true );
}

