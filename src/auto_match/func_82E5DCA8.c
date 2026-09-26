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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE4D00();
extern int fn_82EE4D48();
extern int fn_82EE53B8();
extern unsigned int lbl_82153858;
extern unsigned int lbl_82153868;
extern unsigned int lbl_82153878;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82E5DCA8(int *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  byte abStack_50 [80];
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  puVar5 = (undefined2 *)0x0;
  piStack_6c = (int *)0x0;
  uStack_70 = 0;
  lVar4 = (**(code **)(*param_1 + 0xc))(param_1,abStack_50);
  if (-1 < lVar4) {
    pbVar6 = abStack_50;
    pbVar7 = (byte *)&lbl_82153858;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_82153868);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar6 = abStack_50;
      pbVar7 = &lbl_82153868;
      do {
        if (*pbVar7 != *pbVar6) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != &lbl_82153878);
    }
    lVar4 = (**(code **)(*param_2 + 0x1c))(param_2,0xffffffff82154978,&piStack_6c);
    piVar3 = piStack_6c;
    if (((-1 < lVar4) && (lVar4 = fn_82EE4D00(piStack_6c,auStack_60), -1 < lVar4)) &&
       ((lVar4 = (**(code **)(*param_1 + 0x14))(param_1,&uStack_64,&uStack_68), -1 < lVar4 &&
        ((lVar4 = fn_82EE4D48(piVar3,uStack_64,uStack_68), -1 < lVar4 &&
         (lVar4 = (**(code **)(*param_1 + 0x1c))(param_1,0,&uStack_70), -1 < lVar4)))))) {
      lVar4 = ((ulonglong)uStack_70 & 0x7fffffff) << 1;
      if (0x7fffffff < uStack_70) {
        lVar4 = -1;
      }
      puVar5 = (undefined2 *)fn_82E50BE8(lVar4,0,0,0,0);
      if (puVar5 == (undefined2 *)0x0) {
        lVar4 = -0x7ff8fff2;
      }
      else {
        lVar4 = (**(code **)(*param_1 + 0x1c))(param_1,puVar5,&uStack_70);
        if (-1 < lVar4) {
          uVar8 = 0;
          puVar9 = puVar5;
          if (uStack_70 != 0) {
            do {
              lVar4 = fn_82EE53B8(piVar3,*puVar9);
              if (lVar4 < 0) goto LAB_82e5df70;
              uVar8 = uVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 < uStack_70);
          }
          *param_3 = piStack_6c;
          if (piStack_6c == (int *)0x0) goto LAB_82e5df90;
          (**(code **)(*piStack_6c + 4))();
        }
      }
    }
  }
LAB_82e5df70:
  if (piStack_6c != (int *)0x0) {
    (**(code **)(*piStack_6c + 8))();
    piStack_6c = (int *)0x0;
  }
LAB_82e5df90:
  if (puVar5 != (undefined2 *)0x0) {
    fn_82E4FE40(puVar5);
  }
  return lVar4;
}

