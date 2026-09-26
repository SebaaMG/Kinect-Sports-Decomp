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
extern unsigned int uStack_1c;


undefined8 fn_826860D8(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar3;
  undefined8 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  
  if (*param_1 == 0) {
    piVar3 = (int *)(**(code **)(*(int *)param_1[1] + 4))(&piStack_20);
    piVar1 = (int *)*piVar3;
    if ((piVar1 == (int *)0x0) || (*param_2 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,piVar3[1],param_2);
    }
    if (piStack_20 != (int *)0x0) {
      (**(code **)(*piStack_20 + 8))(piStack_20,uStack_1c);
    }
  }
  else {
    piVar1 = *(int **)(param_1[1] + 0x14);
    if ((piVar1 == (int *)0x0) || (*param_2 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(param_1[1] + 0x18),param_2);
    }
  }
  return uVar2;
}

