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
extern int fn_82C27A68();
extern int fn_82C27F48();
extern int fn_82C280E8();
extern int fn_82C297F8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;


undefined8 fn_82C28608(int param_1,longlong *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  int aiStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iStack_48 = 0;
  iStack_44 = 0;
  *param_3 = 0;
  *param_4 = 0;
  piStack_4c = (int *)0x0;
  aiStack_40[0] = 0;
  iStack_50 = 0;
  uVar3 = fn_82C27A68(param_1,param_2,&iStack_44);
  if (-1 < (int)uVar3) {
    if (iStack_44 == 0) {
      uVar3 = 0xffffffff80500009;
    }
    else {
      if (*(int *)((int)param_2 + 0x1c) != 0) {
        uVar3 = fn_82C297F8(param_1,*param_2,&piStack_4c,&iStack_50);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (iStack_50 == 0) {
          if (*(int *)(param_2 + 1) != 0) {
            uVar3 = fn_82C280E8(param_1,param_2[2],aiStack_40,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if (iStack_50 != 0) {
              *(int *)(aiStack_40[0] + 4) = *(int *)(aiStack_40[0] + 4) + -1;
            }
          }
          lVar4 = *param_2;
          uVar3 = fn_82C280E8(param_1,lVar4,&piStack_4c,&iStack_50);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if (iStack_50 == 0) {
            *(longlong *)(iVar1 + 0x30) = lVar4;
            *(undefined4 *)(iVar1 + 0x38) = 1;
            uVar3 = (*(code *)**(undefined4 **)(iVar1 + 0x4c))(*(undefined4 **)(iVar1 + 0x4c));
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = (**(code **)(*(int *)(iVar1 + 0x4c) + 4))(*(int *)(iVar1 + 0x4c),&iStack_48);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            *(ulonglong *)(iVar1 + 0x28) =
                 (ulonglong)*(uint *)(iStack_48 + 4) + *(longlong *)(iStack_48 + 8);
            uVar3 = fn_82C27F48(param_1,iStack_48);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_82C280E8(param_1,*param_2,&piStack_4c,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
          }
        }
        piStack_4c[1] = piStack_4c[1] + 1;
        uVar5 = *(uint *)((int)param_2 + 0x1c);
        lVar4 = *(longlong *)(*piStack_4c + 8);
        uVar2 = *(uint *)(*piStack_4c + 4);
        if (((ulonglong)uVar2 - *param_2) + lVar4 < (ulonglong)uVar5) {
          uVar5 = ((int)lVar4 - (int)*param_2) + uVar2;
        }
        *param_4 = uVar5;
        *(uint *)((int)param_2 + 0x1c) = *(int *)((int)param_2 + 0x1c) - uVar5;
        *param_3 = ((int)*param_2 - (int)*(undefined8 *)((int *)*piStack_4c + 2)) +
                   *(int *)*piStack_4c;
        param_2[2] = *param_2;
        *(undefined4 *)(param_2 + 1) = 1;
        *param_2 = (ulonglong)*param_4 + *param_2;
        if (*(int *)((int)param_2 + 0x1c) != 0) {
          return uVar3;
        }
      }
      uVar3 = 0x500001;
    }
  }
  return uVar3;
}

