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


void fn_82DF5DB0(int *param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(*param_1 + iVar6);
      uVar1 = *(uint *)(iVar3 + 0x14);
      if ((uVar1 == param_2) || (*(uint *)(iVar3 + 0x18) == param_2)) {
        uVar2 = *(uint *)(iVar3 + 0x18);
        iVar4 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_3,4);
        }
        *(uint *)(param_3[1] * 4 + *param_3) = uVar2 ^ uVar1 ^ param_2;
        param_3[1] = param_3[1] + 1;
        iVar4 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar3;
        param_4[1] = param_4[1] + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < param_1[1]);
  }
  return;
}

