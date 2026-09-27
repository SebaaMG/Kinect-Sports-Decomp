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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82809950();
extern float lbl_82193E2C;
extern float lbl_82195738;
extern unsigned int lbl_821CC160;


undefined8 fn_8226AB18(int param_1,float *param_2,int param_3,int param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int in_r0;
  double dVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *param_5 = 0;
  fVar3 = *(float *)(param_1 + 0x20) - param_2[1];
  fVar2 = *(float *)(param_1 + 0x1c) - *param_2;
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3) - *(float *)(param_1 + 0x30);
  if (fVar2 < lbl_821CC160) {
    if ((*(char *)(param_1 + 4) != '\0') && (fVar2 <= *(float *)(param_1 + 0x28) * lbl_82195738)) {
      *param_5 = 1;
    }
    if (-*(float *)(param_1 + 0x28) < fVar2) {
      dVar4 = (double)fn_82809950((double)((-fVar2 / *(float *)(param_1 + 0x28)) *
                                                lbl_82193E2C));
      *(float *)(param_3 + 8) = (float)(dVar4 * (double)*(float *)(param_1 + 0x2c));
      return 1;
    }
  }
  return 0;
}

