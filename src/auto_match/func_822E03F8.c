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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822DF348();
extern int fn_822E0BE8();
extern int fn_82365BD8();
extern int fn_823754D8();
extern int iRam831cd624;
extern unsigned int iStack_7c;
extern unsigned int lbl_8218EC10;
extern unsigned int uStack_80;


undefined4 fn_822E03F8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  double dVar5;
  undefined4 uStack_80;
  int iStack_7c;
  float afStack_78 [2];
  float afStack_70 [2];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];
  
  uStack_80 = 0;
  uVar2 = fn_82365BD8(auStack_68);
  iVar4 = fn_822E0BE8(param_1,uVar2,5,afStack_78,afStack_70,&iStack_7c,0,&uStack_80);
  if (iVar4 != 0) {
    dVar5 = (double)afStack_78[0];
    if (((iRam831cd624 == 0) || ((double)lbl_8218EC10 <= dVar5)) || (iStack_7c != 0)) {
      uVar2 = fn_82230110(auStack_60,0xffffffff82196582);
      uVar3 = fn_82365BD8(auStack_68,param_2);
      fn_822DF348((double)afStack_70[0],dVar5,param_1,uVar3,uVar2,(iStack_7c != 0) + '\x05');
    }
    else {
      iVar4 = fn_82365BD8(auStack_68,param_2);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = fn_82365BD8(afStack_70,iVar4);
      fn_823754D8(uVar1,uVar2,1);
      if (*(int *)(iVar4 + 4) != 0) {
        fn_822315A0();
      }
      *(undefined4 *)(param_1 + 0xbc) = 1;
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return uStack_80;
}

