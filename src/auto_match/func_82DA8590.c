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
extern int fn_82D7C120();
extern int fn_82DB05D8();


void fn_82DA8590(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (int)*(char *)(*param_2 + 5) + *param_2;
  iVar3 = (int)*(char *)(param_2[1] + 5) + param_2[1];
  iVar1 = *(char *)(iVar1 + 0x10) + iVar1;
  iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  if ((((*(char *)(iVar2 + 0x68) != '\0') && (*(char *)(iVar1 + 0xe8) != '\x05')) &&
      (*(char *)(iVar3 + 0xe8) != '\x05')) && (*(int *)(iVar1 + 0xcc) != *(int *)(iVar3 + 0xcc))) {
    iVar1 = fn_82CE5410();
    if (*(uint *)(iVar2 + 0x98) != (*(uint *)(iVar2 + 0x9c) & 0x3fffffff)) {
      piVar4 = (int *)(*(int *)(iVar2 + 0x98) * 8 + *(int *)(iVar2 + 0x94));
      if (piVar4 != (int *)0x0) {
        *piVar4 = *param_2;
        piVar4[1] = param_2[1];
      }
      *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),(int *)(iVar2 + 0x94),8);
  }
  iVar2 = fn_82D7C120();
  if (iVar2 != 0) {
    fn_82DB05D8();
  }
  return;
}

