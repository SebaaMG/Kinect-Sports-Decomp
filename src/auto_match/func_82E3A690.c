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
extern int fn_82E65CB8();
extern int fn_82E65EE8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8 fn_82E3A690(undefined8 param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  ulonglong uVar4;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong alStack_40 [8];
  
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    piStack_5c = (int *)0x0;
    piStack_58 = (int *)0x0;
    piStack_60 = (int *)0x0;
    uStack_54 = 0;
    iVar2 = (**(code **)(*param_2 + 0x44))(param_2,&uStack_54);
    piVar3 = piStack_60;
    if (((-1 < iVar2) &&
        (iVar2 = fn_82E65EE8(uStack_54,&piStack_5c), piVar3 = piStack_60, -1 < iVar2)) &&
       (iVar2 = fn_82E65CB8(piStack_5c,&piStack_58), piVar3 = piStack_60, -1 < iVar2)) {
      uStack_50 = 0;
      iVar2 = (**(code **)(*param_2 + 0x3c))(param_2,&uStack_50);
      piVar3 = piStack_60;
      if ((-1 < iVar2) && (uVar4 = 0, uStack_50 != 0)) {
        while (iVar2 = (**(code **)(*param_2 + 0x40))(param_2,uVar4,&piStack_60),
              piVar3 = piStack_60, -1 < iVar2) {
          alStack_40[0] = 0;
          iVar2 = (**(code **)(*param_2 + 0x4c))(param_2,piStack_60,alStack_40);
          piVar3 = piStack_60;
          if (iVar2 < 0) break;
          uStack_4c = 0;
          iVar2 = (**(code **)(*piStack_5c + 0xc))(piStack_5c,&uStack_4c,0,0);
          piVar3 = piStack_60;
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(*param_3 + 0x1c))(param_3,alStack_40[0] + param_4),
             piVar3 = piStack_60, iVar2 < 0)) break;
          uStack_48 = 0;
          iVar2 = (**(code **)(*param_3 + 0x24))(param_3,uStack_4c,uStack_54,&uStack_48);
          (**(code **)(*piStack_5c + 0x10))(piStack_5c);
          piVar3 = piStack_60;
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(*piStack_58 + 0xc))(piStack_58,uStack_48), piVar3 = piStack_60,
             iVar2 < 0)) break;
          uStack_44 = 0;
          iVar2 = (**(code **)(*piStack_60 + 0x14))(piStack_60,piStack_58,0,&uStack_44);
          piVar3 = piStack_60;
          if (iVar2 < 0) break;
          if (piStack_60 != (int *)0x0) {
            (**(code **)(*piStack_60 + 8))(piStack_60);
            piStack_60 = (int *)0x0;
          }
          piVar3 = (int *)0x0;
          uVar4 = uVar4 + 1;
          if ((ulonglong)uStack_50 <= (uVar4 & 0xffffffff)) break;
        }
      }
    }
    if (piStack_5c != (int *)0x0) {
      (**(code **)(*piStack_5c + 8))();
      piStack_5c = (int *)0x0;
      piVar3 = piStack_60;
    }
    if (piStack_58 != (int *)0x0) {
      (**(code **)(*piStack_58 + 8))();
      piStack_58 = (int *)0x0;
      piVar3 = piStack_60;
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}

