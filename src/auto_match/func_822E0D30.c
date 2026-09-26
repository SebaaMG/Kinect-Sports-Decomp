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
extern int fn_824D68B0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CD618;


undefined8
fn_822E0D30(int param_1,int param_2,undefined8 param_3,int param_4,undefined4 *param_5,
             undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24);
  uVar3 = 0xffffffff831cd5f8;
  if (param_4 == 0) {
    uVar3 = 0xffffffff831cd608;
  }
  dVar4 = (double)lbl_821CA460;
  iVar1 = fn_824D68B0((double)lbl_831CD618,dVar4,uVar2,param_3,1,param_4,uVar3);
  if (iVar1 == 0) {
    if (((int)param_3 == 1) ||
       (iVar1 = fn_824D68B0((double)lbl_831CD618,dVar4,uVar2,param_3,0), iVar1 == 0)) {
      if (*(int *)(param_2 + 4) != 0) {
        fn_822315A0();
      }
      return 0;
    }
    uVar2 = 0;
    *param_6 = 2;
  }
  else {
    uVar2 = 1;
    *param_6 = 1;
  }
  iVar1 = *(int *)(param_2 + 4);
  *param_5 = uVar2;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return 1;
}

