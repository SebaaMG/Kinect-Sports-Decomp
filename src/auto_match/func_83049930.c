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
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_82FA5100();
extern int fn_830497E8();
extern int fn_83049850();
extern int fn_8304D8A0();
extern int fn_8307DBA0();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E600();
extern int fn_8307E6E0();
extern int fn_8307E7A8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_7c;
extern unsigned int uStack_7e;
extern unsigned int uStack_90;
extern unsigned int uStack_97;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_83049930(int *param_1,char param_2)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  struct { undefined4 first; undefined4 second; } stack_pair_a0;

  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_90;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [2];
  ushort uStack_7e;
  undefined4 uStack_7c;
  int iStack_68;
  int iStack_58;
  int iStack_54;
  
  uVar6 = (ulonglong)*(uint *)(param_1[2] + 0x138);
  if (uVar6 != 0) {
    piVar4 = param_1 + 4;
    if (param_1[5] != 0) {
      piVar4 = (int *)0x0;
    }
    piVar8 = param_1 + 9;
    piVar7 = param_1 + 8;
    iVar3 = fn_8304D8A0(uVar6,*(undefined4 *)(param_1[2] + 0x13c),auStack_80,0x34,piVar4,piVar7,
                            piVar8,param_1 + 0xb);
    if (iVar3 != 1) {
      return 7;
    }
    param_1[0xd] = iStack_68;
    if (iStack_54 == 0) {
      *piVar8 = iStack_68;
      *piVar7 = 0;
    }
    else {
      *piVar8 = iStack_58 + iStack_54;
      *piVar7 = iStack_58;
    }
    piVar4 = param_1 + 10;
    if (param_1[10] != 0) {
      fn_8307DE78(*piVar4);
      fn_8307E6E0(*piVar4);
LAB_83049b04:
      if (param_2 == '\0') {
        uVar2 = fn_830497E8(param_1,auStack_80,auStack_8c,uStack_90,uVar6);
      }
      else {
        uVar2 = fn_83049850();
      }
      fn_8307E060(*piVar4);
      return uVar2;
    }
    uVar5 = (0x20 - (ulonglong)uStack_7e & 0xffffff) << 8;
    if (0x1f00 < uVar5) {
      uVar5 = 0x1f00;
    }
    uVar1 = (ulonglong)uStack_7e << 1;
    uStack_98 = (undefined1)uStack_7e;
    stack_pair_a0.second = (undefined4)(uVar5 / uVar1);
    stack_pair_a0.first = uStack_7c;
    trapWord(6,uVar1,0);
    uStack_97 = 2;
    uVar2 = fn_8307DBA0(1,&stack_pair_a0.first);
    uVar5 = fn_82FA5100(lbl_831BC770,uVar2,0x100);
    param_1[0xe] = (int)uVar5;
    if ((uVar5 & 0xffffffff) == 0) {
      return 0x34;
    }
    iVar3 = fn_8307E7A8(1,&stack_pair_a0.first,2,piVar4,uVar5,uVar2);
    if (iVar3 == 0) {
      fn_8307DE78(*piVar4);
      fn_8307E6E0(*piVar4);
      iVar3 = fn_8307E600(*piVar4,0,(uint)param_1[0xc] + uVar6,param_1[0xb]);
      if (iVar3 == 0) goto LAB_83049b04;
    }
    (**(code **)(*param_1 + 0x24))(param_1);
  }
  return 2;
}

