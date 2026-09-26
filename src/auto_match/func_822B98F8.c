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
extern int fn_82554260();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int lbl_821CC160;


void fn_822B98F8(int *param_1)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  
  if ((param_1[10] == 0) && (param_1[7] == 0)) {
    piVar1 = *(int **)(*param_1 + 0x8c0);
    if (piVar1 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,param_1 + 6);
      param_1[7] = iVar3;
      if (iVar3 != 0) {
        uVar2 = fn_827F04B0(0x1a0);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_82554260(uVar2,param_1[7],1);
        }
        param_1[8] = iVar3;
        fn_827F2DD0((double)lbl_821CC160,param_1[7]);
        (**(code **)(*piVar1 + 0x9c))(piVar1,param_1[6]);
      }
    }
  }
  return;
}

