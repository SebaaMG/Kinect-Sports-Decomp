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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82810830();
extern int fn_82835208();
extern int fn_8287AB90();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_828733B8(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar3 = (undefined4 *)fn_8287AB90();
  uStack_30 = *puVar3;
  uStack_2c = puVar3[1];
  uStack_28 = puVar3[2];
  pfVar4 = (float *)fn_82810830(&fStack_40,&uStack_30,param_1 + 0xf4);
  fStack_40 = *pfVar4;
  fStack_3c = pfVar4[1];
  fStack_38 = pfVar4[2];
  pfVar4 = (float *)fn_82810830(&fStack_50,&uStack_30,param_1 + 0x100);
  fStack_50 = *pfVar4;
  fVar1 = *param_2;
  fStack_4c = pfVar4[1];
  fStack_48 = pfVar4[2];
  fVar2 = fStack_50;
  if (fVar1 < fStack_50) {
    fVar2 = fVar1;
  }
  if (fVar2 <= fStack_40) {
    fStack_60 = fStack_40;
  }
  else {
    fStack_60 = fStack_50;
    if (fVar1 < fStack_50) {
      fStack_60 = fVar1;
    }
  }
  fVar1 = param_2[1];
  fVar2 = fStack_4c;
  if (fVar1 < fStack_4c) {
    fVar2 = fVar1;
  }
  if (fVar2 <= fStack_3c) {
    fStack_5c = fStack_3c;
  }
  else {
    fStack_5c = fStack_4c;
    if (fVar1 < fStack_4c) {
      fStack_5c = fVar1;
    }
  }
  fVar1 = param_2[2];
  fVar2 = fStack_48;
  if (fVar1 < fStack_48) {
    fVar2 = fVar1;
  }
  if (fVar2 <= fStack_38) {
    fStack_58 = fStack_38;
  }
  else {
    fStack_58 = fStack_48;
    if (fVar1 < fStack_48) {
      fStack_58 = fVar1;
    }
  }
  fn_82835208(param_3,&fStack_60);
  return 0x201a0000;
}

