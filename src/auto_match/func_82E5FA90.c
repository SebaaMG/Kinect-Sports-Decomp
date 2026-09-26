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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_82E5E1F0();
extern int fn_82E62630();
extern int fn_82E628A0();
extern unsigned int uStack_5c;


longlong fn_82E5FA90(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int *piStack_60;
  uint uStack_5c;
  uint auStack_58 [2];
  ulonglong auStack_50 [10];
  
  if ((param_1 == (int *)0x0) || ((param_2 & 0xffffffff) == 0)) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    auStack_50[0] = 0;
    piStack_60 = (int *)0x0;
    lVar1 = fn_82E62630(param_2,auStack_50);
    if (-1 < lVar1) {
      if (auStack_50[0] == 0) {
        auStack_58[0] = 0;
        lVar1 = (**(code **)(*param_1 + 0x84))(param_1,auStack_58);
        if (-1 < lVar1) {
          uVar3 = 0;
          if (auStack_58[0] != 0) {
            do {
              lVar1 = (**(code **)(*param_1 + 0x88))(param_1,uVar3,0,&piStack_60);
              if (lVar1 < 0) goto LAB_82e5fbf8;
              uStack_5c = 0;
              iVar2 = fn_82E5E1F0(piStack_60,0xffffffff8214c290,0,&uStack_5c);
              if ((-1 < iVar2) && (auStack_50[0] < uStack_5c)) {
                auStack_50[0] = (ulonglong)uStack_5c;
              }
              iVar2 = fn_82E5E1F0(piStack_60,0xffffffff8214c2a0,0,&uStack_5c);
              if ((-1 < iVar2) && (auStack_50[0] < uStack_5c)) {
                auStack_50[0] = (ulonglong)uStack_5c;
              }
              if (piStack_60 != (int *)0x0) {
                (**(code **)(*piStack_60 + 8))();
                piStack_60 = (int *)0x0;
              }
              uVar3 = uVar3 + 1;
            } while ((uVar3 & 0xffffffff) < (ulonglong)auStack_58[0]);
          }
          lVar1 = fn_82E628A0(param_2,auStack_50[0]);
        }
      }
      else {
        lVar1 = 1;
      }
    }
LAB_82e5fbf8:
    if (piStack_60 != (int *)0x0) {
      (**(code **)(*piStack_60 + 8))();
    }
  }
  return lVar1;
}

