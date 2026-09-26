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
extern int fn_82E3BDF8();
extern int fn_82E3BFD8();
extern int fn_82E3C690();
extern int fn_82E3EC48();
extern int fn_82E40EC8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E58B58();
extern int fn_82E58BE8();
extern int fn_82E6EF40();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


longlong fn_82E41408(int *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  longlong lVar4;
  uint uVar5;
  int *piStack_80;
  uint uStack_7c;
  int *apiStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [96];
  
  fn_82E50CB8(param_1 + 2);
  if (param_2 == (undefined4 *)0x0) {
    lVar4 = -0x7fffbffd;
    goto LAB_82e4143c;
  }
  uStack_7c = 0;
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1,&uStack_7c);
  if (-1 < lVar4) {
    if (uStack_7c != param_3) {
      lVar4 = -0x7ff8ffa9;
      goto LAB_82e4143c;
    }
    if ((param_1[0x11] & 1U) == 0) {
      lVar4 = fn_82E3EC48(param_1);
      if ((-1 < lVar4) && (lVar4 = fn_82E40EC8(param_1,*param_2), -1 < lVar4)) {
LAB_82e414c0:
        if (-1 < (int)lVar4) goto LAB_82e4143c;
      }
    }
    else if (*(longlong *)(param_1 + 0x1c) == 0) {
      lVar4 = fn_82E3BFD8(param_1);
      if (-1 < lVar4) {
        uVar5 = 0;
        if (param_3 != 0) {
          param_2 = param_2 + -1;
          do {
            if (param_2[1] == 0) {
              lVar4 = -0x7fffbffd;
              goto LAB_82e414c8;
            }
            iVar3 = fn_82E58B58(param_1 + 0x30);
            if (iVar3 == 0) {
              lVar4 = -0x7ff8fff2;
              break;
            }
            param_2 = param_2 + 1;
            (**(code **)(*(int *)*param_2 + 4))();
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_3);
        }
        if (-1 < (int)lVar4) {
          piStack_80 = (int *)0x0;
          apiStack_78[0] = (int *)0x0;
          uStack_70 = 0;
          uStack_6c = 0;
          iVar3 = fn_82E3BDF8(param_1 + 0x6b,&uStack_70);
          if (iVar3 == 0) goto LAB_82e414c0;
          do {
            do {
              iVar3 = fn_82E3C690(param_1 + 0x6b,&uStack_70,auStack_60,apiStack_78);
              if (iVar3 == 0) goto LAB_82e414c0;
              iVar3 = fn_82E58BE8(param_1 + 0x30,&piStack_80);
              piVar1 = apiStack_78[0];
              if (iVar3 == 0) goto LAB_82e414c0;
              lVar4 = fn_82E6EF40(apiStack_78[0],piStack_80);
              if (piStack_80 != (int *)0x0) {
                (**(code **)(*piStack_80 + 8))(piStack_80);
                piStack_80 = (int *)0x0;
              }
              if ((int)lVar4 < 0) goto LAB_82e414c8;
              lVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
            } while (lVar2 == 0);
            iVar3 = fn_82E58BE8(param_1 + 0x30,&piStack_80);
            if (iVar3 == 0) goto LAB_82e414c0;
            lVar4 = fn_82E6EF40(lVar2,piStack_80);
            if (piStack_80 != (int *)0x0) {
              (**(code **)(*piStack_80 + 8))(piStack_80);
              piStack_80 = (int *)0x0;
            }
          } while (-1 < (int)lVar4);
        }
      }
    }
    else {
      lVar4 = -0x3ff2b9b0;
    }
  }
LAB_82e414c8:
  fn_82E3EC48(param_1);
LAB_82e4143c:
  fn_82E50F10(param_1 + 2);
  return lVar4;
}

