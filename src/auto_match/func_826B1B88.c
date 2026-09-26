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
extern unsigned int *auStack_6f;
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826B0F90();
extern unsigned int uStack_70;


void fn_826B1B88(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 uStack_70;
  undefined1 auStack_6f [15];
  undefined1 auStack_60 [96];
  
  if ((param_4 != (int *)0x0) && (uVar3 = (ulonglong)(uint)param_4[1] - 1, -1 < (longlong)uVar3)) {
    lVar4 = (uVar3 & 0x1fffffff) << 3;
    do {
      piVar5 = (int *)((int)lVar4 + *param_4);
      iVar1 = *piVar5;
      if (piVar5[1] < 0) {
        if (iVar1 == 0) {
LAB_826b1bf0:
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(iVar1 + 0x10);
        }
      }
      else {
        piVar5 = (int *)(iVar1 + 0x68);
        if (iVar1 == 0) goto LAB_826b1bf0;
      }
      auStack_60[0] = 0;
      if ((piVar5 != (int *)0x0) &&
         (cVar2 = (**(code **)(*piVar5 + 0x10))(piVar5,param_1,param_2,auStack_60), cVar2 != '\0'))
      {
        uStack_70 = 0;
        (**(code **)(*piVar5 + 0xc))(piVar5,param_1,param_2,param_3,&uStack_70);
        fn_82696330(auStack_60);
        return;
      }
      fn_82696330(auStack_60);
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -8;
    } while (-1 < (longlong)uVar3);
  }
  uVar3 = fn_826B0F90(param_1,param_2);
  if ((uVar3 & 0xffffffff) == 0) {
    auStack_6f[0] = 0;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x74) + 0x68) + 0xc))
              (*(int *)(param_1 + 0x74) + 0x68,param_1,param_2,param_3,auStack_6f);
  }
  else {
    fn_82695FA0(uVar3,param_3);
  }
  return;
}

