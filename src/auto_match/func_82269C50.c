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
extern unsigned int *auStack_464;
extern unsigned int *auStack_47c;
extern unsigned int *auStack_70;
extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225C5F8();
extern int fn_8225D1F8();
extern int fn_8225DA18();
extern int fn_82269DE0();
extern int fn_82486B08();
extern int fn_82829120();
extern int fn_82A1DD38();
extern unsigned int iStack_480;
extern unsigned int uStack_46c;
extern unsigned int uStack_470;


void fn_82269C50(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iStack_480;
  undefined4 auStack_47c [3];
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_464 [1012];
  undefined1 auStack_70 [112];
  
  if (param_1[0xda] != 0) {
    for (puVar1 = (undefined4 *)**(undefined4 **)param_1[0xb3];
        puVar1 != *(undefined4 **)param_1[0xb3]; puVar1 = (undefined4 *)*puVar1) {
      iVar7 = puVar1[2];
      if ((ulonglong)*(uint *)(iVar7 + 0x40) == (param_2 & 0xffffffff)) goto LAB_82269ca4;
    }
    iVar7 = 0;
LAB_82269ca4:
    iVar2 = *(int *)(iVar7 + 0xdc);
    for (iVar7 = *param_1;
        (iVar7 != param_1[1] && ((ulonglong)*(uint *)(iVar7 + 0x40) != (param_2 & 0xffffffff)));
        iVar7 = iVar7 + 0xe0) {
    }
    lVar5 = fn_8225C590();
    piVar3 = *(int **)(iVar2 + 0x8c0);
    uVar6 = (**(code **)(*piVar3 + 100))(piVar3);
    auStack_47c[0] = fn_8225DA18(lVar5,*(undefined4 *)(iVar7 + 0xd0));
    fn_82829120(&iStack_480,lVar5 + 0x48,auStack_47c);
    iVar4 = *(int *)(iStack_480 + 0x10);
    fn_82A1DD38(iVar4,uVar6,1000);
    *(undefined4 *)(iVar4 + 0x404) = 1;
    *(undefined4 *)(iVar4 + 0x408) = 1;
    if (param_1[0xd9] != 0) {
      fn_82486B08(&uStack_470);
      uStack_470 = 0;
      uStack_46c = *(undefined4 *)(iVar7 + 0xd0);
      fn_82A1DD38(auStack_464,uVar6,1000);
      fn_82A1DD38((ulonglong)(uint)param_1[0xe3] + 0x838,&uStack_470,0x420);
      fn_8225D1F8(lVar5,*(undefined4 *)(iVar7 + 0xd0));
      fn_8225C5F8(lVar5);
      fn_82269DE0(param_1,param_2);
      fn_82230300(auStack_70,1,0);
    }
    param_1[0xe9] = iVar2;
    param_1[0xe6] = 0;
    param_1[0xea] = param_1[0xdb];
    param_1[0xe7] = *(int *)(iVar7 + 0xd0);
    (*(code *)param_1[0xda])(param_1 + 0xe6);
  }
  return;
}

