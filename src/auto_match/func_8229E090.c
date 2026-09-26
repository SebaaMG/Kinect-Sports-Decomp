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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_822848B8();
extern int fn_8229E260();
extern int fn_8266F628();
extern int fn_82672660();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_60;


void fn_8229E090(int *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uStack_60;
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  lVar5 = 0;
  uStack_60 = 0;
  if (param_1[0x104] == 0) {
    param_1[0x104] = 1;
    piVar3 = (int *)fn_82279C58(auStack_50,*param_1);
    iVar1 = *piVar3;
    if (iStack_4c != 0) {
      fn_822315A0(iStack_4c);
    }
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)fn_82279C58(auStack_48,*param_1);
      fn_8266F628(*puVar4,1);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
    }
    fn_822848B8(param_1[0x10c]);
    if (((code *)param_1[0x101] != (code *)0x0) && (param_3 != 0)) {
      (*(code *)param_1[0x101])(2,param_1[0x102]);
    }
    param_1[0x101] = 0;
    if (param_2 == 0) {
      return;
    }
    if (*param_1 == 0) {
LAB_8229e1fc:
      bVar2 = false;
    }
    else {
      lVar5 = 2;
      piVar3 = (int *)fn_82279C58(auStack_40);
      bVar2 = true;
      if (*piVar3 == 0) goto LAB_8229e1fc;
    }
    if ((lVar5 != 0) && (iStack_3c != 0)) {
      fn_822315A0();
    }
    if (!bVar2) goto LAB_8229e24c;
    puVar4 = (undefined4 *)fn_82279C58(auStack_38,*param_1);
    fn_82672660(*puVar4,param_1);
    iStack_54 = iStack_34;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    if (*param_1 == 0) {
LAB_8229e0ec:
      bVar2 = false;
    }
    else {
      lVar5 = 1;
      piVar3 = (int *)fn_82279C58(&uStack_60);
      bVar2 = true;
      if (*piVar3 == 0) goto LAB_8229e0ec;
    }
    if ((lVar5 != 0) && (iStack_5c != 0)) {
      fn_822315A0();
    }
    if (!bVar2) goto LAB_8229e24c;
    puVar4 = (undefined4 *)fn_82279C58(auStack_58,*param_1);
    fn_82672660(*puVar4,param_1);
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
LAB_8229e24c:
  fn_8229E260(param_1);
  return;
}

