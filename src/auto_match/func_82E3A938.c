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
extern unsigned int *auStack_30;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack_40;


longlong fn_82E3A938(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  uint uStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 auStack_30 [12];
  
  if (param_4 == (int *)0x0) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 == (int *)0x0) {
    return -0x3ff2c94a;
  }
  piStack_38 = (int *)0x0;
  piStack_3c = (int *)0x0;
  piStack_34 = (int *)0x0;
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  lVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&stack0x00000020,param_4);
  if (-1 < lVar2) {
    if (*param_4 == 0) {
      lVar2 = -0x3ff2c945;
    }
    else {
      lVar2 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                        (*(undefined4 **)(param_1 + 0x48),0xffffffff82154c18,&piStack_38);
      if (-1 < lVar2) {
        auStack_30[0] = 0;
        lVar2 = (**(code **)(*piStack_38 + 0x14))(piStack_38,*param_4,auStack_30);
        if (-1 < lVar2) {
          uStack_40 = 0;
          iVar3 = (*(code *)**(undefined4 **)*param_4)
                            ((undefined4 *)*param_4,0xffffffff82154c88,&piStack_3c);
          if (iVar3 < 0) {
            iVar3 = (*(code *)**(undefined4 **)*param_4)
                              ((undefined4 *)*param_4,0xffffffff82154c98,&piStack_34);
            if (-1 < iVar3) {
              lVar2 = (**(code **)(*piStack_34 + 0x28))(piStack_34,&uStack_40);
              if (lVar2 < 0) goto LAB_82e3ab08;
              uStack_40 = uStack_40 & 0xfffffffe;
              lVar2 = (**(code **)(*piStack_34 + 0x24))();
            }
LAB_82e3ab00:
            if (-1 < (int)lVar2) goto LAB_82e3ab28;
          }
          else {
            lVar2 = (**(code **)(*piStack_3c + 0x28))(piStack_3c,&uStack_40);
            if (-1 < lVar2) {
              uStack_40 = uStack_40 & 0xfffffffe;
              lVar2 = (**(code **)(*piStack_3c + 0x24))();
              if (-1 < lVar2) goto LAB_82e3ab00;
            }
          }
        }
      }
    }
  }
LAB_82e3ab08:
  if ((int *)*param_4 != (int *)0x0) {
    (**(code **)(*(int *)*param_4 + 8))();
    *param_4 = 0;
  }
LAB_82e3ab28:
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 8))();
    piStack_38 = (int *)0x0;
  }
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (piStack_34 != (int *)0x0) {
    (**(code **)(*piStack_34 + 8))();
  }
  return lVar2;
}

