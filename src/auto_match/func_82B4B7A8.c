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
#define _fStack_30 ((*(U64*)&fStack_30))
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82AA66A8();
extern int fn_82B46830();
extern int fn_82B4A7C0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82B4B7A8(int param_1,int param_2,uint param_3,longlong param_4,float *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong alStack_40 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (param_2 != 0) {
    return 0;
  }
  if (param_3 == 0) {
    iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x160,1,0,1,1,(ulonglong)*(uint *)(param_1 + 8) + 0x28
                         );
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar3 = lbl_821AAD20;
    if (*param_5 != 0.0) {
      uVar3 = lbl_82002AE0;
    }
    alStack_40[0] = CONCAT44(uVar3,((uint)(alStack_40[0])));
    uVar4 = 1;
    param_5 = (float *)alStack_40;
  }
  else {
    if (param_3 != 1) {
      if (2 < param_3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x140,1,2,1,4,
                            (ulonglong)*(uint *)(param_1 + 8) + 0x28);
      iVar2 = *(int *)(iVar2 + 0x18);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      uVar4 = 4;
      alStack_40[0] = (longlong)(int)param_5[1];
      fStack_24 = (float)(longlong)(int)param_5[3];
      uVar1 = *(uint *)(iVar2 + 0x2c);
      fStack_28 = (float)(longlong)(int)param_5[2];
      _fStack_30 = CONCAT44((float)(longlong)(int)*param_5,(float)alStack_40[0]);
      param_5 = &fStack_30;
      goto LAB_82b4b984;
    }
    iVar2 = fn_82B4A7C0(param_1,0,param_4 + 0x40,1,0xc,1,4,
                          (ulonglong)*(uint *)(param_1 + 8) + 0x28);
    iVar2 = *(int *)(iVar2 + 0x18);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar4 = 4;
  }
  uVar1 = *(uint *)(iVar2 + 0x2c);
LAB_82b4b984:
  *(uint *)(iVar2 + 0x2c) = uVar1 | 2;
  uVar3 = fn_82B46830(param_1,param_5,uVar4);
  *(undefined4 *)(iVar2 + 0x34) = uVar3;
  return 0;
}

