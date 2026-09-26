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
extern int fn_82CE6310();
extern int fn_82CFC050();


int fn_82CFEED8(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = piVar1[1];
  iVar3 = iVar2 - *(int *)(param_1 + 0xc);
  if (iVar3 < param_3) {
    iVar3 = (iVar2 - iVar3) + param_3;
    iVar5 = iVar3 + 1;
    iVar2 = fn_82CE5410();
    if ((int)(piVar1[2] & 0x3fffffffU) < iVar5) {
      iVar4 = (piVar1[2] & 0x3fffffffU) << 1;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),piVar1,iVar4,1);
    }
    *(int *)(*(int *)(param_1 + 8) + 4) = iVar3;
    *(undefined1 *)(**(int **)(param_1 + 8) + iVar3) = 0;
  }
  else if (iVar2 < (int)(piVar1[2] & 0x3fffffffU)) {
    *(undefined1 *)(*piVar1 + iVar2) = 0;
  }
  fn_82CFC050((ulonglong)**(uint **)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0xc),param_2,
               param_3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return param_3;
}

