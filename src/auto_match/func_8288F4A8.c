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
extern int fn_8288B8B0();
extern int fn_82897620();
extern int fn_8289B290();
extern int fn_828A12E8();
extern int fn_828B5650();
extern unsigned int iStack_40;


void fn_8288F4A8(int *param_1,int param_2)

{
  int iVar1;
  int iVar4;
  ulonglong uVar2;
  char cVar5;
  undefined8 uVar3;
  int *piVar6;
  int iVar7;
  int iStack_40;
  int aiStack_3c [15];
  
  iVar1 = param_1[1];
  for (iVar7 = *param_1; iVar7 != iVar1; iVar7 = iVar7 + 0x20) {
    iVar4 = fn_828A12E8(*(undefined4 *)(param_2 + 0x50));
    uVar2 = fn_8288B8B0(iVar4 + 4,iVar7);
    iStack_40 = (int)uVar2;
    if (((uVar2 & 0xffffffff) == (ulonglong)*(uint *)(iVar4 + 8)) ||
       (cVar5 = fn_828B5650(iVar7,uVar2 + 0xc), cVar5 != '\0')) {
      piVar6 = aiStack_3c;
      aiStack_3c[0] = *(int *)(iVar4 + 8);
    }
    else {
      piVar6 = &iStack_40;
    }
    if (((*piVar6 != *(int *)(iVar4 + 8)) &&
        (piVar6 = *(int **)(*piVar6 + 0x14), piVar6 != (int *)0x0)) &&
       (uVar2 = (**(code **)(*piVar6 + 8))(), (uVar2 & 0xffffffff) != 0)) {
      uVar3 = fn_82897620(uVar2,*(undefined4 *)(iVar7 + 8));
      fn_8289B290(uVar3,param_2,0,0,iVar7 + 0xc);
    }
  }
  return;
}

