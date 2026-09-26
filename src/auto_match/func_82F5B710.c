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
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_828F0DD0();
extern int fn_82F5B678();
extern unsigned int lbl_831BB030;
extern unsigned int lbl_831BB034;


undefined8 fn_82F5B710(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *apiStack_40 [16];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(int *)(param_1 + 0x38) = (int)param_2;
    *(undefined4 *)(param_1 + 0x40) = 6;
    if (param_3 == 1) {
      uVar6 = 0x140;
      uVar5 = 0xf0;
    }
    else {
      uVar6 = 0x280;
      uVar5 = 0x1e0;
    }
    *(undefined4 *)(param_1 + 0x44) = uVar6;
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    apiStack_40[0] = (int *)0x0;
    pcVar7 = lbl_831BB030;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar4 = fn_828F0DD0(lbl_831BB030,
                              pcVar7 + (-1 - (int)lbl_831BB030),
                              0,0,0xffffffff82167bfc,0xffffffff8200532c,0,apiStack_40);
    if (-1 < iVar4) {
      (**(code **)(*apiStack_40[0] + 0xc))();
      uVar5 = fn_82631830();
      puVar2 = lbl_831BB030;
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      piStack_50 = (int *)0x0;
      pcVar7 = puVar2;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar4 = fn_828F0DD0(puVar2,pcVar7 + (-1 - (int)puVar2),0,0,0xffffffff82167be8,
                                0xffffffff82005334,0,&piStack_50);
      if (-1 < iVar4) {
        (**(code **)(*piStack_50 + 0xc))();
        uVar5 = fn_82631488();
        *(undefined4 *)(param_1 + 0x10) = uVar5;
        (**(code **)(*piStack_50 + 8))(piStack_50);
        piStack_50 = (int *)0x0;
        piStack_4c = (int *)0x0;
        pcVar7 = lbl_831BB030;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iVar4 = fn_828F0DD0(lbl_831BB030,
                                  pcVar7 + (-1 - (int)
                                                 lbl_831BB030),0
                                  ,0,0xffffffff82167bd4,0xffffffff82005334,0,&piStack_4c);
        if (-1 < iVar4) {
          (**(code **)(*piStack_4c + 0xc))();
          uVar5 = fn_82631488();
          *(undefined4 *)(param_1 + 0x20) = uVar5;
          (**(code **)(*piStack_4c + 8))(piStack_4c);
          piStack_4c = (int *)0x0;
          uVar5 = fn_82631BF8(0xffffffff82167bb0);
          puVar2 = lbl_831BB034;
          *(undefined4 *)(param_1 + 8) = uVar5;
          piStack_48 = (int *)0x0;
          pcVar7 = puVar2;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iVar4 = fn_828F0DD0(puVar2,pcVar7 + (-1 - (int)puVar2),0,0,0xffffffff82167b98,
                                    0xffffffff8200532c,0,&piStack_48);
          if (-1 < iVar4) {
            (**(code **)(*piStack_48 + 0xc))();
            uVar5 = fn_82631830();
            *(undefined4 *)(param_1 + 0x18) = uVar5;
            (**(code **)(*piStack_48 + 8))();
            piStack_48 = (int *)0x0;
            piStack_44 = (int *)0x0;
            pcVar7 = lbl_831BB034;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            iVar4 = fn_828F0DD0(lbl_831BB034,
                                      pcVar7 + (-1 - (int)
                                                  lbl_831BB034
                                               ),0,0,0xffffffff82167b84,0xffffffff82005334,0,
                                      &piStack_44);
            if (-1 < iVar4) {
              (**(code **)(*piStack_44 + 0xc))();
              uVar5 = fn_82631488();
              *(undefined4 *)(param_1 + 0x1c) = uVar5;
              (**(code **)(*piStack_44 + 8))();
              piStack_44 = (int *)0x0;
              uVar5 = fn_82631BF8(0xffffffff82167b60);
              *(undefined4 *)(param_1 + 0x14) = uVar5;
              iVar4 = fn_82F5B678(param_1,param_2);
              if (-1 < iVar4) {
                *(undefined4 *)(param_1 + 0x24) = 1;
                goto LAB_82f5ba7c;
              }
            }
          }
        }
      }
    }
    uVar3 = 0xffffffff80004005;
  }
  else {
LAB_82f5ba7c:
    uVar3 = 0;
  }
  return uVar3;
}

