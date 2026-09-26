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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A16E8();
extern int fn_826AA930();
extern int fn_826C40A8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_82701F78(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar7;
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [80];
  
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    if ((*(int *)(iVar6 + 0xc) == 0) || (bVar3 = false, **(char **)(iVar6 + 8) == '\0')) {
      bVar3 = true;
    }
    if (!bVar3) {
      iVar6 = (**(code **)(*param_2 + 0x5c))(param_2);
      uVar1 = *(undefined4 *)(*(int *)(iVar6 + 0x78) + 0x288);
      uVar4 = fn_8267B890(uVar1,0x20,0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_826AA930(uVar4,iVar6 + 0x78,param_1[4]);
      }
      iVar2 = *param_1;
      if ((((iVar2 == 1) || (iVar2 == 4)) || (iVar2 == 0x200)) || (uVar7 = 3, iVar2 == 0x40000)) {
        uVar7 = 4;
      }
      uVar5 = fn_8267B890(uVar1,0x68,0);
      if ((uVar5 & 0xffffffff) == 0) {
        iStack_60 = 0;
      }
      else {
        iStack_60 = fn_826C40A8(uVar5,iVar6,uVar4,0,*(undefined4 *)(param_1[4] + 0xc),0,uVar7)
        ;
      }
      bStack_58 = 0;
      iStack_5c = 0;
      fn_82695750(auStack_50,&iStack_60);
      if (((bStack_58 & 2) == 0) && (iStack_60 != 0)) {
        fn_826824B0();
      }
      iStack_60 = 0;
      if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
        fn_826824B0();
      }
      iStack_5c = 0;
      fn_826A16E8(param_2,param_1,auStack_50);
      fn_82696330(auStack_50);
      if ((uVar4 & 0xffffffff) != 0) {
        fn_8267C498(uVar4);
      }
    }
    return;
  }
  return;
}

