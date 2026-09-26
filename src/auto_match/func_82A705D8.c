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
extern int fn_82A81780();


undefined8
fn_82A705D8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  fn_82A81780(param_3,param_5,*(undefined2 *)(param_1 + 0xae));
  if (1 < (int)param_5) {
    iVar3 = 1;
    do {
      sVar2 = (short)iVar3 + 1;
      piVar1 = (int *)(iVar3 * 4 + param_3);
      iVar3 = (int)sVar2;
      *piVar1 = (piVar1[-1] * *(int *)(param_1 + 0x278) + 0x20 >> 6) + *piVar1;
    } while ((int)sVar2 < (int)param_5);
  }
  return 1;
}

