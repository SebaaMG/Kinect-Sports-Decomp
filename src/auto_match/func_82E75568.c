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
extern int fn_82E275A8();
extern int fn_82E27D58();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E5E288();
extern int fn_82EEAF48();
extern int fn_82EEB190();
extern int fn_82EEB200();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


ulonglong fn_82E75568(int param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar3;
  ulonglong uVar2;
  longlong lVar4;
  uint uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong alStack_30 [6];
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  uStack_40 = 0;
  piStack_3c = (int *)0x0;
  alStack_30[0] = 0;
  uStack_34 = 0;
  uStack_38 = 1;
  uVar1 = (**(code **)(*param_2 + 0x90))(param_2,&piStack_3c);
  uStack_40 = (uint)uVar1;
  if (-1 < (int)uStack_40) {
    iVar3 = fn_82E27D58(piStack_3c,0xffffffff82153588,&uStack_34,&uStack_38);
    if (-1 < iVar3) {
      uVar1 = fn_82E275A8(uStack_34,uStack_38,alStack_30);
      uStack_40 = (uint)uVar1;
      if ((int)uStack_40 < 0) goto LAB_82e75708;
    }
    lVar4 = alStack_30[0];
    if (alStack_30[0] == 0) {
      if (*(uint *)(param_1 + 0x18) < 0x249f1) {
        lVar4 = 0x51615;
      }
      else {
        lVar4 = 0xa2c2a;
      }
    }
    *(longlong *)(param_1 + 0x68) = lVar4;
    if (*(int *)(param_1 + 0x5c) != 0) {
      trapDoubleWordImmediate(6,lVar4,0);
      uVar1 = fn_82EEAF48(*(int *)(param_1 + 0x5c),
                              (10000000 / lVar4 & 0xffffffffU) * 0x88 +
                              (ulonglong)*(uint *)(param_1 + 0x18));
      uStack_40 = (uint)uVar1;
      if ((int)uStack_40 < 0) goto LAB_82e75708;
    }
    iVar3 = fn_82E5E288(param_2,0xffffffff8214c2b0);
    if (iVar3 == 0) {
      uVar1 = (ulonglong)uStack_40;
    }
    else {
      uVar1 = fn_82E50BE8(0xec,0,0,0,0);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_82EEB190(uVar1,&uStack_40);
      }
      uVar1 = (ulonglong)uStack_40;
      *(int *)(param_1 + 0x70) = (int)uVar2;
      if ((int)uStack_40 < 0) {
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82EEB200(uVar2);
          fn_82E4FE40(uVar2);
          uVar1 = (ulonglong)uStack_40;
        }
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
    }
  }
LAB_82e75708:
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))(piStack_3c);
    uVar1 = (ulonglong)uStack_40;
  }
  return uVar1;
}

