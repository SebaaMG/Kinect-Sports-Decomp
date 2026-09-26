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
extern int fn_82965280();


void fn_829B3A20(undefined8 param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if (1 < *param_3) {
    fn_82965280(0xffffffff829b3a00,param_2,*param_3,0);
    uVar3 = 1;
    uVar5 = 1;
    uVar2 = 1;
    piVar4 = param_2;
    if (1 < *param_3) {
      do {
        uVar3 = uVar2;
        iVar1 = param_2[1];
        if (iVar1 != *param_2) {
          piVar4 = piVar4 + 1;
          *piVar4 = iVar1;
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = uVar3;
        param_2 = param_2 + 1;
      } while (uVar5 < *param_3);
    }
    *param_3 = uVar3;
  }
  return;
}

