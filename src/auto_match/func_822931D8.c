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
extern unsigned int *auStack_50;
extern int fn_82292AE8();
extern int fn_82292DB8();
extern int fn_82293000();
extern int fn_82293088();
extern int fn_822930F8();
extern int fn_82809CB0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_8218EC10;
extern float lbl_82191144;
extern unsigned int *lbl_8327F848;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822931D8(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  double dVar5;
  undefined1 auStack_50 [16];
  
  if (((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) ||
     (param_1[4] != 0)) {
    fn_82293000(param_1);
    fn_82293088(param_1);
    fn_822930F8(param_1);
  }
  else {
    fn_82292DB8(param_1);
  }
  iVar4 = fn_82292AE8();
  dVar5 = (double)*(float *)(iVar4 + 0x58);
  if (dVar5 != (double)*(float *)(iVar4 + 0x5c)) {
    iVar2 = *lbl_8327F848;
    uVar3 = fn_82864988(auStack_50,0xffffffff821c3f50);
    (**(code **)(iVar2 + 0x10))(dVar5,lbl_8327F848,uVar3);
    fn_82864898(auStack_50);
    dVar5 = (double)fn_82809CB0((double)(*(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x5c)));
    fVar1 = *(float *)(iVar4 + 0x5c);
    if ((double)lbl_8218EC10 <= dVar5) {
      fVar1 = (fVar1 - *(float *)(iVar4 + 0x58)) * lbl_82191144 + *(float *)(iVar4 + 0x58);
    }
    *(float *)(iVar4 + 0x58) = fVar1;
  }
  return;
}

