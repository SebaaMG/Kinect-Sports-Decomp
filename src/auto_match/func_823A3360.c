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
extern int fn_822AA770();
extern int fn_82399BA0();
extern int fn_8239D7F8();


undefined8 fn_823A3360(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  
  iVar4 = fn_82399BA0(*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = fn_822AA770(*(undefined4 *)(**(int **)(iVar1 + 8) + 4));
  if (iVar5 == 0) {
    iVar5 = fn_8239D7F8(iVar1,1);
    bVar2 = true;
    if (iVar5 != 0) goto LAB_823a33bc;
  }
  bVar2 = false;
LAB_823a33bc:
  if ((((iVar4 != 0) && (bVar2)) ||
      (iVar1 = *(int *)(*(int *)(iVar1 + 0xd4) + 0x14), *(int *)(iVar1 + 0x14) != 0)) ||
     (uVar3 = 1, *(int *)(iVar1 + 0x18) != 0)) {
    uVar3 = 0;
  }
  return uVar3;
}

