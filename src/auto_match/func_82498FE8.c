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
extern int fn_8248F8E8();
extern int fn_82492768();
extern int fn_824973B0();
extern int fn_82497430();


undefined4 * fn_82498FE8(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_2 + 4);
  if ((param_3 == (int *)**(int **)(param_2 + 4)) && (param_4 == *(int **)(param_2 + 4))) {
    piVar2 = (int *)*piVar3;
    piVar4 = (int *)*piVar2;
    *piVar2 = (int)piVar2;
    *(int *)(*piVar3 + 4) = *piVar3;
    *(undefined4 *)(param_2 + 8) = 0;
    if (piVar4 != (int *)*piVar3) {
      do {
        piVar2 = (int *)*piVar4;
        fn_82492768(piVar4 + 3);
        fn_8248F8E8(piVar4);
        piVar4 = piVar2;
      } while (piVar2 != (int *)*piVar3);
    }
    fn_82497430(param_2,8);
    *param_1 = *(undefined4 *)*piVar3;
  }
  else {
    while (piVar2 = param_3, piVar2 != param_4) {
      param_3 = (int *)*piVar2;
      iVar1 = fn_824973B0(param_2,piVar2 + 2);
      piVar4 = (int *)(iVar1 * 8 + *(int *)(param_2 + 0x10));
      if ((int *)piVar4[1] == piVar2) {
        if ((int *)*piVar4 == piVar2) {
          *piVar4 = *piVar3;
          *(int *)(iVar1 * 8 + *(int *)(param_2 + 0x10) + 4) = *piVar3;
        }
        else {
          piVar4[1] = piVar2[1];
        }
      }
      else if ((int *)*piVar4 == piVar2) {
        *piVar4 = *piVar2;
      }
      if (piVar2 != (int *)*piVar3) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        fn_82492768(piVar2 + 3);
        fn_8248F8E8(piVar2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      }
    }
    *param_1 = piVar2;
  }
  return param_1;
}

