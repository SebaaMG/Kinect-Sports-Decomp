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
extern unsigned int *auStack_7c;
extern int fn_82E5C778();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820ED058;
extern unsigned int lbl_820ED068;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_82E7CB88(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piStack_80;
  uint auStack_7c [3];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  auStack_7c[0] = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar7 = 0;
  uStack_70 = lbl_8202E618;
  piStack_80 = (int *)0x0;
  uStack_6c = lbl_8202E61C;
  uStack_68 = lbl_8202E620;
  uStack_64 = lbl_8202E624;
  if (param_2 == (int *)0x0) {
    lVar9 = -0x7fffbffd;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    lVar9 = -0x7fff0001;
  }
  else {
    lVar9 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                      (*(int **)(param_1 + 4),0xffffffff82154b18,auStack_7c);
    if (-1 < lVar9) {
      uVar8 = 0;
      if (auStack_7c[0] != 0) {
        do {
          if (piStack_80 != (int *)0x0) {
            (**(code **)(*piStack_80 + 8))();
            piStack_80 = (int *)0x0;
          }
          lVar9 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                            (*(int **)(param_1 + 4),0xffffffff82154b18,uVar8,&piStack_80);
          if (lVar9 < 0) goto LAB_82e7cdbc;
          lVar9 = fn_82E5C778(piStack_80,&uStack_70);
          if (lVar9 < 0) goto LAB_82e7cdbc;
          pbVar5 = (byte *)&uStack_70;
          pbVar6 = &lbl_820ED058;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != &lbl_820ED068);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar3 = 1;
          }
          else {
            pbVar5 = (byte *)&uStack_70;
            pbVar6 = &lbl_820F8EB8;
            do {
              bVar1 = *pbVar6;
              bVar2 = *pbVar5;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar6 = pbVar6 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar6 != &lbl_820F8EC8);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar4 = 1;
            }
            else {
              uVar7 = 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 & 0xffffffff) < (ulonglong)auStack_7c[0]);
      }
      lVar9 = (**(code **)(*param_2 + 0x54))(param_2,0xffffffff8214c240,uVar3);
      if ((-1 < lVar9) &&
         (lVar9 = (**(code **)(*param_2 + 0x54))(param_2,0xffffffff8214c250,uVar4), -1 < lVar9)) {
        lVar9 = (**(code **)(*param_2 + 0x54))(param_2,0xffffffff8214c260,uVar7);
      }
    }
LAB_82e7cdbc:
    if (piStack_80 != (int *)0x0) {
      (**(code **)(*piStack_80 + 8))();
    }
  }
  return lVar9;
}

