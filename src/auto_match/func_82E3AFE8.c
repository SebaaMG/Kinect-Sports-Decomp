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
extern unsigned int *auStack_40;
extern int fn_82E59550();
extern int fn_82E5C7D8();
extern unsigned int uStack_30;


longlong fn_82E3AFE8(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined2 auStack_40 [2];
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
    piStack_34 = (int *)0x0;
    piStack_38 = (int *)0x0;
    piStack_3c = (int *)0x0;
    lVar1 = (**(code **)*param_2)(param_2,0xffffffff82154c58,&piStack_34);
    piVar3 = piStack_3c;
    if (((-1 < lVar1) &&
        (lVar1 = (**(code **)(*param_2 + 0x24))(param_2,0xffffffff82154b18,&piStack_38),
        piVar3 = piStack_3c, -1 < lVar1)) &&
       (lVar1 = (**(code **)(*piStack_38 + 0x14))(), piVar3 = piStack_3c, -1 < lVar1)) {
      uStack_30 = 0;
      while (iVar2 = (**(code **)(*piStack_38 + 0xc))(piStack_38,1,&piStack_3c,&uStack_30),
            piVar3 = piStack_3c, iVar2 == 0) {
        auStack_40[0] = 0;
        lVar1 = fn_82E5C7D8(piStack_3c,auStack_40);
        if (piStack_3c != (int *)0x0) {
          (**(code **)(*piStack_3c + 8))(piStack_3c);
          piStack_3c = (int *)0x0;
        }
        piVar3 = (int *)0x0;
        if ((int)lVar1 < 0) break;
        aiStack_2c[0] = 0;
        lVar1 = fn_82E59550(piStack_34,auStack_40[0],1,aiStack_2c);
        piVar3 = piStack_3c;
        if (lVar1 < 0) break;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + aiStack_2c[0];
      }
    }
    if (piStack_34 != (int *)0x0) {
      (**(code **)(*piStack_34 + 8))();
      piStack_34 = (int *)0x0;
      piVar3 = piStack_3c;
    }
    if (piStack_38 != (int *)0x0) {
      (**(code **)(*piStack_38 + 8))();
      piStack_38 = (int *)0x0;
      piVar3 = piStack_3c;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return lVar1;
}

