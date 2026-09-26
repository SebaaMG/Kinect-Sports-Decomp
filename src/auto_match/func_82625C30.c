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
extern int fn_8255A1C8();
extern int fn_825C2F80();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82625C30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  
  uVar3 = fn_825C2F80();
  uVar4 = fn_825C2F80(param_3,param_4);
  fVar5 = lbl_821CA460;
  if (param_6 == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar5 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  }
  fn_8255A1C8(uVar3,uVar4,(double)fVar5);
  pfVar1 = (float *)(in_r0 + param_7 & 0xfffffff0);
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar2 = in_register_000104d0 * *pfVar1;
  pfVar2[1] = in_register_000104d4 * fVar5;
  pfVar2[2] = in_register_000104d8 * fVar6;
  pfVar2[3] = in_vr77 * fVar7;
  return;
}

