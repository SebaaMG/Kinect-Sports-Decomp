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
extern unsigned int *auStack_6c;
extern unsigned int fStack_34;
extern unsigned int fStack_44;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_5c;
extern unsigned int fStack_70;
extern int fn_8253FDC8();
extern int fn_826310E0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_82623B60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_70;
  undefined4 auStack_6c [3];
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fn_8253FDC8(param_1,&fStack_70,auStack_6c);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  uStack_38 = lbl_821CA460;
  uStack_24 = lbl_821CA460;
  uStack_58 = lbl_821CC160;
  uStack_48 = lbl_821CC160;
  uStack_40 = lbl_821CC160;
  uStack_3c = lbl_821CC160;
  uStack_30 = lbl_821CC160;
  uStack_2c = lbl_821CC160;
  uStack_28 = lbl_821CC160;
  fVar3 = param_2[1];
  fStack_50 = fStack_70;
  fStack_5c = -fStack_70;
  uStack_60 = auStack_6c[0];
  uStack_4c = auStack_6c[0];
  fStack_54 = *param_1 * fVar2 + param_1[4] * fVar3 + param_1[8] * fVar1 + param_1[0xc];
  fStack_44 = param_1[9] * fVar1 + param_1[1] * fVar2 + param_1[5] * fVar3 + param_1[0xd];
  fStack_34 = param_1[10] * fVar1 + param_1[2] * fVar2 + param_1[6] * fVar3 + param_1[0xe];
  fn_826310E0(lbl_8320A898,0,&uStack_60,4,0x8000000000000000);
  return;
}

