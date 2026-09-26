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
extern int fn_825089A0();
extern int fn_828D3860();
extern unsigned int uStack_40;


void fn_828D3F40(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uStack_40;
  
  if (param_1 != param_2) {
    piVar3 = param_1 + 1;
    do {
      if (*piVar3 != 0) {
        fn_828D3860(*piVar3,piVar3[1],piVar3 + 3,uStack_40);
        iVar1 = *piVar3;
        piVar2 = (int *)fn_825089A0();
        (**(code **)(*piVar2 + 0x28))(piVar2,iVar1);
      }
      *piVar3 = 0;
      piVar2 = piVar3 + 4;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3 = piVar3 + 5;
    } while (piVar2 != param_2);
  }
  return;
}

