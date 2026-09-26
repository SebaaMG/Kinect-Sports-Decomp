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
extern int fn_82EEDD00();
extern int fn_82F41CE0();


longlong fn_82EEDF48(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piStack_50;
  int aiStack_4c [19];
  
  uVar1 = *(uint *)(param_1 + 0x70);
  piStack_50 = (int *)0x0;
  lVar4 = 0;
  aiStack_4c[0] = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    while (lVar4 = fn_82EEDD00(param_1,uVar5,&piStack_50), piVar2 = piStack_50, -1 < lVar4) {
      if (piStack_50 == (int *)0x0) {
        return -0x3ff2c945;
      }
      if ((((param_2 == (int *)0x0) ||
           ((*piStack_50 == *param_2 && (*(short *)(piStack_50 + 1) == *(short *)(param_2 + 1)))))
          && (piStack_50[2] == 0)) && (uVar6 = 0, (uVar5 & 0xffffffff) != 0)) {
        do {
          lVar4 = fn_82EEDD00(param_1,uVar6,aiStack_4c);
          if (lVar4 < 0) {
            return lVar4;
          }
          if (aiStack_4c[0] == 0) {
            return -0x3ff2c945;
          }
          if (((*(int *)(aiStack_4c[0] + 8) == 0) &&
              (*(short *)(aiStack_4c[0] + 0x14) == *(short *)(piVar2 + 5))) &&
             (iVar3 = fn_82F41CE0(*(undefined4 *)(aiStack_4c[0] + 0x18),piVar2[6]), iVar3 != 0))
          {
            piVar2[2] = 1;
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar5 = uVar5 + 1;
      if ((ulonglong)uVar1 <= (uVar5 & 0xffffffff)) {
        return lVar4;
      }
    }
  }
  return lVar4;
}

