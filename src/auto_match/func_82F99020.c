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
extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_82005718;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82011630;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8207F25C;
extern float lbl_8216C694;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_821AAD20;


undefined8 fn_82F99020(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  dVar3 = (double)*param_2;
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  *(float *)(param_1 + 0x10) = param_2[3];
  dVar4 = lbl_82011630;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x11);
  if ((dVar3 < dVar4) || ((double)lbl_82002AE0 < dVar3)) {
    *(undefined4 *)(param_1 + 4) = lbl_82002C5C;
  }
  fVar2 = lbl_821AAD20;
  fVar1 = lbl_82005748;
  if ((*(float *)(param_1 + 8) < lbl_821AAD20) || (lbl_82005748 < *(float *)(param_1 + 8))) {
    *(float *)(param_1 + 8) = lbl_821AAD20;
  }
  if ((*(float *)(param_1 + 0xc) < fVar2) || (fVar1 < *(float *)(param_1 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = lbl_8207F25C;
  }
  if ((*(float *)(param_1 + 0x10) < lbl_8216C698) || (fVar2 < *(float *)(param_1 + 0x10))) {
    *(float *)(param_1 + 0x10) = fVar2;
  }
  fVar1 = lbl_8216C694;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * lbl_8216C694;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * fVar1;
  dVar4 = (double)fn_82F655D8(lbl_82015618,(double)(*(float *)(param_1 + 0x10) * lbl_82005718)
                                   );
  *(float *)(param_1 + 0x10) = (float)dVar4;
  return 1;
}

