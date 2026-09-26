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
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_831568D4;


void fn_82773C70(undefined8 param_1,double param_2,undefined8 param_3,int param_4,
                  ulonglong param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = fn_82F6A548();
  if ((*(char *)(param_7 + 8) == '\0') && (*(char *)(param_7 + 9) == '\0')) {
    uVar2 = (longlong)((double)(param_5 & 0xffffffff) * extraout_f1 + (double)lbl_82002C5C) &
            0xffffffff;
    if ((*(byte *)(param_7 + 7) & 1) == 0) {
      uVar2 = ((uVar2 + 3 & 0xffffffff) >> 2) + uVar2;
      if ((uVar2 & 0xffffffff) < 0x100) {
        uVar2 = (ulonglong)
                *(uint *)(&lbl_831568D4 + (uint)*(byte *)((int)uVar2 + iVar1 + 0x7e0) * 4);
      }
      else {
        uVar2 = 0xff;
      }
    }
    dVar6 = (double)uVar2;
    dVar7 = (double)lbl_820143E0;
    dVar4 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)*(float *)(param_4 + 0xc) *
                                                                dVar6) * dVar7));
    dVar5 = (double)(float)dVar4;
    dVar4 = (double)fn_82F68918((double)(float)((double)(float)((double)*(float *)(param_4 + 4) *
                                                                dVar6) * dVar7));
    bVar3 = (float)(((longlong)(dVar5 - (double)(float)dVar4) & 0xffffffffU) + 1 & 0xffffffff) <
            (float)((double)(*(int *)(iVar1 + 0x4c) + (*(uint *)(iVar1 + 0x50) & 0x7fffffff) * -2) *
                   param_2);
  }
  else {
    bVar3 = true;
  }
  fn_82F6A594(bVar3);
  return;
}

