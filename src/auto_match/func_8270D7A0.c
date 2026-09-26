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
extern unsigned int lbl_8200E81C;


void fn_8270D7A0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  *param_2 = *(float *)(param_1 + 0x34) * fVar2 + *(float *)(param_1 + 0x30) * fVar1 +
             *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0x40) * fVar2 + *(float *)(param_1 + 0x3c) * fVar1 +
          *(float *)(param_1 + 0x44);
  *param_3 = fVar2;
  fVar1 = *param_2;
  iVar3 = (uint)(byte)(&lbl_8200E81C)
                      [(((uint)(fVar2 < *(float *)(param_1 + 100)) << 1 |
                        (uint)(fVar1 < *(float *)(param_1 + 0x60))) << 1 |
                       (uint)(*(float *)(param_1 + 0x6c) < fVar2)) << 1 |
                       (uint)(*(float *)(param_1 + 0x68) < fVar1)] * 0x18 + param_1;
  *param_2 = *(float *)(iVar3 + 0x8c) * fVar2 + *(float *)(iVar3 + 0x88) * fVar1 +
             *(float *)(iVar3 + 0x90);
  fVar2 = *(float *)(iVar3 + 0x98) * fVar2 + *(float *)(iVar3 + 0x94) * fVar1 +
          *(float *)(iVar3 + 0x9c);
  *param_3 = fVar2;
  fVar1 = *param_2;
  *param_2 = *(float *)(param_1 + 0x74) * fVar2 + *(float *)(param_1 + 0x70) * fVar1 +
             *(float *)(param_1 + 0x78);
  *param_3 = *(float *)(param_1 + 0x80) * fVar2 + *(float *)(param_1 + 0x7c) * fVar1 +
             *(float *)(param_1 + 0x84);
  return;
}

