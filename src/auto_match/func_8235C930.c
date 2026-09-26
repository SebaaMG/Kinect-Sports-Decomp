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
extern int fn_82419580();
extern int fn_82419700();


void fn_8235C930(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 0x58) {
    if (*(int *)(param_1 + 0x2b20) != 0) {
      fn_82419580(*(int *)(param_1 + 0x2b20),param_2[2]);
    }
  }
  else if ((*param_2 == 0x59) && (iVar2 = 0, 0 < *(int *)(param_1 + 0xc04))) {
    iVar3 = param_1 + 0x1ec0;
    do {
      iVar1 = fn_82419700(iVar3,param_2[2]);
      if (iVar1 != 0) {
        param_2[3] = 1;
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x420;
    } while (iVar2 < *(int *)(param_1 + 0xc04));
  }
  return;
}

