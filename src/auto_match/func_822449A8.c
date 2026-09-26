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
extern int fn_82247000();
extern int fn_8288B760();
extern int fn_828AB870();


void fn_822449A8(int *param_1,char param_2)

{
  int iVar3;
  longlong lVar1;
  char cVar5;
  longlong lVar2;
  int iVar4;
  
  fn_82247000();
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  lVar1 = (**(code **)(*(int *)(iVar3 + 0x48) + 0x3c))();
  cVar5 = fn_8288B760(param_1);
  iVar3 = (int)lVar1;
  if (cVar5 == '\0') {
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    lVar1 = (**(code **)(*(int *)(iVar4 + 0x9c) + 0x3c))();
    if ((param_2 != '\0') && (iVar3 <= (int)lVar1)) goto LAB_82244a80;
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    lVar2 = lVar2 + 0x9c;
  }
  else {
    if (4 < iVar3) goto LAB_82244a80;
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    lVar2 = lVar2 + 0x48;
  }
  fn_828AB870(lVar2,lVar1 + 1);
LAB_82244a80:
  fn_82247000(param_1);
  return;
}

