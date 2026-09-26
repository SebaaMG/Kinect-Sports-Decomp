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
extern int fn_822472C8();
extern int fn_8288B760();
extern int fn_828AB870();


void fn_822471C8(int *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar6;
  int iVar4;
  int iVar5;
  longlong lVar3;
  
  bVar1 = false;
  lVar2 = fn_82247000();
  lVar2 = lVar2 + 1 + (longlong)((int)(lVar2 + 1) / 6) * -6;
  cVar6 = fn_8288B760(param_1);
  if (cVar6 == '\0') {
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x9c) + 0x3c))();
    iVar5 = (**(code **)(*param_1 + 8))(param_1);
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x48) + 0x3c))();
    if ((param_2 != '\0') && (iVar5 <= iVar4)) goto LAB_82247270;
  }
  bVar1 = true;
LAB_82247270:
  if (bVar1) {
    cVar6 = fn_8288B760(param_1);
    if (cVar6 == '\0') {
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = lVar3 + 0x9c;
    }
    else {
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      lVar3 = lVar3 + 0x48;
    }
    fn_828AB870(lVar3,lVar2);
    fn_822472C8(param_1,lVar2);
  }
  return;
}

