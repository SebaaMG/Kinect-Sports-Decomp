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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82932F78();
extern int fn_82933088();
extern int fn_829334D8();
extern int fn_82980C18();
extern int fn_82983380();
extern int fn_829B4AD0();


longlong fn_829B4E30(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar2;
  int iVar5;
  longlong lVar6;
  int aiStack_50 [20];
  
  iVar3 = 0;
  if (*(int *)(param_2 + 4) == 3) {
    lVar6 = fn_829B4AD0(param_1,param_2,param_3,0,0,aiStack_50);
    if (-1 < lVar6) {
      if ((int)lVar6 == 1) goto LAB_829b4e78;
      iVar3 = fn_82930318(0x18);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82932F78();
      }
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(aiStack_50[0] + 4);
        *(int *)(iVar4 + 0x14) = (int)param_3;
        *(undefined4 *)(iVar4 + 0x10) = uVar1;
        uVar2 = fn_82930318(0x50);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_82933088(uVar2,0,0,0,0,1,param_2 + 0x10);
        }
        if (iVar3 != 0) {
          uVar2 = fn_82930318(0x28);
          if ((uVar2 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_82931D88(uVar2,3,*(undefined4 *)(aiStack_50[0] + 0x14),0,1,1,0x200);
          }
          *(int *)(iVar3 + 0x10) = iVar5;
          if (iVar5 != 0) {
            uVar2 = fn_82930318(0x14);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_829304E0(uVar2,0,0,0xffffffff8204e390);
            }
            *(int *)(iVar3 + 0x20) = iVar5;
            if (iVar5 != 0) {
              uVar2 = fn_82930318(0x40);
              if ((uVar2 & 0xffffffff) == 0) {
                iVar4 = 0;
              }
              else {
                iVar4 = fn_829334D8(uVar2,4,iVar4,param_2 + 0x10);
              }
              *(int *)(*(int *)(iVar3 + 0x20) + 8) = iVar4;
              if (iVar4 != 0) {
                fn_82983380(param_1,iVar3);
                goto LAB_829b4e78;
              }
            }
          }
        }
      }
      lVar6 = -0x7ff8fff2;
    }
  }
  else {
    fn_82980C18(param_1,0,3000,0xffffffff82054480);
    lVar6 = -0x7fffbffb;
  }
  iVar3 = 0;
LAB_829b4e78:
  *param_4 = iVar3;
  return lVar6;
}

