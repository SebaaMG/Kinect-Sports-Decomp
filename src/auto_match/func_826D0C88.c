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
extern int fn_8267C498();
extern int fn_8269A110();
extern int fn_8269D548();
extern int fn_826C6C90();
extern int fn_826C6E68();
extern int fn_826C90C8();
extern int fn_826D0AE8();
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_25;
extern unsigned int uStack_26;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_35;
extern unsigned int uStack_36;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826D0C88(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  if ((param_1[0x23] & 0xcU) != 0) {
    return;
  }
  if (param_1[5] < -1) {
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(param_1[0x28] + 0xb8c) = *(int *)(param_1[0x28] + 0xb8c) + 1;
  if ((((param_2 != '\0') && (fn_826D0AE8(), param_1[0x2e] != 1)) &&
      (piVar2 = (int *)(**(code **)(*(int *)param_1[0x27] + 0x38))(), piVar2 != (int *)0x0)) &&
     (cVar3 = (**(code **)(*piVar2 + 4))(piVar2,param_1[0x28],param_1[0x2f],param_1), cVar3 == '\0')
     ) {
    (**(code **)(*(int *)param_1[0x27] + 0x3c))((int *)param_1[0x27],0);
  }
  if (*(int *)(param_1[0x28] + 0x9d4) != 0) {
    fn_8269D548(param_1);
  }
  if (param_2 == '\0') goto LAB_826d0e64;
  if (param_1[0x2e] == 0) {
    iVar1 = param_1[0x2f];
    fn_826C6C90(param_1);
    if (param_1[0x2f] == iVar1) {
      uStack_3c = 0;
      uStack_40 = 2;
      puVar4 = &uStack_40;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0xff;
      uStack_34 = 0;
      uStack_33 = 0;
      goto LAB_826d0e3c;
    }
    fn_826C6E68(param_1);
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_50 = 2;
    uStack_45 = 0xff;
    (**(code **)(*param_1 + 0x6c))(param_1,&uStack_50);
    fn_826C90C8(param_1,param_1[0x2f]);
  }
  else {
    uStack_2c = 0;
    uStack_30 = 2;
    puVar4 = &uStack_30;
    uStack_28 = 0;
    uStack_26 = 0;
    uStack_25 = 0xff;
    uStack_24 = 0;
    uStack_23 = 0;
LAB_826d0e3c:
    (**(code **)(*param_1 + 0x6c))(param_1,puVar4);
  }
  if (param_1[0x2f] == 0) {
    fn_8269A110(param_1 + 0x2a);
  }
LAB_826d0e64:
  fn_8267C498(param_1);
  return;
}

