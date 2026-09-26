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


void fn_82E17CD8(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar4 = *(uint *)(param_1 + 0x24) + param_2;
  if (0 < (longlong)((ulonglong)*(uint *)(param_1 + 0x28) - (ulonglong)*(uint *)(param_1 + 0x24))) {
    do {
      iVar2 = *(int *)(iVar8 + iVar4);
      iVar6 = iVar8 + 4;
      if (iVar2 == -1) {
        return;
      }
      uVar7 = 0;
      cVar1 = *(char *)(iVar6 + iVar4);
      while (cVar1 != '\0') {
        uVar7 = uVar7 + 1;
        cVar1 = *(char *)(uVar7 + iVar6 + iVar4);
      }
      do {
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 3) != 0);
      iVar8 = uVar7 + iVar6;
      iVar5 = fn_82CE5410();
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,8);
      }
      iVar5 = *param_3;
      iVar3 = param_3[1] * 8;
      param_3[1] = param_3[1] + 1;
      *(int *)(iVar3 + iVar5) = iVar6 + iVar4;
      *(int *)(iVar3 + iVar5 + 4) = iVar2 + param_2;
    } while (iVar8 < *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24));
  }
  return;
}

