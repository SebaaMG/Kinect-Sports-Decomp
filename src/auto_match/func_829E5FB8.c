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
extern unsigned int *auStack_34;
extern int fn_829E5CA0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_829E5FB8(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int aiStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [13];
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar2 = (**(code **)*param_2)(param_2,aiStack_50);
  if (-1 < (int)uVar2) {
    uVar4 = 2;
    if (aiStack_50[0] == 0) {
      uVar2 = (**(code **)(*param_2 + 4))(param_2,&uStack_40,&uStack_3c,&uStack_38,auStack_34);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = fn_829E5CA0(param_1,CONCAT44(uStack_40,uStack_3c),CONCAT44(uStack_38,auStack_34[0]))
      ;
      if (iVar3 < 0) {
        aiStack_50[0] = 1;
      }
      if (aiStack_50[0] == 0) {
        uVar4 = 1;
        *(undefined4 *)(param_1 + 0xc) = uStack_40;
        *(undefined4 *)(param_1 + 0x10) = uStack_3c;
        *(undefined4 *)(param_1 + 0x14) = uStack_38;
        *(undefined4 *)(param_1 + 0x18) = auStack_34[0];
      }
    }
    *(int *)(param_1 + 4) = iVar1;
    uVar2 = 0;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(int *)(param_1 + 0x2c) = aiStack_50[0];
  }
  return uVar2;
}

