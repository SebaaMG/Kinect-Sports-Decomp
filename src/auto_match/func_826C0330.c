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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_48;
extern int fn_82694D70();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_826964E0();
extern int fn_82696588();
extern int fn_82696BC8();
extern int fn_826A8E58();
extern int fn_826BF0F8();
extern int fn_826BF258();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_50;


undefined8 fn_826C0330(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piStack_60;
  int iStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [72];
  
  iVar6 = param_1 + -0x10;
  bVar2 = false;
  if (*(byte *)(param_2 + 1) < 7) {
    if (*(int *)(*param_3 + 4) == 0) {
      fn_82694D70();
    }
    piStack_60 = param_3;
    if (*(int *)(*param_3 + 4) == 0) {
      fn_82694D70();
    }
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
      if (*(int *)(*(int *)(*param_2 + 0x134) + 4) == *(int *)(*param_3 + 4)) goto LAB_826c0424;
      if (*(int *)(*(int *)(*param_2 + 0x144) + 4) == *(int *)(*param_3 + 4)) goto LAB_826c044c;
      fn_826BF258(&piStack_58,iVar6 + 0x18,&piStack_60);
      uStack_50 = 0;
      cVar4 = fn_826A8E58(auStack_48,&uStack_50);
      piVar1 = piStack_58;
      iStack_5c = iStack_54;
      if (cVar4 == '\0') {
LAB_826c0470:
        iVar5 = iStack_5c * 0x20 + *piVar1;
        if ((*(char *)(iVar5 + 0x18) == '\n') && (iVar6 != param_1 + -0x10)) {
          uVar3 = (**(code **)(*(int *)(iVar6 + 0x10) + 0x2c))(iVar6 + 0x10,param_2,param_3,param_4)
          ;
          return uVar3;
        }
        fn_82695FA0(param_4,iVar5 + 0x18);
        return 1;
      }
      if ((!bVar2) && (*(int *)(iVar6 + 0x1c) != 0)) {
        fn_82696588(param_4,iVar6 + 0x1c);
        bVar2 = true;
      }
    }
  }
  else {
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
      if (*param_3 == *(int *)(*param_2 + 0x134)) goto LAB_826c0424;
      if (*param_3 == *(int *)(*param_2 + 0x144)) goto LAB_826c044c;
      fn_826BF0F8(&piStack_60,iVar6 + 0x18,param_3);
      piStack_58 = (int *)0x0;
      iStack_54 = 0;
      uStack_50 = CONCAT44(piStack_60,iStack_5c);
      cVar4 = fn_826A8E58(&uStack_50,&piStack_58);
      piVar1 = piStack_60;
      if (cVar4 == '\0') goto LAB_826c0470;
      if ((!bVar2) && (*(int *)(iVar6 + 0x1c) != 0)) {
        fn_82696588(param_4,iVar6 + 0x1c);
        bVar2 = true;
      }
    }
  }
  return 0;
LAB_826c0424:
  iVar5 = 0;
  if (*(int *)(iVar6 + 0x14) != 0) {
    fn_82696BC8(param_4);
    return 1;
  }
  goto LAB_826c043c;
LAB_826c044c:
  iVar5 = iVar6 + 0x1c;
  if (*(int *)(iVar6 + 0x1c) != 0) {
    fn_826964E0();
    return 1;
  }
LAB_826c043c:
  fn_826959C8(param_4,iVar5);
  *param_4 = 0;
  return 1;
}

