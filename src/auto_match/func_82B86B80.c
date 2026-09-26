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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA66A8();
extern int fn_82B167E0();
extern int fn_82B80CD0();
extern unsigned int uStack_30;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * fn_82B86B80(float *param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  double dVar4;
  undefined8 uStack_30;
  
  uVar3 = (uint)((param_3 & 0xffffffff) << 1) & 0x1e;
  uStack_30 = CONCAT44(*(uint *)(param_2 + 0x14) >> 2,(((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) & 0xffffffffff;
  param_1[1] = (float)(((2 << ((int)((param_3 & 0xffffffff) << 1) + 1U & 0x1f)) - 1U &
                        *(uint *)((int)&uStack_30 + ((uint)param_3 >> 2 & 0x1ffffffc)) & -1 << uVar3
                       ) >> uVar3);
  if ((param_4 & 0xffffffff) == 0) {
    uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)(*(float *)((int)((param_3 + 0xb & 0xffffffff) << 2) + param_2))) & ((U64)0xFFFFFFFF)) << 32));
  }
  else {
    uVar2 = fn_82B167E0(param_2,param_3);
    dVar4 = (double)fn_82B80CD0(uVar2,param_1[1],param_4);
    fVar1 = param_1[1];
    if (fVar1 == 0.0) {
      uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)dVar4)) & ((U64)0xFFFFFFFF)) << 32));
    }
    else if (fVar1 == 1.4013e-45) {
      uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)(int)dVar4)) & ((U64)0xFFFFFFFF)) << 32));
    }
    else {
      if (2 < (uint)fVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(undefined4 *)(*(int *)(param_2 & 0xfffff000) + 0x94),0x12c0);
      }
      uStack_30 = ((((U64)(uStack_30)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)(longlong)dVar4)) & ((U64)0xFFFFFFFF)) << 32));
    }
  }
  *param_1 = (((U64)(uStack_30) >> 32) & 0xFFFFFFFF);
  return param_1;
}

