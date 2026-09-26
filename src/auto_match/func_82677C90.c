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
extern int fn_82631488();
extern int fn_828F0DD0();


undefined8 fn_82677C90(undefined8 param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar3;
  undefined8 uVar2;
  char *pcVar4;
  int *piStack_20;
  int *piStack_1c;
  
  if (*param_2 == 0) {
    piStack_1c = (int *)0x0;
    piStack_20 = (int *)0x0;
    pcVar4 = param_3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_828F0DD0(param_3,pcVar4 + (-1 - (int)param_3),0,0,0xffffffff821bbc7c,
                              0xffffffff82005334,1,&piStack_20);
    if (piStack_20 != (int *)0x0) {
      if (-1 < iVar3) {
        (**(code **)(*piStack_20 + 0xc))();
        iVar3 = fn_82631488();
        *param_2 = iVar3;
        if (iVar3 != 0) {
          if (piStack_20 != (int *)0x0) {
            (**(code **)(*piStack_20 + 8))();
          }
          if (piStack_1c != (int *)0x0) {
            (**(code **)(*piStack_1c + 8))();
          }
          goto code_r0x82677db0;
        }
        if (piStack_20 == (int *)0x0) goto code_r0x82677d34;
      }
      (**(code **)(*piStack_20 + 8))();
    }
code_r0x82677d34:
    if (piStack_1c != (int *)0x0) {
      (**(code **)(*piStack_1c + 8))();
    }
    uVar2 = 0;
  }
  else {
code_r0x82677db0:
    uVar2 = 1;
  }
  return uVar2;
}

