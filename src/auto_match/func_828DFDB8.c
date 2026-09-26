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
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_828DF648();
extern int fn_828DF6E0();
extern int fn_828E0268();
extern int fn_828E9DB8();
extern int fn_828EA268();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;


void fn_828DFDB8(int *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar6;
  undefined4 *puVar7;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  piVar6 = (int *)(**(code **)(*param_1 + 8))(auStack_48,param_1);
  iVar1 = *piVar6;
  if (iStack_44 != 0) {
    fn_822315A0(iStack_44);
  }
  if (iVar1 != 0) {
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(auStack_40,param_1);
    fn_828DFDB8(*puVar7,param_2,0);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  iVar1 = param_1[3];
  lVar3 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
  if ((ulonglong)*(uint *)(iVar1 + 8) == 0) {
    lVar3 = 0;
  }
  iVar2 = param_1[2];
  uVar4 = fn_828EA268(lVar3);
  uVar5 = fn_828DF648(iVar1,iVar2);
  fn_8223C478(param_2,uVar4,0);
  fn_828E9DB8(param_2,uVar5,uVar4);
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  if (param_3 != '\0') {
    fn_828E0268(auStack_50,param_1[2]);
    piVar6 = (int *)fn_828DF6E0(auStack_4c,iVar1,auStack_50);
    iVar1 = *(int *)(*piVar6 + 0x10);
    if (iVar1 != 0) {
      lVar3 = (ulonglong)*(uint *)(iVar1 + 8) - 1;
      if ((ulonglong)*(uint *)(iVar1 + 8) == 0) {
        lVar3 = 0;
      }
      uVar4 = fn_828EA268(lVar3);
      uVar5 = fn_828DF648(iVar1,0xffffffff831d7088);
      fn_8223C478(param_2,uVar4,0);
      fn_828E9DB8(param_2,uVar5,uVar4);
    }
  }
  return;
}

