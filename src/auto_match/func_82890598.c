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
extern unsigned int *auStack_28;
extern int fn_8288CCB8();
extern int fn_82897620();
extern int fn_82897B18();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();


undefined8 fn_82890598(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  int aiStack_30 [2];
  undefined1 auStack_28 [16];
  
  fn_828B5580(auStack_28,param_3 + 8);
  iVar4 = fn_828A12E8(param_2);
  fn_8288CCB8(aiStack_30,iVar4 + 4,auStack_28);
  if ((aiStack_30[0] != *(int *)(iVar4 + 8)) &&
     (piVar1 = *(int **)(aiStack_30[0] + 0x14), piVar1 != (int *)0x0)) {
    uVar2 = fn_82897B18(param_4);
    uVar3 = (**(code **)(*piVar1 + 8))(piVar1);
    uVar2 = fn_82897620(uVar3,uVar2);
    fn_828B55B0(auStack_28);
    return uVar2;
  }
  fn_828B55B0(auStack_28);
  return 0;
}

