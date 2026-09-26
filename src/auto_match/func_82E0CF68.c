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
extern int fn_82CEAC60();
extern int fn_82E0A018();
extern int fn_82E0A398();
extern int fn_82E0BA38();
extern int fn_82E0C5E0();
extern int fn_82E12D08();
extern int fn_82E162A8();


undefined8 fn_82E0CF68(int *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int *piVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar6;
  int iVar7;
  ulonglong uVar4;
  undefined1 auStack_40 [64];
  
  if ((param_3 & 0xffffffff) != 0) {
    fn_82E12D08();
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((param_2 & 0xffffffff) == 0) || ((uVar1 & 0xffffffff) == 0)) {
LAB_82e0d00c:
    (**(code **)(*param_1 + 0x1c))(param_1);
    if ((param_3 & 0xffffffff) == 0) {
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar4 = fn_82E0A398();
      if ((uVar4 & 0xffffffff) != 0) {
        fn_82E0C5E0(param_1,uVar4);
      }
      uVar2 = fn_82E0BA38(param_1);
      fn_82E162A8(param_1[6],uVar2);
    }
    else {
      iVar7 = fn_82E0A018(param_1,param_3);
      if (iVar7 == 1) goto LAB_82e0d03c;
    }
    uVar2 = (**(code **)(*(int *)param_1[6] + 0x18))((int *)param_1[6],uVar1,param_3);
  }
  else {
    piVar5 = (int *)fn_82E0BA38(param_1);
    uVar2 = (**(code **)(*piVar5 + 0x10))(piVar5,param_2);
    uVar3 = (**(code **)(*piVar5 + 0x10))(piVar5,uVar1);
    pcVar6 = (char *)fn_82CEAC60(auStack_40,uVar2,uVar3);
    if (*pcVar6 != '\0') goto LAB_82e0d00c;
LAB_82e0d03c:
    uVar2 = 0;
  }
  return uVar2;
}

