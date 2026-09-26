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
extern int fn_8255A160();
extern int fn_825C2F80();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82625CF0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  double dVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fVar1 = lbl_821CA460;
  if (param_2 == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  }
  dVar4 = (double)fVar1;
  uVar3 = fn_825C2F80((double)lbl_821956BC,(double)lbl_82193E50);
  fn_8255A160(uVar3,dVar4);
  puVar2 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fVar1 = param_3[1];
  *param_1 = *param_1 * *param_3;
  param_1[2] = fVar1 * param_1[2];
  return;
}

