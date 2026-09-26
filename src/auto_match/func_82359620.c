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
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_82359620(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = param_2[1];
  uVar2 = *param_2;
  uStack_30 = 0;
  iStack_2c = 0;
  uVar3 = uStack_30;
  iVar4 = iStack_2c;
  if (((iVar1 != 0) &&
      (cVar5 = fn_8223AAC0(iVar1), uVar3 = uStack_30, iVar4 = iStack_2c, cVar5 != '\0')) &&
     (uVar3 = uVar2, iVar4 = iVar1, iStack_2c != 0)) {
    fn_822315A0();
  }
  iStack_2c = iVar4;
  uStack_30 = uVar3;
  (**(code **)(*(int *)(param_1 + 0x40) + 4))(param_1 + 0x40,&uStack_30);
  return;
}

