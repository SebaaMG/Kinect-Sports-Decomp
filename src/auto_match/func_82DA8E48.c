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


int * fn_82DA8E48(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (0 < param_2[1]) {
    piVar2 = (int *)*param_2;
    do {
      if (param_1 == *piVar2) {
        return (int *)*param_2 + iVar1 * 6;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 < param_2[1]);
  }
  iVar1 = fn_82CE5410();
  if (param_2[1] != (param_2[2] & 0x3fffffffU)) {
    puVar3 = (undefined4 *)(param_2[1] * 0x18 + *param_2);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    iVar1 = param_2[1];
    param_2[1] = iVar1 + 1;
    puVar3 = (undefined4 *)(iVar1 * 0x18 + *param_2);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    *(int *)(param_2[1] * 0x18 + *param_2 + -0x18) = param_1;
    return (int *)(param_2[1] * 0x18 + *param_2 + -0x18);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_2,0x18);
}

