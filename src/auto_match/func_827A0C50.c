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
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_a8;


longlong fn_827A0C50(double param_1,double param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  int *apiStack_b0 [2];
  uint uStack_a8;
  uint uStack_90;
  uint uStack_8c;
  
  fn_827A0BD0();
  dVar8 = (double)(float)(param_1 -
                         (double)(*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0xf0)));
  dVar7 = (double)(float)(param_2 -
                         (double)(*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0xf4)));
  uVar3 = fn_827A8770(param_3 + 0x24);
  fn_827A9328((double)(float)((double)uVar3 + dVar7),apiStack_b0,param_3 + 0x24);
  if (((apiStack_b0[0] == (int *)0x0) || ((uint)apiStack_b0[0][1] <= uStack_a8)) ||
     (bVar2 = false, (int)uStack_a8 < 0)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar1 = *(int **)(uStack_a8 * 4 + *apiStack_b0[0]);
    dVar7 = (double)(longlong)piVar1[3];
    if (dVar7 <= dVar8) {
      if (*piVar1 < 0) {
        uVar3 = (uint)*(ushort *)(piVar1 + 5);
      }
      else {
        uVar3 = piVar1[5];
      }
      if (dVar8 <= (double)(float)((double)(longlong)(int)uVar3 + dVar7)) {
        dVar7 = (double)(float)(dVar8 - dVar7);
        iVar5 = 0;
        fn_82756F70(&uStack_90,piVar1);
        lVar4 = 0;
        while( true ) {
          if ((uStack_90 == 0) || (bVar2 = false, uStack_8c <= uStack_90)) {
            bVar2 = true;
          }
          if (bVar2) break;
          uVar3 = (uint)*(ushort *)(uStack_90 + 2);
          if ((*(ushort *)(uStack_90 + 6) >> 6 & 1) != 0) {
            uVar3 = -uVar3;
          }
          iVar5 = uVar3 + iVar5;
          if (dVar7 < (double)(longlong)iVar5) break;
          lVar4 = (ulonglong)(*(ushort *)(uStack_90 + 4) >> 0xc) + lVar4;
          fn_827555D8(&uStack_90);
        }
        if (*piVar1 < 0) {
          uVar6 = (ulonglong)(uint)piVar1[2] & 0xffffff;
          if (uVar6 == 0xffffff) {
            uVar6 = 0xffffffffffffffff;
          }
        }
        else {
          uVar6 = (ulonglong)(uint)piVar1[2];
        }
        fn_82756488(&uStack_90);
        return uVar6 + lVar4;
      }
    }
  }
  return -1;
}

