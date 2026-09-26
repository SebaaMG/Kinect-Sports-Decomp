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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BAEB0;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_82F558F8(int param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  
  dVar4 = (double)lbl_82002AE0;
  dVar3 = (double)lbl_821AAD20;
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44(lbl_82002AE0,uStack_70),
             CONCAT44(lbl_82002AE0,uStack_68),0xffffffffff00ffff,CONCAT44(lbl_821AAD20,uStack_58),1,
             (&lbl_831BAEB0)[*(int *)(param_1 + 8)]);
  uVar2 = 0xffffffff82165ee0;
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xc) != 1) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165eb4,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xc) != 2) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e90,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e58,uVar1);
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165e20,uVar1);
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165df4,(double)*(float *)(param_1 + 0x54));
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165dc4,(double)*(float *)(param_1 + 0xa4));
  uVar1 = uVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar1 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d94,uVar1);
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar2 = 0xffffffff82165ed8;
  }
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d60,uVar2);
  (**(code **)(*param_2 + 8))
            (dVar4,dVar4,dVar3,param_2,CONCAT44((float)dVar4,uStack_70),
             CONCAT44((float)dVar4,uStack_68),0xffffffffff00ffff,CONCAT44((float)dVar3,uStack_58),1,
             0xffffffff82165d30,(double)*(float *)(param_1 + 0xb4));
  return;
}

