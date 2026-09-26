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
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82788DD0();
extern int fn_82789C08();


ulonglong fn_8278A1E0(uint *param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  uVar1 = param_1[3];
  pfVar3 = (float *)(*(int *)(((uint)param_2 >> 6 & 0x3fffffc) + uVar1) +
                    ((uint)param_2 & 0xff) * 0xc);
  fVar2 = pfVar3[2];
  if (((uint)fVar2 & 0x80000000) != 0) {
    uVar4 = *(uint *)(*(int *)((param_3 >> 6 & 0x3fffffc) + uVar1) + (param_3 & 0xff) * 0xc + 8);
    if ((uVar4 & 0x80000000) != 0) {
      uVar4 = *(uint *)(*(int *)(((uint)((param_4 & 0xffffffff) >> 6) & 0x3fffffc) + uVar1) +
                        ((uint)param_4 & 0xff) * 0xc + 8);
    }
    uVar4 = uVar4 & 0xffffff;
    if (((uint)fVar2 & 0xffffff) != uVar4) {
      if (((uint)fVar2 & 0x8000000) == 0) {
        pfVar3[2] = (float)((uint)fVar2 & 0xff000000 | uVar4 | 0x18000000);
      }
      else {
        fStack_30 = *pfVar3;
        fStack_2c = pfVar3[1];
        fStack_28 = pfVar3[2];
        param_2 = fn_82788DD0((double)fStack_30,(double)fStack_2c,param_1,uVar4);
        if ((int)param_2 < 0) {
          param_2 = (ulonglong)*param_1;
          fStack_28 = (float)((uint)fVar2 & 0xff000000 | uVar4 | 0x10000000);
          fn_82789C08(param_1,&fStack_30);
        }
      }
    }
  }
  return param_2;
}

