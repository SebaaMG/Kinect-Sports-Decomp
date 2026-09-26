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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8273D588();
extern int fn_8277B730();
extern unsigned int stack0x0000001c;


int fn_82782F20(int *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int in_stack_0000001c;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [72];
  
  iVar6 = param_2 * 4;
  piVar5 = param_1 + 1;
  iVar1 = *(int *)(*param_1 + 0xc);
  piVar3 = *(int **)(iVar1 + 8);
  uVar4 = (longlong)*(int *)(iVar1 + 4) * (longlong)param_2 + (ulonglong)*(uint *)(*param_1 + 8);
  if (*(int *)(iVar6 + param_1[1]) == -1) {
    *(int *)(iVar6 + param_1[1]) = param_2;
    iVar1 = *piVar3;
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,uVar4);
    if ((uVar4 & 0xffffffff) == (param_3 & 0xffffffff)) {
      return param_2;
    }
    while (iVar1 = *(int *)(iVar6 + *piVar5), iVar1 != param_2) {
      iVar6 = *(int *)(*param_1 + 0xc);
      piVar3 = *(int **)(iVar6 + 8);
      uVar4 = (**(code **)(*piVar3 + 0x1c))
                        (piVar3,(longlong)*(int *)(iVar6 + 4) * (longlong)iVar1 +
                                (ulonglong)*(uint *)(*param_1 + 8));
      if ((uVar4 & 0xffffffff) == (param_3 & 0xffffffff)) {
        return iVar1;
      }
      param_2 = iVar1;
      iVar6 = iVar1 << 2;
    }
    iVar1 = *(int *)(*param_1 + 0xc);
    piVar3 = *(int **)(iVar1 + 8);
    lVar7 = (longlong)*(int *)(iVar1 + 4) * (longlong)param_2 + (ulonglong)*(uint *)(*param_1 + 8);
    (**(code **)(*piVar3 + 0x18))(piVar3,lVar7);
    (**(code **)(*piVar3 + 0xc))(piVar3,lVar7,&fStack_4c,&fStack_50);
    *(undefined4 *)(iVar6 + *piVar5) = *(undefined4 *)*param_1;
    param_2 = *(int *)*param_1;
    in_stack_0000001c = param_2;
    fn_8273D588(piVar5,&stack0x0000001c);
    puVar2 = (uint *)fn_8277B730(auStack_48,*param_1);
    piVar3 = (int *)puVar2[1];
    uVar4 = (ulonglong)*puVar2;
    (**(code **)(*piVar3 + 4))((double)fStack_4c,(double)fStack_50,piVar3,uVar4);
    iVar1 = *piVar3;
  }
  (**(code **)(iVar1 + 0x14))(piVar3,uVar4,param_3);
  return param_2;
}

