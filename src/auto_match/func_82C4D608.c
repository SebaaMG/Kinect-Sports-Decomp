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
extern int fn_82A1E968();
extern int fn_82C44B20();
extern int fn_82C48040();
extern int fn_82C48100();
extern int fn_82C4C448();
extern int fn_82C562F0();
extern unsigned int iStack_78;
extern unsigned int uStack_74;


undefined8
fn_82C4D608(int param_1,int param_2,ulonglong param_3,int param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int aiStack_80 [2];
  int iStack_78;
  undefined4 uStack_74;
  
  iVar1 = *(int *)(param_1 + 0x2e0);
  uVar2 = *(uint *)(iVar1 + 0x6070);
  if (*(int *)(iVar1 + 0x4ff8) == 0) {
    fn_82A1E968(&iStack_78);
    *(undefined4 *)(iVar1 + 0x4ff8) = 1;
    *(longlong *)(iVar1 + 0x4fe0) = *(longlong *)(iVar1 + 0x4fe0) - CONCAT44(iStack_78,uStack_74);
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    if ((((((param_3 & 0xffffffff) == 0) || (param_4 == 0)) || (param_5 == 0)) ||
        ((param_6 == 0 || (param_7 == 0)))) || ((param_8 == 0 || (param_2 == 0)))) {
      uVar3 = 0xfffffffffffffffd;
    }
    else {
      uVar6 = (undefined4)param_3;
      if (*(int *)(iVar1 + 0x5618) == 0) {
        *(undefined4 *)(iVar1 + 0x5684) = uVar6;
        *(int *)(iVar1 + 0x5688) = param_4;
        *(undefined4 *)(iVar1 + 0x5680) = 1;
        *(int *)(iVar1 + 0x568c) = param_5;
        *(int *)(iVar1 + 0x5690) = param_6;
        *(int *)(iVar1 + 0x5694) = param_7;
        *(int *)(iVar1 + 0x5698) = param_8;
        uVar3 = fn_82C4C448(param_1,0x30323449,0xc,0,0,param_3);
        fn_82C44B20(iVar1);
      }
      else {
        fn_82C48040(param_1,aiStack_80,&iStack_78);
        iVar4 = *(int *)(iVar1 + 0x5664);
        if ((aiStack_80[0] == iVar4) && (iStack_78 == *(int *)(iVar1 + 0x5668))) {
          *(undefined4 *)(iVar1 + 0x5684) = uVar6;
          *(int *)(iVar1 + 0x5688) = param_4;
          *(undefined4 *)(iVar1 + 0x5680) = 1;
          *(int *)(iVar1 + 0x568c) = param_5;
          *(int *)(iVar1 + 0x5690) = param_6;
          *(int *)(iVar1 + 0x5694) = param_7;
          *(int *)(iVar1 + 0x5698) = param_8;
          uVar3 = fn_82C4C448(param_1,0x30323449,0xc,0,0,param_3);
          fn_82C44B20(iVar1);
        }
        else {
          if (*(int *)(iVar1 + 0x566c) == 0) {
            if (iVar4 < aiStack_80[0]) {
              iVar4 = aiStack_80[0];
            }
            iVar5 = *(int *)(iVar1 + 0x5668);
            if (*(int *)(iVar1 + 0x5668) < iStack_78) {
              iVar5 = iStack_78;
            }
            iVar4 = fn_82C562F0((ulonglong)uVar2 + 8,
                                      ((longlong)iVar5 * (longlong)iVar4 + 0x20U & 0x3fffffff) << 2,
                                      0xffffffff82196582);
            *(int *)(iVar1 + 0x566c) = iVar4;
            *(uint *)(iVar1 + 0x5670) = iVar4 + 0x7fU & 0xffffff80;
            if (iVar4 == 0) {
              return 0xfffffffffffffff7;
            }
          }
          *(undefined4 *)(iVar1 + 0x5680) = 0;
          fn_82C4C448(param_1,0x30323449,0xc,0,0,*(undefined4 *)(iVar1 + 0x5670));
          *(undefined4 *)(iVar1 + 0x5680) = 1;
          *(undefined4 *)(iVar1 + 0x5684) = uVar6;
          *(int *)(iVar1 + 0x5688) = param_4;
          *(int *)(iVar1 + 0x568c) = param_5;
          *(int *)(iVar1 + 0x5690) = param_6;
          *(int *)(iVar1 + 0x5694) = param_7;
          *(int *)(iVar1 + 0x5698) = param_8;
          uVar3 = fn_82C48100(param_1,0x30323449,0xc,aiStack_80[0],iStack_78,
                                  *(undefined4 *)(iVar1 + 0x5664),*(undefined4 *)(iVar1 + 0x5668),
                                  *(undefined4 *)(iVar1 + 0x5670));
          fn_82C44B20(iVar1);
        }
      }
    }
  }
  else {
    uVar3 = 0xfffffffffffffffc;
  }
  return uVar3;
}

