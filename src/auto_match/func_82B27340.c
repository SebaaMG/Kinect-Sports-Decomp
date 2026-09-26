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
extern int fn_82AD1270();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82B1A538();
extern int fn_82B1A7E8();
extern int fn_82B25248();
extern int fn_82B8A3A0();
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;


bool fn_82B27340(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  bool bVar1;
  int *piVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  
  iStack_58 = 0;
  uStack_5c = -(uint)((*(uint *)(param_3 + 4) & 1) == 0) & *(uint *)(param_3 + 4);
  uVar7 = 0;
  uVar5 = 0;
  iStack_60 = param_3;
  piVar4 = (int *)0x0;
LAB_82b27390:
  while( true ) {
    piVar6 = piVar4;
    if ((uStack_5c == 0) || (bVar1 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
      bVar1 = true;
    }
    if (bVar1) {
      if (piVar6 == (int *)0x0) {
        if ((uVar7 & 0xffffffff) == 0) {
          uVar3 = fn_82B8A3A0((double)lbl_82002AE0,(double)lbl_821AAD20,(double)lbl_821AAD20,
                                    param_1,1);
          uVar7 = fn_82AD18C0(param_1,uVar3,0);
        }
      }
      else {
        uVar7 = fn_82AD1918(param_1,*piVar6,piVar6[1],piVar6[2]);
      }
      if (uVar5 != 0) {
        fn_82AD1270(uVar7,4);
      }
      *param_5 = (int)uVar7;
      return param_4 == (int *)0x0;
    }
    piVar4 = (int *)fn_82B1A538(&iStack_60);
    if (param_4 == (int *)0x0) break;
    if (((*piVar4 != *param_4) || (piVar4[1] != param_4[1])) ||
       (bVar1 = true,
       (CONCAT44(piVar4[2] ^ param_4[2],piVar4[2] ^ param_4[2]) & 0xfffffffffffffffb) != 0)) {
      bVar1 = false;
    }
    if (!bVar1) break;
    param_4 = (int *)0x0;
    uVar5 = piVar4[2] & 4;
    piVar4 = piVar6;
  }
  if (piVar6 == (int *)0x0) {
    if ((uVar7 & 0xffffffff) == 0) goto LAB_82b27390;
    uVar3 = fn_82AD1918(param_1,*piVar4,piVar4[1],piVar4[2]);
    uVar3 = fn_82B1A7E8(param_1,0,param_2,uVar7,uVar3);
  }
  else {
    uVar3 = fn_82AD1918(param_1,*piVar4,piVar4[1],piVar4[2]);
    uVar2 = fn_82AD1918(param_1,*piVar6,piVar6[1],piVar6[2]);
    uVar3 = fn_82B1A7E8(param_1,0,param_2,uVar2,uVar3);
    piVar6 = (int *)0x0;
  }
  fn_82B25248(param_1,uVar3,param_6);
  uVar7 = fn_82AD18C0(param_1,uVar3,0);
  piVar4 = piVar6;
  goto LAB_82b27390;
}

