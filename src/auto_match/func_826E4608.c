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
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_8268B120();
extern int fn_8268B1F0();
extern int fn_826D74E8();
extern int fn_826F35E8();
extern unsigned int lbl_831E7E64;


int * fn_826E4608(int *param_1,int *param_2,int param_3,ulonglong param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  int *piVar6;
  uint auStack_50 [20];
  
  if ((param_2 != (int *)0x0) &&
     (((param_4 & 1) != 0 || (cVar2 = fn_826F35E8(param_3), cVar2 == '\0')))) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  cVar2 = '\x01';
  bVar5 = true;
  piVar6 = param_5;
  if (param_5 != (int *)0x0) {
LAB_826e4670:
    piVar1 = (int *)*piVar6;
    piVar6 = (int *)piVar6[1];
    if (piVar1 != param_1) goto code_r0x826e4680;
    if ((piVar6 != (int *)0x0) && (cVar2 = '\0', *(int *)(param_3 + 0xc) != 0)) {
      fn_8268AFB0(auStack_50,lbl_831E7E64);
      do {
        uVar3 = (**(code **)(*(int *)*param_5 + 0x30))();
        fn_8268B1F0(auStack_50,uVar3,0xffffffffffffffff);
        fn_8268B120(auStack_50,10);
        param_5 = (int *)param_5[1];
      } while (param_5 != (int *)0x0);
      uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
      fn_8268B1F0(auStack_50,uVar3,0xffffffffffffffff);
      fn_8268B120(auStack_50,10);
      uVar4 = (ulonglong)auStack_50[0];
      if (uVar4 == 0) {
        uVar4 = 0xffffffff82196582;
      }
      fn_82683F88((ulonglong)*(uint *)(param_3 + 0xc) + 0xc,0xffffffff8200d33c,uVar4);
      fn_8268AFD8(auStack_50);
    }
    bVar5 = false;
  }
LAB_826e4754:
  if ((bVar5) && ((param_4 & 1) != 0)) {
    uVar3 = 0x200;
  }
  else {
    if ((!bVar5) || ((param_4 & 2) == 0)) goto LAB_826e478c;
    uVar3 = 0x100;
  }
  cVar2 = fn_826D74E8(param_1[7],uVar3);
LAB_826e478c:
  if (cVar2 == '\0') {
    fn_82687270(param_1);
    param_1 = (int *)0x0;
  }
  return param_1;
code_r0x826e4680:
  if (piVar6 == (int *)0x0) goto LAB_826e4754;
  goto LAB_826e4670;
}

