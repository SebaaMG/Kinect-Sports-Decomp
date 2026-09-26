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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82CE5410();
extern int fn_82CE63B0();


undefined8 fn_82D2B850(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = fn_82CE5410();
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),piVar1,8);
  }
  puVar3 = (undefined8 *)(piVar1[1] * 8 + *piVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = CONCAT44(param_2,param_3);
  }
  piVar1[1] = piVar1[1] + 1;
  return 0;
}

