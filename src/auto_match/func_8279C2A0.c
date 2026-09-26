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
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


longlong fn_8279C2A0(double param_1,int param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  double dVar7;
  uint uStack_90;
  uint uStack_8c;
  
  if (param_3 < *(uint *)(param_2 + 0x28)) {
    piVar1 = *(int **)(param_3 * 4 + *(int *)(param_2 + 0x24));
    dVar7 = (double)((float)(param_1 - (double)(longlong)piVar1[3]) +
                    (float)*(uint *)(param_2 + 0x4c));
    fn_82756F70(&uStack_90,piVar1);
    lVar3 = 0;
    uVar6 = 0;
    while( true ) {
      if ((uStack_90 == 0) || (bVar2 = false, uStack_8c <= uStack_90)) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_8279c3f4;
      if ((*(ushort *)(uStack_90 + 6) >> 6 & 1) == 0) {
        uVar4 = (uint)*(ushort *)(uStack_90 + 2);
      }
      else {
        uVar4 = -(uint)*(ushort *)(uStack_90 + 2);
      }
      if (dVar7 < (double)(uVar4 + uVar6)) break;
      if ((*(ushort *)(uStack_90 + 6) >> 8 & 1) == 0) {
        lVar3 = (ulonglong)(*(ushort *)(uStack_90 + 4) >> 0xc) + lVar3;
      }
      fn_827555D8(&uStack_90);
      uVar6 = uVar4 + uVar6;
    }
    if ((float)(uVar4 >> 1) < (float)(dVar7 - (double)(longlong)(int)uVar6)) {
      lVar3 = (ulonglong)(*(ushort *)(uStack_90 + 4) >> 0xc) + lVar3;
    }
LAB_8279c3f4:
    if (*piVar1 < 0) {
      uVar5 = (ulonglong)(uint)piVar1[2] & 0xffffff;
      if (uVar5 == 0xffffff) {
        uVar5 = 0xffffffffffffffff;
      }
    }
    else {
      uVar5 = (ulonglong)(uint)piVar1[2];
    }
    fn_82756488(&uStack_90);
    lVar3 = uVar5 + lVar3;
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}

