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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_826728E8();


void fn_824C5748(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x1c))();
  }
  (**(code **)(*(int *)*param_2 + 0x18))();
  iVar1 = *param_1;
  uVar3 = (**(code **)(*(int *)*param_2 + 0x10))();
  (**(code **)(iVar1 + 8))(param_1,uVar3);
  lVar4 = (**(code **)(*(int *)*param_2 + 0x14))();
  if (lVar4 != 0) {
    fn_826728E8(param_1[1],0xffffffff821ab400);
  }
  iVar1 = param_2[1];
  iVar2 = *param_2;
  iVar6 = 0;
  iVar7 = 0;
  if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
    iVar6 = iVar2;
    iVar7 = iVar1;
  }
  iVar1 = param_1[0xf];
  param_1[0xf] = iVar7;
  param_1[0xe] = iVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

