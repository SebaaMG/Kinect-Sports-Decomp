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
extern int fn_82FFBD98();
extern int fn_82FFF990();
extern int fn_8302B618();


void fn_82FFCAC8(longlong param_1,int *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2[7] != 0) {
    if (param_3 == '\0') {
      iVar2 = param_2[7] + -1;
    }
    else {
      iVar2 = 0;
    }
    param_2[7] = iVar2;
    if (iVar2 == 0) {
      piVar3 = (int *)param_2[4];
      if (piVar3 != (int *)param_2[5]) {
        do {
          iVar2 = *piVar3;
          piVar3 = piVar3 + 1;
          if ((*(uint *)(iVar2 + 0x14) & 0xffffff00) == 0x401100) {
            fn_82FFF990(*(undefined4 *)(iVar2 + 0x10));
            uVar1 = fn_8302B618(param_1 + 0x39c,*(undefined4 *)(iVar2 + 0x1c));
            if ((uVar1 & 0xffffffff) != 0) {
              fn_82FFBD98(uVar1,0);
            }
          }
        } while (piVar3 != (int *)param_2[5]);
      }
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return;
}

