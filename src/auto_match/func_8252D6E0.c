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
extern int fn_82532F98();
extern int fn_82554B28();
extern int fn_8255EBE0();
extern int fn_8255EDD0();
extern int fn_827F0180();


void fn_8252D6E0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18c) != 0) {
    if (*(int *)(param_1 + 0x1b0) == 0) {
      fn_8255EBE0(*(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x1ac));
    }
    else {
      fn_8255EDD0();
    }
    if (*(int *)(param_1 + 400) != 0) {
      fn_82554B28(*(int *)(param_1 + 400),*(undefined4 *)(param_1 + 0x8c0));
    }
    if ((*(int *)(param_1 + 0x8c0) != 0) &&
       (iVar3 = (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x8c0) + 0x1b4))(), iVar3 != 0)) {
      piVar1 = *(int **)(param_1 + 0x8c0);
      puVar2 = (undefined4 *)piVar1[*(int *)(param_2 + 0x44) + 0x20];
      iVar3 = (**(code **)(*piVar1 + 0xac))(piVar1);
      if (iVar3 == 0) {
        fn_827F0180(*(undefined4 *)(param_1 + 0x18c),*puVar2,1,0,0);
      }
      else {
        fn_827F0180(*(undefined4 *)(param_1 + 0x18c),puVar2[1],1,0,0);
        (**(code **)(*(int *)piVar1[0x6d] + 0x18))();
        fn_82532F98(puVar2,0xffffffff82190260);
      }
    }
  }
  return;
}

