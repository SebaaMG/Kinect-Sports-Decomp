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
extern float fRam832115dc;
extern float fRam832115f0;
extern int fn_828102A8();
extern int fn_828105C8();
extern int fn_82F68B7C();
extern int iRam832115e0;
extern unsigned int uRam832115d8;
extern unsigned int uRam832115e4;
extern unsigned int uRam832115e8;
extern unsigned int uRam832115ec;


void fn_8285F480(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  longlong lVar3;
  undefined8 extraout_f1;
  double dVar5;
  undefined8 uVar6;
  
  if (iRam832115e0 == 0) {
    dVar5 = (double)fRam832115dc;
    if (uRam832115d8 == 0) {
      fn_828105C8((double)(longlong)*(short *)(param_1 + 4),
                   (double)(longlong)*(short *)(param_1 + 6),
                   (double)(longlong)*(short *)(param_1 + 8),0xffffffff832115e4);
      fn_828102A8(dVar5,0xffffffff832115e4,0xffffffff832115e4);
      fRam832115f0 = (float)((double)*(ushort *)(param_1 + 10) * dVar5);
    }
    else if (uRam832115d8 == 1) {
      uRam832115e4 = *(undefined4 *)(param_1 + 4);
      uRam832115e8 = *(undefined4 *)(param_1 + 8);
      uRam832115ec = *(undefined4 *)(param_1 + 0xc);
      fRam832115f0 = *(float *)(param_1 + 0x10);
    }
    return;
  }
  if (iRam832115e0 == 1) {
    uVar2 = (ulonglong)uRam832115d8;
    lVar3 = -0x7cdeea0c;
    iVar1 = fn_82F68B7C((double)fRam832115dc);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar6 = extraout_f1;
      fn_828105C8((double)(longlong)*(short *)(iVar1 + 4),(double)(longlong)*(short *)(iVar1 + 6),
                   (double)(longlong)*(short *)(iVar1 + 8),lVar3);
      fn_828102A8(uVar6,lVar3,lVar3);
      lVar3 = lVar3 + 0xc;
      fn_828105C8((double)(longlong)*(short *)(iVar1 + 10),
                   (double)(longlong)*(short *)(iVar1 + 0xc),
                   (double)(longlong)*(short *)(iVar1 + 0xe),lVar3);
      fn_828102A8(uVar6,lVar3,lVar3);
    }
    else if ((uVar2 & 0xffffffff) == 1) {
      puVar4 = (undefined4 *)lVar3;
      *puVar4 = *(undefined4 *)(iVar1 + 4);
      puVar4[1] = *(undefined4 *)(iVar1 + 8);
      puVar4[2] = *(undefined4 *)(iVar1 + 0xc);
      puVar4[3] = *(undefined4 *)(iVar1 + 0x10);
      puVar4[4] = *(undefined4 *)(iVar1 + 0x14);
      puVar4[5] = *(undefined4 *)(iVar1 + 0x18);
    }
    return;
  }
  return;
}

