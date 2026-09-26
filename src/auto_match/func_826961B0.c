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
extern int fn_826824B0();
extern int fn_826C3378();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined1 * fn_826961B0(undefined1 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iStack_30;
  int iStack_2c;
  byte bStack_28;
  
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x10);
    iVar1 = (**(code **)(*(int *)(param_2 + 0x10) + 8))(piVar2);
    if (iVar1 == 0x17) {
      *param_1 = 8;
      piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(&iStack_30,piVar2);
      param_1[0xc] = 0;
      iVar1 = *piVar2;
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      if (piVar2[1] != 0) {
        fn_826C3378(param_1 + 4,piVar2[1],*(byte *)(piVar2 + 2) & 1);
      }
      if (((bStack_28 & 2) == 0) && (iStack_30 != 0)) {
        fn_826824B0();
      }
      iStack_30 = 0;
      if ((bStack_28 & 1) != 0) {
        return param_1;
      }
      if (iStack_2c == 0) {
        return param_1;
      }
      fn_826824B0();
      return param_1;
    }
  }
  *(int *)(param_1 + 4) = param_2;
  *param_1 = 6;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}

