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
extern int fn_82356F98();


int * fn_8235CB10(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_50 [20];
  
  iVar5 = *(int *)(param_2 + 0x18c);
  if (iVar5 == 0) {
LAB_8235cbdc:
    fn_82356F98(param_1);
  }
  else {
    iVar1 = *(int *)(param_2 + 0xa0);
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x40) == 1) || ((iVar1 != 0 && (*(int *)(iVar1 + 0x40) == 2))))
      goto LAB_8235cbdc;
    }
    iVar1 = *(int *)(param_2 + 400);
    iVar3 = 0;
    iVar4 = 0;
    if ((iVar1 != 0) && (cVar2 = fn_8223AAC0(iVar1), cVar2 != '\0')) {
      iVar3 = iVar5;
      iVar4 = iVar1;
    }
    iVar5 = *(int *)(param_2 + 400);
    *(undefined4 *)(param_2 + 400) = 0;
    *(undefined4 *)(param_2 + 0x18c) = 0;
    if (iVar5 != 0) {
      fn_822315A0();
    }
    *param_1 = 0;
    param_1[1] = 0;
    iVar5 = iVar4;
    if (param_1 != aiStack_50) {
      iVar5 = 0;
      param_1[1] = iVar4;
      *param_1 = iVar3;
    }
    if (iVar5 != 0) {
      fn_822315A0(iVar5);
    }
  }
  return param_1;
}

