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
extern unsigned int *auStack_160;
extern int fn_8265C9E0();
extern int fn_8265CAA0();
extern int fn_82E1D550();
extern int fn_82E1DAA0();
extern int fn_82E1E6E0();
extern int fn_82E1E768();
extern int fn_82E1EE18();
extern int fn_82E1EE88();
extern int fn_82E1F690();
extern int fn_82E20270();
extern int fn_82E205A0();
extern int fn_82E205F8();
extern int fn_82E206E8();
extern int fn_82E20790();
extern int fn_82E208B0();
extern int fn_82E20A98();
extern int fn_82E21C18();
extern int fn_82F64068();
extern int fn_82F67988();
extern unsigned int uStack_2b;


void fn_82E1F010(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar4;
  char *pcVar3;
  int aiStack_170 [4];
  undefined1 auStack_160 [309];
  undefined1 uStack_2b;
  
  if (*(char *)((int)param_1 + 9) == '\0') {
    return;
  }
  if (*param_1 != 0) {
    fn_8265CAA0();
    *param_1 = 0;
  }
  uVar1 = fn_82E206E8(param_1[0x15]);
  *param_1 = (int)uVar1;
  iVar2 = fn_82E20270(uVar1,0xffffffff821ce364,1);
  if (iVar2 == 0) {
    if (*(char *)(param_1[0x15] + 2) != '\0') goto LAB_82e1f104;
    fn_82F64068(auStack_160,0x136,0x135,0xffffffff8214babc,*param_1);
    uStack_2b = 0;
    if (*param_1 != 0) {
      fn_8265CAA0();
      *param_1 = 0;
    }
    uVar1 = fn_82E1F690(0xffffffff8214bab0);
    *param_1 = (int)uVar1;
    iVar2 = fn_82E20270(uVar1,0xffffffff8214baac,1);
    if (iVar2 == 0) goto LAB_82e1f104;
    fn_82F67988();
    fn_82E1EE18(param_1,0xffffffff8214ba98,0xffffffff8214baa4,auStack_160);
  }
  else {
    fn_82F67988();
  }
  *(undefined1 *)((int)param_1 + 10) = 1;
LAB_82e1f104:
  if (*(char *)(param_1[0x15] + 2) == '\0') {
    uVar1 = fn_82E20790(param_1[0x15],*param_1);
    fn_82E205A0(uVar1,0xffffffff8214b914);
    fn_82E205F8(uVar1,0);
    fn_82E208B0(param_1[0x15],uVar1,0xffffffff8214ba8c);
    *(int *)(param_1[0x15] + 4) = *(int *)(param_1[0x15] + 4) + 1;
    fn_82E20A98(param_1[0x15]);
  }
  if (*(char *)(param_1[0x15] + 1) != '\0') {
    if (param_1[0x16] == 0) {
      iVar2 = fn_8265C9E0(0xc);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82E21C18();
      }
      param_1[0x16] = iVar2;
    }
    cVar4 = (**(code **)(*(int *)param_1[0x16] + 4))();
    if (cVar4 == '\0') {
      *(undefined1 *)((int)param_1 + 9) = 0;
      return;
    }
    aiStack_170[0] = 0;
    uVar1 = (**(code **)(*(int *)param_1[0x16] + 8))((int *)param_1[0x16],aiStack_170);
    if (*(char *)((int)param_1 + 10) != '\0') {
      if (*(char *)((int)param_1 + 0xf) == '\0') {
        fn_82E1E6E0(param_1,aiStack_170[0],uVar1);
      }
      else {
        fn_82E1E768();
      }
    }
    if (aiStack_170[0] != 0) {
      fn_8265CAA0();
    }
  }
  fn_82E1EE88(param_1);
  iVar2 = fn_82E1D550();
  pcVar3 = (char *)fn_82E1DAA0(*(undefined4 *)(iVar2 + 8));
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    fn_82E1EE18(param_1,0xffffffff8214ba80,0xffffffff8200e0b8);
  }
  return;
}

