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
extern int fn_82699DF0();
extern int fn_82705900();


void fn_826C7308(int *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  
  if (*(int *)(*param_4 + 0x10) != 0) {
    (**(code **)(*param_3 + 0x20))(param_3,param_4);
  }
  piVar1 = (int *)param_3[8];
  do {
    if (piVar1 == (int *)0x0) {
LAB_826c73a0:
      fn_82699DF0(param_1 + 0x2a,param_2,param_3);
      if ((*(int *)(*param_4 + 0x10) != 0) && ((*(byte *)((int)param_3 + 0x66) & 0x80) != 0)) {
        uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
        fn_82705900(uVar2,param_3);
      }
      *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
      return;
    }
    iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1);
    if (iVar3 != 0) {
      *(byte *)((int)param_3 + 0x66) = *(byte *)((int)param_3 + 0x66) | 1;
      (**(code **)(*param_3 + 0x3c))(param_3);
      goto LAB_826c73a0;
    }
    piVar1 = (int *)piVar1[8];
  } while( true );
}

