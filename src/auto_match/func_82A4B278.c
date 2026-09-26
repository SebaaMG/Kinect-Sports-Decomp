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
extern int fn_82A47B28();
extern int fn_82A4F4E0();


undefined8 fn_82A4B278(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar3);
  piVar1 = *(int **)(param_1 + 0x16c);
  do {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) goto LAB_82a4b304;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
      piVar1 = piVar2;
    }
    else {
      iVar4 = *piVar2;
      piVar1 = (int *)piVar2[1];
    }
  } while (iVar4 != param_2);
  fn_82A47B28(param_1 + 0x154,piVar2);
  (*(code *)**(undefined4 **)(iVar4 + 4))(iVar4 + 4,0);
  fn_82A4F4E0();
LAB_82a4b304:
  (**(code **)(*piVar3 + 0x14))(piVar3);
  return 0;
}

