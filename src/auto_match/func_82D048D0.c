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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82D048D0(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = 1;
  iVar1 = fn_82CE5410();
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0xc),param_3,4);
  }
  *(int *)(param_3[1] * 4 + *param_3) = iVar2;
  iVar2 = param_3[1];
  while( true ) {
    param_3[1] = iVar2 + 1;
    iVar2 = 0x7fffffff;
    if (param_1[1] + -1 <= 0x7fffffff) {
      iVar2 = param_1[1] + -1;
    }
    if (iVar2 <= iVar3) {
      return;
    }
    while (*(char *)(*param_1 + iVar3) != param_2) {
      iVar3 = iVar3 + 1;
      if (iVar2 <= iVar3) {
        return;
      }
    }
    if (iVar3 < 0) {
      return;
    }
    *(undefined1 *)(*param_1 + iVar3) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = *param_1;
    iVar1 = fn_82CE5410();
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) break;
    *(int *)(param_3[1] * 4 + *param_3) = iVar2 + iVar3;
    iVar2 = param_3[1];
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar1 + 0xc),param_3,4);
}

