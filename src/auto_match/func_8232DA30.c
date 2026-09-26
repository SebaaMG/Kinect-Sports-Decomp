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
extern int fn_8232C528();


void fn_8232DA30(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (param_5 == 0) {
    if ((param_2 < 3) || ((5 < param_2 && (param_2 == 6)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    iVar2 = piVar1[2];
    piVar1[2] = (uint)!bVar3;
    (**(code **)(*piVar1 + 0x14))(piVar1,iVar2);
    fn_8232C528(*(undefined4 *)(param_1 + 0xc),1);
  }
  return;
}

