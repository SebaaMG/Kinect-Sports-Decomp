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
extern unsigned int *auStack_48;


longlong fn_82E3A1C0(int param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piStack_50;
  int *piStack_4c;
  uint auStack_48 [2];
  longlong alStack_40 [8];
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    lVar1 = -0x3ff2b9ab;
  }
  else if (param_2 == (longlong *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = -0x3ff2c94a;
    }
    else {
      piStack_4c = (int *)0x0;
      piStack_50 = (int *)0x0;
      lVar1 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                        (*(undefined4 **)(param_1 + 0x48),0xffffffff82154c18,&piStack_4c);
      piVar2 = piStack_50;
      if (-1 < lVar1) {
        auStack_48[0] = 0;
        lVar1 = (**(code **)(*piStack_4c + 0xc))(piStack_4c,0xffffffff8202e618,auStack_48);
        piVar2 = piStack_50;
        if (-1 < lVar1) {
          lVar3 = 0;
          uVar4 = 0;
          if (auStack_48[0] != 0) {
            do {
              lVar1 = (**(code **)(*piStack_4c + 0x10))
                                (piStack_4c,0xffffffff8202e618,uVar4,&piStack_50);
              piVar2 = piStack_50;
              if (lVar1 < 0) goto LAB_82e3a330;
              alStack_40[0] = 0;
              lVar1 = (**(code **)(*piStack_50 + 0x14))(piStack_50,0,alStack_40);
              piVar2 = piStack_50;
              if (lVar1 < 0) goto LAB_82e3a330;
              lVar3 = alStack_40[0] + lVar3;
              if (piStack_50 != (int *)0x0) {
                (**(code **)(*piStack_50 + 8))();
                piStack_50 = (int *)0x0;
              }
              piVar2 = (int *)0x0;
              uVar4 = uVar4 + 1;
            } while ((uVar4 & 0xffffffff) < (ulonglong)auStack_48[0]);
          }
          *param_2 = lVar3;
        }
      }
LAB_82e3a330:
      if (piStack_4c != (int *)0x0) {
        (**(code **)(*piStack_4c + 8))(piStack_4c);
        piStack_4c = (int *)0x0;
        piVar2 = piStack_50;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
    }
  }
  return lVar1;
}

