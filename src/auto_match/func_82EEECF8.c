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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EED968();
extern int fn_82EEDEA0();
extern int fn_82EEDF48();
extern int fn_82F41920();
extern int fn_82F41938();
extern int fn_82F41B20();


longlong fn_82EEECF8(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  int aiStack_50 [20];
  
  piVar3 = (int *)0x0;
  fn_82EEDEA0();
  aiStack_50[0] = 0;
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1,aiStack_50);
  if (-1 < lVar1) {
    iVar4 = 0;
    if (0 < aiStack_50[0]) {
      do {
        iVar2 = fn_82E50BE8(0x68,0,0,0,0);
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)fn_82F41938();
        }
        if (piVar3 == (int *)0x0) {
          lVar1 = -0x7ff8fff2;
          break;
        }
        *piVar3 = iVar4;
        *(undefined2 *)(piVar3 + 1) = 0;
        lVar1 = (**(code **)(*param_1 + 0x24))(param_1,0x20100,piVar3);
        if (lVar1 < 0) break;
        fn_82F41B20(piVar3);
        fn_82E4FE40(piVar3);
        iVar4 = iVar4 + 1;
        piVar3 = (int *)0x0;
      } while (iVar4 < aiStack_50[0]);
    }
    iVar4 = 0;
    if (0 < aiStack_50[0]) {
      do {
        sVar5 = 0;
LAB_82eeef40:
        if ((int)lVar1 == 0) {
          do {
            iVar2 = fn_82E50BE8(0x68,0,0,0,0);
            if (iVar2 == 0) {
              piVar3 = (int *)0x0;
            }
            else {
              piVar3 = (int *)fn_82F41938();
            }
            if (piVar3 == (int *)0x0) {
              return -0x7ff8fff2;
            }
            *(short *)(piVar3 + 1) = sVar5;
            *piVar3 = iVar4;
            lVar1 = (**(code **)(*param_1 + 0x24))(param_1,0x30200,piVar3);
            iVar2 = (int)lVar1;
            if (iVar2 == -0x3ff2c174) {
              fn_82F41B20(piVar3);
              fn_82E4FE40(piVar3);
            }
            else {
              if (iVar2 < 0) goto LAB_82eeef8c;
              if (piVar3[0x14] != 0) {
                fn_82F41B20();
                fn_82E4FE40(piVar3);
                sVar5 = sVar5 + 1;
                goto LAB_82eeef3c;
              }
              fn_82F41920(piVar3);
              if (iVar2 != 0) goto LAB_82eeef2c;
              if ((piVar3[0xf] == 6) || (*(short *)(piVar3 + 0x10) != 0)) {
                piVar3[2] = 1;
              }
              iVar2 = fn_82EED968(param_1 + 2,piVar3,0);
              lVar1 = -0x7ff8fff2;
              if (iVar2 == 0) break;
            }
            sVar5 = sVar5 + 1;
          } while( true );
        }
        if ((int)lVar1 < 0) goto LAB_82eeef8c;
        iVar4 = iVar4 + 1;
        lVar1 = 0;
        if (aiStack_50[0] <= iVar4) goto LAB_82eeef5c;
      } while( true );
    }
    if (-1 < (int)lVar1) {
LAB_82eeef5c:
      lVar1 = fn_82EEDF48(param_1,0);
      if (-1 < lVar1) {
        param_1[0x1d] = 1;
        lVar1 = (**(code **)(*param_1 + 4))(param_1);
      }
    }
LAB_82eeef8c:
    if (piVar3 != (int *)0x0) {
      fn_82F41B20(piVar3);
      fn_82E4FE40(piVar3);
    }
  }
  return lVar1;
LAB_82eeef2c:
  fn_82F41B20(piVar3);
  fn_82E4FE40(piVar3);
LAB_82eeef3c:
  piVar3 = (int *)0x0;
  goto LAB_82eeef40;
}

