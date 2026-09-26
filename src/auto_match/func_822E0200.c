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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822DF348();
extern int fn_822E0BE8();
extern int fn_82365BD8();
extern int fn_823754D8();
extern int iRam831cd624;
extern unsigned int iStack_8c;
extern unsigned int lbl_8218EC10;
extern unsigned int uStack_90;


uint fn_822E0200(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar5;
  undefined8 uVar4;
  double dVar6;
  uint uStack_90;
  int iStack_8c;
  float afStack_88 [2];
  float afStack_80 [2];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  uStack_90 = 0;
  uVar3 = fn_82365BD8(auStack_78);
  iVar5 = fn_822E0BE8(param_1,uVar3,((int)param_3 != 0) + '\x03',afStack_88,afStack_80,
                            &iStack_8c,param_3,&uStack_90);
  uVar2 = uStack_90;
  if (iVar5 != 0) {
    dVar6 = (double)afStack_88[0];
    *(int *)(*(int *)(param_1 + 0x14) + 0x204) = iStack_8c;
    if (((iRam831cd624 == 0) || ((double)lbl_8218EC10 <= dVar6)) || (iStack_8c != 0)) {
      uVar3 = fn_82230110(auStack_70,0xffffffff82196582);
      uVar4 = fn_82365BD8(auStack_78,param_2);
      fn_822DF348((double)afStack_80[0],dVar6,param_1,uVar4,uVar3,(iStack_8c != 0) + '\x03');
    }
    else {
      iVar5 = fn_82365BD8(auStack_78,param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = fn_82365BD8(afStack_80,iVar5);
      fn_823754D8(uVar1,uVar3,1);
      if (*(int *)(iVar5 + 4) != 0) {
        fn_822315A0();
      }
      *(undefined4 *)(param_1 + 0xbc) = 1;
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return uVar2;
}

