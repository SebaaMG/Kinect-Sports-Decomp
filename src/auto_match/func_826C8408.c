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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8269A5F8();
extern int fn_82758448();
extern int fn_82758A28();
extern unsigned int lbl_8200571C;


void fn_826C8408(double param_1,double param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_3 + 0x1b8) == 0) {
    uVar1 = (**(code **)(**(int **)(param_3 + 0xa0) + 0xd8))();
    iVar2 = fn_8267B890(uVar1,0x88,0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82758A28();
    }
    if (*(int *)(param_3 + 0x1b8) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(param_3 + 0x1b8) = uVar3;
  }
  fn_82758448((double)(float)(param_1 * (double)lbl_8200571C),
                    (double)(float)(param_2 * (double)lbl_8200571C),*(undefined4 *)(param_3 + 0x1b8)
                   );
  fn_8269A5F8(param_3);
  return;
}

