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
extern int fn_8223C478();
extern int fn_8288B4F0();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_828E9DB8();
extern int fn_82F68B78();


void fn_828ABD28(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 4);
  puVar3 = (undefined2 *)fn_82F68B78(param_3,uVar5,param_2);
  if (*(char *)((int)puVar3 + 7) == '\0') {
    uVar6 = 0x8000;
  }
  else {
    uVar6 = puVar3[1];
  }
  uVar2 = fn_828A12E8(uVar5);
  fn_8288B4F0(uVar2,uVar6,param_2);
  if (*(char *)((int)puVar3 + 7) != '\0') {
    uVar6 = puVar3[1];
    uVar2 = fn_828A12E8(uVar5);
    iVar4 = fn_8288DD10(uVar2,uVar6);
    uVar6 = *puVar3;
    uVar1 = *(undefined2 *)(iVar4 + 0x20);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar6,2);
    uVar6 = puVar3[2];
    fn_8223C478(param_2,uVar1,0);
    fn_828E9DB8(param_2,uVar6,uVar1);
  }
  return;
}

