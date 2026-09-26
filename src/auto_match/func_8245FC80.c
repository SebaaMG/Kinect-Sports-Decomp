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
#define NAN(x) ((x) != (x))
extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_824655B8();
extern int fn_8246F9F0();
extern int fn_82512B70();
extern int fn_8266C6D8();
extern int fn_8266C708();
extern int fn_8266EC60();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8245FC80(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar6;
  undefined8 uVar5;
  
  if ((*(int *)(param_2 + 0xa8) == 0) && (**(int **)(param_2 + 0x4c) == 4)) {
    puVar6 = (undefined4 *)fn_82292AE8();
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    fn_822931D8();
    iVar2 = *(int *)(param_2 + 0x38);
    fn_8246F9F0(iVar2,iVar2 + 0x15c);
    fn_8246F9F0(iVar2,iVar2 + 0x178);
    fn_8246F9F0(iVar2,iVar2 + 0x160);
    fn_824655B8(*(undefined4 *)(iVar2 + 0x98),0);
    uVar5 = fn_8266EC60();
    fn_8266C6D8(uVar5,0x40,1);
    uVar5 = fn_8266EC60();
    fn_8266C708(uVar5,0x40,1);
    if (*(int *)(param_2 + 0xc4) != 0) {
      fn_82512B70();
      *(undefined4 *)(param_2 + 0xc4) = 0;
    }
    *(undefined4 *)(param_2 + 0xa8) = 1;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (*(int *)(iVar2 + 0x80) != 0) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0x80) - param_1);
    fVar3 = -fVar1;
    fVar4 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(iVar2 + 0x80) = fVar4;
  }
  return;
}

