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
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_8236D9D0();
extern int fn_82373530();
extern int fn_82377A48();
extern int fn_82377C68();
extern int fn_82382E88();
extern int fn_82383000();
extern int fn_823831D8();
extern int fn_8238EEF0();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AB870();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_823827E8(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar5;
  undefined8 uVar3;
  longlong lVar4;
  int iVar6;
  int iVar7;
  undefined4 *apuStack_50 [2];
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  
  fn_8236D9D0();
  iVar7 = param_1[0x20];
  if (iVar7 == 0) {
    return;
  }
  cVar5 = fn_8288B760(param_1);
  if (cVar5 != '\0') {
    uVar3 = fn_82373530(iVar7);
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x198,uVar3);
    uVar1 = *(undefined4 *)(iVar7 + 0x1e4);
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar4 + 0x144,uVar1);
  }
  if (param_1[0x22] != 0) {
    fn_8238EEF0();
  }
  fn_82383000(&iStack_48,param_1);
  if (iStack_48 == 0) goto LAB_82382a68;
  uVar3 = fn_828A12E8(param_1[4]);
  uVar3 = fn_8288F948(uVar3,10);
  fn_8224E928(auStack_40,uVar3);
  apuStack_50[0] = (undefined4 *)*puStack_3c;
  while (apuStack_50[0] != puStack_3c) {
    piVar2 = (int *)apuStack_50[0][5];
    cVar5 = fn_8288B760(piVar2);
    if (cVar5 != '\0') {
      uVar1 = *(undefined4 *)(iStack_48 + 0x2180);
      lVar4 = (**(code **)(*piVar2 + 8))(piVar2);
      fn_828AB870(lVar4 + 0x2e8,uVar1);
    }
    fn_82248B90(apuStack_50);
  }
  if (*(int *)(iStack_48 + 0xa0) == 0) {
    iVar6 = 0;
LAB_82382950:
    param_1[0x23] = iVar6;
  }
  else if ((param_1[0x23] == 0) && (*(int *)(iVar7 + 0x54) == 3)) {
    fn_82382E88(param_1);
    iVar6 = 1;
    goto LAB_82382950;
  }
  if (param_1[0x24] == 0) {
    if (*(int *)(iStack_48 + 200) == 0) {
      if (*(int *)(iStack_48 + 0xcc) == 0) {
        if (*(int *)(iStack_48 + 0xd0) != 0) {
          fn_82377C68((double)*(float *)(iStack_48 + 0x118),
                            (double)*(float *)(iStack_48 + 0x2140),
                            (double)*(float *)(iStack_48 + 0x2144),iVar7);
        }
      }
      else {
        fn_82377A48((double)*(float *)(iStack_48 + 0x118),iVar7);
      }
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x4c))(param_1);
      fn_823831D8(lVar4 + 0x430);
    }
  }
  if (((*(int *)(iStack_48 + 200) != 0) || (*(int *)(iStack_48 + 0xd0) != 0)) ||
     (iVar7 = 0, *(int *)(iStack_48 + 0xcc) != 0)) {
    iVar7 = 1;
  }
  param_1[0x24] = iVar7;
  fn_8224ED20(apuStack_50,auStack_40,*puStack_3c);
  fn_8265CA20(puStack_3c);
LAB_82382a68:
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}

